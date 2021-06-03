#define MuonSystem_cxx
#include "MuonSystem.hh"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <iostream>
#include <TGraph.h>
#include <math.h>

//#define tracker_radius 129
#define tracker_radius 65
//#define tracker_z 300
#define tracker_z 200
#define ecal_radius 184
#define ecal_z 376
#define hcal_radius 295
#define hcal_z 560
#define solenoid_radius 385
#define solenoid_z 650
#define dt_radius 728.5
#define dt_z 650
#define csc_radius 728.5
#define csc_z 1060


void MuonSystem::CreateOutTree()
{
  tOut = new TTree("ms_acc", "muon system acceptance tree");
  tOut->Branch("det_ID", det_ID, "det_ID[2]/I");
  tOut->Branch("ctau_weight", ctau_weight, "ctau_weight[13]/D");
  tOut->Branch("gLLP_ctau", gLLP_ctau, "gLLP_ctau[2]/F");
};

MuonSystem::detectorID MuonSystem::GetLLP_DetectorID(int index = 0)
{
  //if(  ) return detectorID::NO_ACC;

  if ( gLLP_decay_vertex_r[index] < tracker_radius && fabs(gLLP_decay_vertex_z[index]) < tracker_z && fabs(gLLP_eta[index]) < 2.4) return detectorID::Tracker;
  else if ( gLLP_decay_vertex_r[index] >= tracker_radius && gLLP_decay_vertex_r[index] < ecal_radius && fabs(gLLP_decay_vertex_z[index]) < ecal_z) return detectorID::EB;
  else if ( gLLP_decay_vertex_r[index] < tracker_radius && fabs(gLLP_decay_vertex_z[index]) > tracker_z && fabs(gLLP_decay_vertex_z[index]) < ecal_z && fabs(gLLP_eta[index]) < 3.0) return detectorID::EE;
  else if ( gLLP_decay_vertex_r[index] >= ecal_radius && gLLP_decay_vertex_r[index] < hcal_radius && fabs(gLLP_decay_vertex_z[index]) < hcal_z) return detectorID::HB;
  else if ( gLLP_decay_vertex_r[index] < ecal_radius && fabs(gLLP_decay_vertex_z[index]) > ecal_z && fabs(gLLP_decay_vertex_z[index]) < hcal_z && fabs(gLLP_eta[index]) < 3.0) return detectorID::HE;
  else if ( gLLP_decay_vertex_r[index] >= hcal_radius && gLLP_decay_vertex_r[index] < solenoid_radius && fabs(gLLP_decay_vertex_z[index]) < solenoid_z) return detectorID::SM;
  //else if ( gLLP_decay_vertex_r[index] >= solenoid_radius && gLLP_decay_vertex_r[index] < dt_radius && fabs(gLLP_decay_vertex_z[index]) < dt_z) return detectorID::DT;
  else if ( gLLP_decay_vertex_r[index] >= hcal_radius && gLLP_decay_vertex_r[index] < dt_radius && fabs(gLLP_decay_vertex_z[index]) < dt_z) return detectorID::DT;
  else if ( gLLP_decay_vertex_r[index] < hcal_radius && fabs(gLLP_decay_vertex_z[index]) > hcal_z && fabs(gLLP_decay_vertex_z[index]) < dt_z && fabs(gLLP_eta[index]) < 2.4) return detectorID::CSC;
  else if ( gLLP_decay_vertex_r[index] < csc_radius && fabs(gLLP_decay_vertex_z[index]) > dt_z && fabs(gLLP_decay_vertex_z[index]) < csc_z && fabs(gLLP_eta[index]) < 2.4) return detectorID::CSC;
  else if ( gLLP_decay_vertex_r[index] > csc_radius  || fabs(gLLP_decay_vertex_z[index]) > csc_z ) return detectorID::OUT;
  return detectorID::NO_ACC;
};

