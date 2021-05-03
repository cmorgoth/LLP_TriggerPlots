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

   TH1F* h_higgs_pt = new TH1F("h_higgs_pt", "higgs_pt", 100,0, 1000);

   Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;
      h_higgs_pt->Fill(gHiggsPt);
      if( GetLLP_DetectorID(0) == -2 || GetLLP_DetectorID(1) == -2) std::cout << "detector id: " << GetLLP_DetectorID(0) << " " << GetLLP_DetectorID(1) << std::endl;
   }

   TFile* fout = new TFile("histograms.root", "recreate");
   h_higgs_pt->Write();
   fout->Close();
};
