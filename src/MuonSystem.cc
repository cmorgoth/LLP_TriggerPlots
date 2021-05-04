#define MuonSystem_cxx
#include "MuonSystem.hh"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <iostream>

#define tracker_radius 129
#define tracker_z 300
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
  tOut->Branch("ctau_weight10",     &ctau_weight10,     "ctau_weight10/D");
  tOut->Branch("ctau_weight30",     &ctau_weight30,     "ctau_weight30/D");
  tOut->Branch("ctau_weight60",     &ctau_weight60,     "ctau_weight60/D");
  tOut->Branch("ctau_weight100",    &ctau_weight100,    "ctau_weight100/D");
  tOut->Branch("ctau_weight300",    &ctau_weight300,    "ctau_weight300/D");
  tOut->Branch("ctau_weight600",    &ctau_weight600,    "ctau_weight600/D");
  tOut->Branch("ctau_weight1000",   &ctau_weight1000,   "ctau_weight1000/D");
  tOut->Branch("ctau_weight3000",   &ctau_weight3000,   "ctau_weight3000/D");
  tOut->Branch("ctau_weight6000",   &ctau_weight6000,   "ctau_weight6000/D");
  tOut->Branch("ctau_weight10000",  &ctau_weight10000,  "ctau_weight10000/D");
  tOut->Branch("ctau_weight30000",  &ctau_weight30000,  "ctau_weight30000/D");
  tOut->Branch("ctau_weight60000",  &ctau_weight60000,  "ctau_weight60000/D");
  tOut->Branch("ctau_weight100000", &ctau_weight100000, "ctau_weight100000/D");
};

MuonSystem::detectorID MuonSystem::GetLLP_DetectorID(int index = 0)
{
  if ( gLLP_decay_vertex_r[index] < tracker_radius && fabs(gLLP_decay_vertex_z[index]) < tracker_z) return detectorID::Tracker;
  else if ( gLLP_decay_vertex_r[index] >= tracker_radius && gLLP_decay_vertex_r[index] < ecal_radius && fabs(gLLP_decay_vertex_z[index]) < ecal_z) return detectorID::EB;
  else if ( gLLP_decay_vertex_r[index] < tracker_radius && fabs(gLLP_decay_vertex_z[index]) > tracker_z && fabs(gLLP_decay_vertex_z[index]) < ecal_z) return detectorID::EE;
  else if ( gLLP_decay_vertex_r[index] >= ecal_radius && gLLP_decay_vertex_r[index] < hcal_radius && fabs(gLLP_decay_vertex_z[index]) < hcal_z) return detectorID::HB;
  else if ( gLLP_decay_vertex_r[index] < ecal_radius && fabs(gLLP_decay_vertex_z[index]) > ecal_z && fabs(gLLP_decay_vertex_z[index]) < hcal_z) return detectorID::HE;
  else if ( gLLP_decay_vertex_r[index] >= hcal_radius && gLLP_decay_vertex_r[index] < solenoid_radius && fabs(gLLP_decay_vertex_z[index]) < solenoid_z) return detectorID::SM;
  else if ( gLLP_decay_vertex_r[index] >= solenoid_radius && gLLP_decay_vertex_r[index] < dt_radius && fabs(gLLP_decay_vertex_z[index]) < dt_z) return detectorID::DT;
  else if ( gLLP_decay_vertex_r[index] < hcal_radius && fabs(gLLP_decay_vertex_z[index]) > hcal_z && fabs(gLLP_decay_vertex_z[index]) < dt_z) return detectorID::CSC;
  else if ( gLLP_decay_vertex_r[index] < csc_radius && fabs(gLLP_decay_vertex_z[index]) > dt_z && fabs(gLLP_decay_vertex_z[index]) < csc_z) return detectorID::CSC;
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
   double total  = 0.0;
   double csc    = 0.0;
   double ms_ms = 0.0;//csc+csc;csc+dt

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;
      double my_weight = weight*pileupWeight;
      total += my_weight;

      //std::cout << gLLP_ctau[0] << " " << gLLP_ctau[1] << " " << this->ctau << std::endl;
      ctau_weight10 = GetCtau(gLLP_ctau[0],gLLP_ctau[1], ctau, 10.);
      ctau_weight30 = GetCtau(gLLP_ctau[0],gLLP_ctau[1], ctau, 30.);
      ctau_weight60 = GetCtau(gLLP_ctau[0],gLLP_ctau[1], ctau, 60.);
      ctau_weight100 = GetCtau(gLLP_ctau[0],gLLP_ctau[1], ctau, 100.);
      ctau_weight300 = GetCtau(gLLP_ctau[0],gLLP_ctau[1], ctau, 300.);
      ctau_weight600 = GetCtau(gLLP_ctau[0],gLLP_ctau[1], ctau, 600.);
      ctau_weight1000 = GetCtau(gLLP_ctau[0],gLLP_ctau[1], ctau, 1000.);
      ctau_weight3000 = GetCtau(gLLP_ctau[0],gLLP_ctau[1], ctau, 3000.);
      ctau_weight6000 = GetCtau(gLLP_ctau[0],gLLP_ctau[1], ctau, 6000.);
      ctau_weight10000 = GetCtau(gLLP_ctau[0],gLLP_ctau[1], ctau, 10000.);
      ctau_weight30000 = GetCtau(gLLP_ctau[0],gLLP_ctau[1], ctau, 30000.);
      ctau_weight60000 = GetCtau(gLLP_ctau[0],gLLP_ctau[1], ctau, 60000.);
      ctau_weight10000 = GetCtau(gLLP_ctau[0],gLLP_ctau[1], ctau, 100000.);
      det_ID[0] = GetLLP_DetectorID(0);
      det_ID[1] = GetLLP_DetectorID(1);
      tOut->Fill();
      //std::cout << "ctau30: " << weight_ctau30 << std::endl;
      h_higgs_pt->Fill(gHiggsPt);
      h_met_pt->Fill(met);
      h_ht->Fill(this->HT);
      if( GetLLP_DetectorID(0) == -2 || GetLLP_DetectorID(1) == -2) std::cout << "detector id: " << GetLLP_DetectorID(0) << " " << GetLLP_DetectorID(1) << std::endl;
      if( GetLLP_DetectorID(0) == detectorID::CSC || GetLLP_DetectorID(1) == detectorID::CSC) csc += my_weight;
      if( GetLLP_DetectorID(0) == detectorID::CSC && GetLLP_DetectorID(1) == detectorID::CSC) ms_ms += my_weight;
      if( GetLLP_DetectorID(0) == detectorID::CSC && GetLLP_DetectorID(1) == detectorID::DT) ms_ms += my_weight;
      if( GetLLP_DetectorID(0) == detectorID::DT  && GetLLP_DetectorID(1) == detectorID::CSC) ms_ms += my_weight;

   }

   std::cout << "total: " << total << " csc: " << csc << " ms_ms: " << ms_ms << std::endl;
   std::cout << "total: " << total/total << " csc: " << csc/total << " ms_ms: " << ms_ms/total << std::endl;


   tOut->Write();
   h_higgs_pt->Write();
   h_met_pt->Write();
   h_ht->Write();
   fout->Close();
};