float MuonSystem::GetCtau(float rf_decay_length1, float rf_decay_length2, float old_ctau, float new_ctau)
{
  float summed_decay_length = rf_decay_length1+rf_decay_length2;
  float source = exp(-1.0*summed_decay_length/old_ctau)/pow(old_ctau,2);
  float weight = 1.0/pow(new_ctau,2) * exp(-1.0*summed_decay_length/new_ctau)/source;
  return weight;
};
void MuonSystem::Loop()
{
//   In a ROOT session, you can do:
//      root> .L MuonSystem.C
//      root> MuonSystem t
//      root> t.GetEntry(12); // Fill t data members with entry number 12
//      root> t.Show();       // Show values of entry 12
//      root> t.Show(16);     // Read and show values of entry 16
//      root> t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch
   if (fChain == 0) return;
   TFile* fout = new TFile("histograms.root", "recreate");
   CreateOutTree();
   TH1F* h_higgs_pt = new TH1F("h_higgs_pt", "higgs_pt", 100,0, 1000);
   TH1F* h_met_pt   = new TH1F("h_met_pt", "met_pt", 100,0, 1000);
   TH1F* h_ht       = new TH1F("h_ht", "ht", 100,0, 1000);

   Long64_t nentries = fChain->GetEntriesFast();
   const int nctau = 13;
   double ctau_points[] = {1., 3., 6., 10., 30., 60., 100., 300., 600. , 1000., 3000., 6000., 10000.};
   double full_total = 0.0;
   double total[nctau];
   double csc[nctau];
   double csc_met50[nctau];
   double csc_met120[nctau];
   double csc_met200[nctau];
   double ms_ms[nctau];//csc+csc;csc+dt
   double csc_ecal[nctau];
   double csc_hcal[nctau];
   double csc_cal[nctau];
   double csc_tracker[nctau];

   for(int i = 0; i < nctau; i++)
   {
     total[i]       = 0.0;
     csc[i]         = 0.0;
     csc_met50[i]   = 0.0;
     csc_met120[i]  = 0.0;
     csc_met200[i]  = 0.0;
     ms_ms[i]       = 0.0;
     ctau_weight[i] = 0.0;
     csc_ecal[i]    = 0.0;
     csc_hcal[i]    = 0.0;
     csc_cal[i]     = 0.0;
     csc_tracker[i] = 0.0;
   }

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;

      bool is_nan = false;
      for (int i = 0; i < nctau; i++)
      {
        //ctau_weight[i] = GetCtau(gLLP_ctau[0], gLLP_ctau[1], ctau/10., ctau_points[i]);
        ctau_weight[i] = GetCtau(gLLP_ctau[0], gLLP_ctau[1], 10., ctau_points[i]);
        if(isnan(ctau_weight[i]))
        {
          std::cout << ctau << " " << weight << " " << pileupWeight << " "
          << met << " " << gHiggsPt << " " << gLLP_ctau[0] << " " << gLLP_ctau[1]
          << " " << gLLP_eta[0] << " " << gLLP_eta[1] << " " << gLLP_decay_vertex_r[0]
          << " " << gLLP_decay_vertex_r[1] << " " << gLLP_decay_vertex_x[0]
          << " " << gLLP_decay_vertex_x[1] << " " << gLLP_decay_vertex_y[0]
          << " " << gLLP_decay_vertex_y[1] << " " << gLLP_decay_vertex_z[0]
          << " " << gLLP_decay_vertex_z[1] << std::endl;
          is_nan = true;
        }
        if( ctau_weight[i] > 1e5 ) is_nan = true;
      }

      if (is_nan) continue;
      //double my_weight = weight*pileupWeight;
      double my_weight = 1.0;
      full_total += my_weight;

      det_ID[0] = GetLLP_DetectorID(0);
      det_ID[1] = GetLLP_DetectorID(1);
      // std::cout << ctau << " " << weight << " " << pileupWeight << " "
      // << met << " " << gHiggsPt << " " << gLLP_ctau[0] << " " << gLLP_ctau[0]
      // << std::endl;
      h_higgs_pt->Fill(gHiggsPt);
      h_met_pt->Fill(met);
      h_ht->Fill(this->HT);

      for (int i = 0; i < nctau; i++) total[i] += my_weight*ctau_weight[i];

      //if( det_ID[0] == -2 || det_ID[1] == -2) std::cout << "detector id: " << det_ID[0] << " " << det_ID[1] << std::endl;
      if( det_ID[0] == detectorID::CSC || det_ID[1] == detectorID::CSC)
      {
        for (int i = 0; i < nctau; i++)
        {
          csc[i] += my_weight*ctau_weight[i];
          if ( met > 50.  ) csc_met50[i]  += my_weight*ctau_weight[i];
          if ( met > 120. ) csc_met120[i] += my_weight*ctau_weight[i];
          if ( met > 200. ) csc_met200[i] += my_weight*ctau_weight[i];
        }
      }

      //if( det_ID[0] == detectorID::CSC && det_ID[1] == detectorID::CSC) for (int i = 0; i < nctau; i++) ms_ms[i] += my_weight*ctau_weight[i];
      //if( det_ID[0] == detectorID::CSC && det_ID[1] == detectorID::DT) for (int i = 0; i < nctau; i++)  ms_ms[i] += my_weight*ctau_weight[i];
      //if( det_ID[0] == detectorID::DT  && det_ID[1] == detectorID::CSC) for (int i = 0; i < nctau; i++) ms_ms[i] += my_weight*ctau_weight[i];

      //CSC and OTHER DETECTORS
      if( det_ID[0] == detectorID::CSC )
      {
        if( det_ID[1] == detectorID::EB || det_ID[1] == detectorID::EE ) for (int i = 0; i < nctau; i++) csc_ecal[i] += my_weight*ctau_weight[i];
        if( det_ID[1] == detectorID::HB || det_ID[1] == detectorID::HE ) for (int i = 0; i < nctau; i++) csc_hcal[i] += my_weight*ctau_weight[i];
        if( det_ID[1] == detectorID::Tracker ) for (int i = 0; i < nctau; i++) csc_tracker[i] += my_weight*ctau_weight[i];
        if( det_ID[1] == detectorID::DT || det_ID[1] == detectorID::CSC ) for (int i = 0; i < nctau; i++) ms_ms[i] += my_weight*ctau_weight[i];
      }
      else if( det_ID[1] == detectorID::CSC )
      {
        if( det_ID[0] == detectorID::EB || det_ID[0] == detectorID::EE ) for (int i = 0; i < nctau; i++) csc_ecal[i] += my_weight*ctau_weight[i];
        if( det_ID[0] == detectorID::HB || det_ID[0] == detectorID::HE ) for (int i = 0; i < nctau; i++) csc_hcal[i] += my_weight*ctau_weight[i];
        if( det_ID[0] == detectorID::Tracker ) for (int i = 0; i < nctau; i++) csc_tracker[i] += my_weight*ctau_weight[i];
        if( det_ID[0] == detectorID::DT || det_ID[0] == detectorID::CSC ) for (int i = 0; i < nctau; i++) ms_ms[i] += my_weight*ctau_weight[i];
      }

      //for (int i = 0; i < nctau; i++) csc_cal[i] += csc_ecal[i] + csc_hcal[i];

      tOut->Fill();
   }

   std::cout << "full_total: " << full_total << std::endl;
   double csc_v2[nctau];
   double ms_ms_v2[nctau];
   for (int i = 0; i < nctau; i++)
   {
     std::cout << "total: " << total[i] << " csc[i]: " << csc[i] << " ms_ms: " << ms_ms[i] << std::endl;
     csc_v2[i]      = csc[i]/full_total;
     csc[i]         = csc[i]/total[i];//divide by total[i] is the right way to do it!!!
     csc_met50[i]   = csc_met50[i]/total[i];
     csc_met120[i]  = csc_met120[i]/total[i];
     csc_met200[i]  = csc_met200[i]/total[i];
     csc_ecal[i]    = csc_ecal[i]/total[i];
     csc_hcal[i]    = csc_hcal[i]/total[i];
     csc_cal[i]     = csc_ecal[i]+csc_hcal[i];
     csc_tracker[i] = csc_tracker[i]/total[i];
     ms_ms_v2[i]    = ms_ms[i]/full_total;
     ms_ms[i]       = ms_ms[i]/total[i];
     std::cout << "total: " << total[i]/full_total << " csc[i]: " << csc[i] << " ms_ms[i]: " << ms_ms[i] << std::endl;
   }

   TGraph* acc_csc         = new TGraph(nctau, ctau_points, csc);
   TGraph* acc_csc_met50   = new TGraph(nctau, ctau_points, csc_met50);
   TGraph* acc_csc_met120  = new TGraph(nctau, ctau_points, csc_met120);
   TGraph* acc_csc_met200  = new TGraph(nctau, ctau_points, csc_met200);
   TGraph* acc_csc_ecal    = new TGraph(nctau, ctau_points, csc_ecal);
   TGraph* acc_csc_hcal    = new TGraph(nctau, ctau_points, csc_hcal);
   TGraph* acc_csc_cal     = new TGraph(nctau, ctau_points, csc_cal);
   TGraph* acc_csc_tracker = new TGraph(nctau, ctau_points, csc_tracker);

   TGraph* acc_csc_v2   = new TGraph(nctau, ctau_points, csc_v2);
   TGraph* acc_ms_ms    = new TGraph(nctau, ctau_points, ms_ms);
   TGraph* acc_ms_ms_v2 = new TGraph(nctau, ctau_points, ms_ms_v2);


   tOut->Write();
   h_higgs_pt->Write();
   h_met_pt->Write();
   h_ht->Write();
   acc_csc->Write("acc_csc");
   acc_csc_met50->Write("acc_csc_met50");
   acc_csc_met120->Write("acc_csc_met120");
   acc_csc_met200->Write("acc_csc_met200");
   acc_csc_ecal->Write("acc_csc_ecal");
   acc_csc_hcal->Write("acc_csc_hcal");
   acc_csc_cal->Write("acc_csc_cal");
   acc_csc_tracker->Write("acc_csc_tracker");
   //
   acc_csc_v2->Write("acc_csc_v2");
   acc_ms_ms->Write("acc_ms_ms");
   acc_ms_ms_v2->Write("acc_ms_ms_v2");
   fout->Close();
};
