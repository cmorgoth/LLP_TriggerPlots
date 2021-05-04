//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Sun May  2 17:51:28 2021 by ROOT version 6.20/04
// from TTree MuonSystem/MuonSystem
// found on file: ggH_HToSSTo4Tau_MH-125_MS-15_ctau-10_137000pb_weighted.root
//////////////////////////////////////////////////////////

#ifndef MuonSystem_h
#define MuonSystem_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <string>

// Header file for the classes stored in the TTree if any.

class MuonSystem {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   TTree          *tOut;//output tree pointer
   std::string    f_out_name;
   Int_t           fCurrent; //!current Tree number in a TChain
   enum            detectorID
   {
     NO_ACC  = -2,
     OUT     = -1,
     Tracker = 0,
     EB      = 1,
     EE      = 2,
     HB      = 3,
     HE      = 4,
     SM      = 5,
     DT      = 6,
     CSC     = 7,
   };
// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   UInt_t          runNum;
   UInt_t          lumiSec;
   UInt_t          evtNum;
   Int_t           mH;
   Int_t           mX;
   Int_t           ctau;
   UInt_t          ZCategory;
   UInt_t          category;
   UInt_t          npv;
   UInt_t          npu;
   Float_t         weight;
   Float_t         higgsPtWeight;
   Float_t         higgsPtWeightSys[9];
   Float_t         scaleWeights[9];
   Float_t         lepOverallSF;
   Float_t         sf_facScaleUp;
   Float_t         sf_facScaleDown;
   Float_t         sf_renScaleUp;
   Float_t         sf_renScaleDown;
   Float_t         sf_facRenScaleUp;
   Float_t         sf_facRenScaleDown;
   Float_t         metSF;
   Float_t         pileupWeight;
   Float_t         pileupWeightUp;
   Float_t         pileupWeightDown;
   Bool_t          Flag_HBHENoiseFilter;
   Bool_t          Flag_BadPFMuonFilter;
   Bool_t          Flag_HBHEIsoNoiseFilter;
   Bool_t          Flag_CSCTightHaloFilter;
   Bool_t          Flag_globalSuperTightHalo2016Filter;
   Bool_t          Flag_goodVertices;
   Bool_t          Flag_ecalBadCalibFilter;
   Bool_t          Flag_BadChargedCandidateFilter;
   Bool_t          Flag_eeBadScFilter;
   Bool_t          Flag_all;
   Bool_t          Flag2_HBHENoiseFilter;
   Bool_t          Flag2_HBHEIsoNoiseFilter;
   Bool_t          Flag2_BadPFMuonFilter;
   Bool_t          Flag2_globalSuperTightHalo2016Filter;
   Bool_t          Flag2_globalTightHalo2016Filter;
   Bool_t          Flag2_BadChargedCandidateFilter;
   Bool_t          Flag2_EcalDeadCellTriggerPrimitiveFilter;
   Bool_t          Flag2_ecalBadCalibFilter;
   Bool_t          Flag2_eeBadScFilter;
   Bool_t          Flag2_all;
   Bool_t          EE_prefiring;
   Float_t         rho;
   Float_t         met;
   Float_t         metNoMu;
   Float_t         metPhi;
   Float_t         metXYCorr;
   Float_t         metPhiXYCorr;
   Float_t         HT;
   Float_t         jetMet_dPhi;
   Float_t         jetMet_dPhiMin;
   Float_t         jetMet_dPhiMin4;
   Float_t         metJESUp;
   Float_t         metJESDown;
   Float_t         metPhiJESUp;
   Float_t         metPhiJESDown;
   Float_t         metJESUpSF;
   Float_t         metJESDownSF;
   Float_t         metEENoise;
   Float_t         metPhiEENoise;
   Float_t         metHEM;
   Float_t         metPhiHEM;
   Float_t         metEENoiseXYCorr;
   Float_t         metPhiEENoiseXYCorr;
   Float_t         metHEMXYCorr;
   Float_t         metPhiHEMXYCorr;
   Float_t         genMetPtTrue;
   Float_t         genMetPhiTrue;
   Float_t         genMetPtCalo;
   Float_t         genMetPhiCalo;
   Int_t           nGenParticle;
   Int_t           gParticleId[1];   //[nGenParticle]
   Int_t           gParticleStatus[1];   //[nGenParticle]
   Int_t           gParticleMotherId[1];   //[nGenParticle]
   Float_t         gParticleE[1];   //[nGenParticle]
   Float_t         gParticlePt[1];   //[nGenParticle]
   Float_t         gParticleEta[1];   //[nGenParticle]
   Float_t         gParticlePhi[1];   //[nGenParticle]
   Int_t           nGenJets;
   Float_t         genJetE[1];   //[nGenJets]
   Float_t         genJetPt[1];   //[nGenJets]
   Float_t         genJetEta[1];   //[nGenJets]
   Float_t         genJetPhi[1];   //[nGenJets]
   Float_t         genJetMET[1];   //[nGenJets]
   Float_t         gWPt;
   Int_t           gLepId;
   Float_t         gLepPt;
   Float_t         gLepE;
   Float_t         gLepEta;
   Float_t         gLepPhi;
   Float_t         gHiggsPt;
   Float_t         gHiggsE;
   Float_t         gHiggsEta;
   Float_t         gHiggsPhi;
   Int_t           nCscRechits;
   Int_t           nEarlyCscRechits;
   Int_t           nLateCscRechits;
   Int_t           nEarly2CscRechits;
   Int_t           nLate2CscRechits;
   Int_t           nCscRings;
   Int_t           nCscPositiveYRechits;
   Int_t           nCscNegativeYRechits;
   Float_t         cscPosTpeak;
   Float_t         cscNegTpeak;
   Int_t           nCscRechitsChamberPlus11;
   Int_t           nCscRechitsChamberPlus12;
   Int_t           nCscRechitsChamberPlus13;
   Int_t           nCscRechitsChamberPlus21;
   Int_t           nCscRechitsChamberPlus22;
   Int_t           nCscRechitsChamberPlus31;
   Int_t           nCscRechitsChamberPlus32;
   Int_t           nCscRechitsChamberPlus41;
   Int_t           nCscRechitsChamberPlus42;
   Int_t           nCscRechitsChamberMinus11;
   Int_t           nCscRechitsChamberMinus12;
   Int_t           nCscRechitsChamberMinus13;
   Int_t           nCscRechitsChamberMinus21;
   Int_t           nCscRechitsChamberMinus22;
   Int_t           nCscRechitsChamberMinus31;
   Int_t           nCscRechitsChamberMinus32;
   Int_t           nCscRechitsChamberMinus41;
   Int_t           nCscRechitsChamberMinus42;
   Int_t           nRpc;
   Int_t           nDtSeg;
   Int_t           nDTRechits;
   Int_t           nDtRings;
   Int_t           nDTPositiveYRechits;
   Int_t           nDTNegativeYRechits;
   Int_t           nDTRechitsChamberMinus12;
   Int_t           nDTRechitsChamberMinus11;
   Int_t           nDTRechitsChamber10;
   Int_t           nDTRechitsChamberPlus11;
   Int_t           nDTRechitsChamberPlus12;
   Int_t           nDTRechitsChamberMinus22;
   Int_t           nDTRechitsChamberMinus21;
   Int_t           nDTRechitsChamber20;
   Int_t           nDTRechitsChamberPlus21;
   Int_t           nDTRechitsChamberPlus22;
   Int_t           nDTRechitsChamberMinus32;
   Int_t           nDTRechitsChamberMinus31;
   Int_t           nDTRechitsChamber30;
   Int_t           nDTRechitsChamberPlus31;
   Int_t           nDTRechitsChamberPlus32;
   Int_t           nDTRechitsChamberMinus42;
   Int_t           nDTRechitsChamberMinus41;
   Int_t           nDTRechitsChamber40;
   Int_t           nDTRechitsChamberPlus41;
   Int_t           nDTRechitsChamberPlus42;
   Int_t           cscRechitsStation[1];   //[nCscRechits]
   Int_t           cscRechitsChamber[1];   //[nCscRechits]
   Float_t         cscRechitsPhi[1];   //[nCscRechits]
   Float_t         cscRechitsEta[1];   //[nCscRechits]
   Float_t         dtRechitsEta[645];   //[nDTRechits]
   Float_t         dtRechitsPhi[645];   //[nDTRechits]
   Int_t           dtRechitsStation[645];   //[nDTRechits]
   Int_t           dtRechitsWheel[645];   //[nDTRechits]
   Float_t         rpcEta[1];   //[nRpc]
   Float_t         rpcPhi[1];   //[nRpc]
   Bool_t          rpc_RE12[1];   //[nRpc]
   Bool_t          rpc_RB1[1];   //[nRpc]
   Float_t         dtSegEta[1];   //[nDtSeg]
   Float_t         dtSegPhi[1];   //[nDtSeg]
   Int_t           dtSegWheel[1];   //[nDtSeg]
   Int_t           dtSegStation[1];   //[nDtSeg]
   Int_t           nCscRechitClusters3;
   Bool_t          cscRechitCluster3_match_gLLP[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3_match_gLLP_minDeltaR[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3_match_gLLP_index[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3_match_gLLP_eta[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3_match_gLLP_phi[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3_match_gLLP_decay_r[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3_match_gLLP_decay_x[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3_match_gLLP_decay_y[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3_match_gLLP_decay_z[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3_match_gLLP_ctau[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3_match_gLLP_beta[3];   //[nCscRechitClusters3]
   Bool_t          cscRechitCluster3_match_gLLP_csc[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3_match_gLLP_multiplicity[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3_match_gLLP_EM_multiplicity[3];   //[nCscRechitClusters3]
   Bool_t          cscRechitCluster3_match_gLLP_daughterKaon[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3_match_gLLP_e[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3_match_gLLP_pt[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3_match_gLLP_EMFracE[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3_match_gLLP_EMFracEz[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3_match_gLLP_EMFracP[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3_match_gLLP_EMFracPz[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3_match_gLLP_visE[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3_match_gLLP_visEz[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3_match_gLLP_visP[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3_match_gLLP_visPz[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3_match_gLLP_lepdPhi[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3_match_gLLP_daughter0_deltaR[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3_match_gLLP_daughter1_deltaR[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3_match_gLLP_daughter2_deltaR[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3_match_gLLP_daughter3_deltaR[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3_match_gLLP_other_daughter_deltaR[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3_match_gLLP_other_daughter_index[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3_match_gLLP_other_eta[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3_match_gLLP_other_phi[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3_match_gLLP_other_decay_r[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3_match_gLLP_other_decay_x[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3_match_gLLP_other_decay_y[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3_match_gLLP_other_decay_z[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3_match_gLLP_other_ctau[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3_match_gLLP_other_beta[3];   //[nCscRechitClusters3]
   Bool_t          cscRechitCluster3_match_gLLP_other_csc[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3_match_gLLP_other_e[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3_match_gLLP_other_pt[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3X[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3Y[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3Z[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3Time[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3TimeWire[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3TimeWirePruned[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3TimeTotal[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3TimeSpread[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3TimeTotalSpread[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3TimeTotalSpreadPruned[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3TimeWireSpread[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3GenMuonDeltaR[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3XYSpread[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3MajorAxis[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3MinorAxis[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3EtaPhiSpread[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3PhiSpread[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3EtaSpread[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3DeltaRSpread[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3XSpread[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3RSpread[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3YSpread[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3ZSpread[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3Phi[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3Eta[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3JetVetoPt[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3JetVetoEta[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3JetVetoPhi[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3JetVetoE[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3GenJetVetoPt[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3GenJetVetoE[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3MuonVetoPt[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3MuonVetoE[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3MuonVetoPhi[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3MuonVetoEta[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3JetVetoElectronEnergyFraction[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3JetVetoPhotonEnergyFraction[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3JetVetoChargedHadronEnergyFraction[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3JetVetoNeutralHadronEnergyFraction[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3JetVetoMuonEnergyFraction[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3JetVetoPt_0p6[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3JetVetoPt_0p8[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3JetVetoE_0p6[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3JetVetoE_0p8[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3MuonVetoPt_0p6[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3MuonVetoPt_0p8[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3MuonVetoE_0p6[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3MuonVetoE_0p8[3];   //[nCscRechitClusters3]
   Bool_t          cscRechitCluster3MuonVetoLooseIso[3];   //[nCscRechitClusters3]
   Bool_t          cscRechitCluster3MuonVetoTightIso[3];   //[nCscRechitClusters3]
   Bool_t          cscRechitCluster3MuonVetoVTightIso[3];   //[nCscRechitClusters3]
   Bool_t          cscRechitCluster3MuonVetoVVTightIso[3];   //[nCscRechitClusters3]
   Bool_t          cscRechitCluster3MuonVetoTightId[3];   //[nCscRechitClusters3]
   Bool_t          cscRechitCluster3MuonVetoLooseId[3];   //[nCscRechitClusters3]
   Bool_t          cscRechitCluster3MuonVetoGlobal[3];   //[nCscRechitClusters3]
   Bool_t          cscRechitCluster3MuonVetoIso[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3IsoMuonVetoPt[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3IsoMuonVetoE[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3IsoMuonVetoPhi[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3IsoMuonVetoEta[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3GenMuonVetoPt[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3MuonVetoType[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3Size[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3Me11Ratio[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3Me12Ratio[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3NStation[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3NStation5[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3NStation10[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3NStation10perc[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3AvgStation[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3AvgStation5[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3AvgStation10[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3AvgStation10perc[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3MaxStation[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3MaxStationRatio[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3NChamber[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3MaxChamber[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3MaxChamberRatio[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3NRechitChamberPlus11[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3NRechitChamberPlus12[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3NRechitChamberPlus13[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3NRechitChamberPlus21[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3NRechitChamberPlus22[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3NRechitChamberPlus31[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3NRechitChamberPlus32[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3NRechitChamberPlus41[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3NRechitChamberPlus42[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3NRechitChamberMinus11[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3NRechitChamberMinus12[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3NRechitChamberMinus13[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3NRechitChamberMinus21[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3NRechitChamberMinus22[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3NRechitChamberMinus31[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3NRechitChamberMinus32[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3NRechitChamberMinus41[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3NRechitChamberMinus42[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3Met_dPhi[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3MetXYCorr_dPhi[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3_match_cscRechits_0p4[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3NLayersChamberPlus11[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3NLayersChamberPlus12[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3NLayersChamberPlus13[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3NLayersChamberPlus21[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3NLayersChamberPlus22[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3NLayersChamberPlus31[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3NLayersChamberPlus32[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3NLayersChamberPlus41[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3NLayersChamberPlus42[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3NLayersChamberMinus11[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3NLayersChamberMinus12[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3NLayersChamberMinus13[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3NLayersChamberMinus21[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3NLayersChamberMinus22[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3NLayersChamberMinus31[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3NLayersChamberMinus32[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3NLayersChamberMinus41[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3NLayersChamberMinus42[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3MetHEM_dPhi[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3MetHEMXYCorr_dPhi[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3MetEENoise_dPhi[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3MetEENoiseXYCorr_dPhi[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3MetJesUp_dPhi[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3MetJesDown_dPhi[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3_match_dtRechits_phi0p2[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3_match_dtRechits_0p4[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3_match_MB1_0p4[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3_match_dtSeg_0p4[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3_match_MB1Seg_0p4[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3_match_RB1_0p4[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3_match_RE12_0p4[3];   //[nCscRechitClusters3]
   Float_t         cscRechitCluster3_match_cluster_dR[3];   //[nCscRechitClusters3]
   Int_t           cscRechitCluster3_match_cluster_index[3];   //[nCscRechitClusters3]
   Int_t           gLLP_multiplicity[2];
   Int_t           gLLP_multiplicity20[2];
   Int_t           gLLP_EM_multiplicity[2];
   Float_t         gLLP_eta[2];
   Float_t         gLLP_phi[2];
   Float_t         gLLP_csc[2];
   Float_t         gLLP_beta[2];
   Float_t         gLLP_maxMatchedDis[2];
   Float_t         gLLP_e[2];
   Float_t         gLLP_pt[2];
   Float_t         gLLP_lepdPhi[2];
   Bool_t          gLLP_daughterKaon[2];
   Float_t         gLLP_ctau[2];
   Float_t         gLLP_EMFracE[2];
   Float_t         gLLP_EMFracEz[2];
   Float_t         gLLP_EMFracP[2];
   Float_t         gLLP_EMFracPz[2];
   Float_t         gLLP_visE[2];
   Float_t         gLLP_visE20[2];
   Float_t         gLLP_visEz[2];
   Float_t         gLLP_visP[2];
   Float_t         gLLP_visPz[2];
   Float_t         gLLP_decay_vertex_r[2];
   Float_t         gLLP_decay_vertex_x[2];
   Float_t         gLLP_decay_vertex_y[2];
   Float_t         gLLP_decay_vertex_z[2];
   Float_t         gLLP_deltaR;
   Float_t         gLLP_daughter_deltaR[2];
   Float_t         gLLP_daughter_pt[4];
   Int_t           gLLP_daughter_id[4];
   Float_t         gLLP_daughter_eta[4];
   Float_t         gLLP_daughter_phi[4];
   Float_t         gLLP_daughter_e[4];
   Float_t         gLLP_daughter_mass[4];
   Int_t           nMuons;
   Float_t         muonPt[1];   //[nMuons]
   Float_t         muonEta[1];   //[nMuons]
   Float_t         muonPhi[1];   //[nMuons]
   Int_t           nLeptons;
   Float_t         lepE[3];   //[nLeptons]
   Float_t         lepPt[3];   //[nLeptons]
   Float_t         lepEta[3];   //[nLeptons]
   Float_t         lepPhi[3];   //[nLeptons]
   Int_t           lepPdgId[3];   //[nLeptons]
   Float_t         lepDZ[3];   //[nLeptons]
   Bool_t          lepPassId[3];   //[nLeptons]
   Bool_t          lepFromZ[3];   //[nLeptons]
   Float_t         lepEff[3];   //[nLeptons]
   Float_t         lepSF[3];   //[nLeptons]
   Float_t         lepTriggerSF[3];   //[nLeptons]
   Float_t         lepTightIdSF[3];   //[nLeptons]
   Float_t         lepLooseIdSF[3];   //[nLeptons]
   Float_t         lepTightIsoSF[3];   //[nLeptons]
   Float_t         lepLooseIsoSF[3];   //[nLeptons]
   Bool_t          lepTag[3];   //[nLeptons]
   Bool_t          lepPassLooseIso[3];   //[nLeptons]
   Bool_t          lepPassTightIso[3];   //[nLeptons]
   Bool_t          lepPassVTightIso[3];   //[nLeptons]
   Bool_t          lepPassVVTightIso[3];   //[nLeptons]
   Float_t         MT;
   Float_t         ZMass1;
   Float_t         ZMass;
   Float_t         ZPt;
   Float_t         ZEta;
   Float_t         ZPhi;
   Int_t           ZleptonIndex1;
   Int_t           ZleptonIndex2;
   Int_t           nJets;
   Float_t         jetE[9];   //[nJets]
   Float_t         jetPt[9];   //[nJets]
   Float_t         jetEta[9];   //[nJets]
   Float_t         jetPhi[9];   //[nJets]
   Float_t         jetTime[9];   //[nJets]
   Bool_t          jetPassId[9];   //[nJets]
   Float_t         jetPtJESUp[9];   //[nJets]
   Float_t         jetPtJESDown[9];   //[nJets]
   Float_t         jetEJESUp[9];   //[nJets]
   Float_t         jetEJESDown[9];   //[nJets]
   Float_t         JecUnc[9];   //[nJets]
   Float_t         jet_match_genJet_pt[9];   //[nJets]
   Int_t           jet_match_genJet_index[9];   //[nJets]
   Float_t         jet_match_genJet_minDeltaR[9];   //[nJets]
   Bool_t          jetTightPassId[9];   //[nJets]
   Bool_t          HLTDecision[982];
   Bool_t          METTrigger;
   Bool_t          METNoMuTrigger;
   Float_t         jetMuonEnergyFraction[9];   //[nJets]
   Float_t         jetElectronEnergyFraction[9];   //[nJets]
   Float_t         jetPhotonEnergyFraction[9];   //[nJets]
   Float_t         jetChargedHadronEnergyFraction[9];   //[nJets]
   Float_t         jetNeutralHadronEnergyFraction[9];   //[nJets]

   // List of branches
   TBranch        *b_runNum;   //!
   TBranch        *b_lumiSec;   //!
   TBranch        *b_evtNum;   //!
   TBranch        *b_mH;   //!
   TBranch        *b_mX;   //!
   TBranch        *b_ctau;   //!
   TBranch        *b_ZCategory;   //!
   TBranch        *b_category;   //!
   TBranch        *b_npv;   //!
   TBranch        *b_npu;   //!
   TBranch        *b_weight;   //!
   TBranch        *b_higgsPtWeight;   //!
   TBranch        *b_higgsPtWeightSys;   //!
   TBranch        *b_scaleWeights;   //!
   TBranch        *b_lepOverallSF;   //!
   TBranch        *b_sf_facScaleUp;   //!
   TBranch        *b_sf_facScaleDown;   //!
   TBranch        *b_sf_renScaleUp;   //!
   TBranch        *b_sf_renScaleDown;   //!
   TBranch        *b_sf_facRenScaleUp;   //!
   TBranch        *b_sf_facRenScaleDown;   //!
   TBranch        *b_metSF;   //!
   TBranch        *b_pileupWeight;   //!
   TBranch        *b_pileupWeightUp;   //!
   TBranch        *b_pileupWeightDown;   //!
   TBranch        *b_Flag_HBHENoiseFilter;   //!
   TBranch        *b_Flag_BadPFMuonFilter;   //!
   TBranch        *b_Flag_HBHEIsoNoiseFilter;   //!
   TBranch        *b_Flag_CSCTightHaloFilter;   //!
   TBranch        *b_Flag_globalSuperTightHalo2016Filter;   //!
   TBranch        *b_Flag_goodVertices;   //!
   TBranch        *b_Flag_ecalBadCalibFilter;   //!
   TBranch        *b_Flag_BadChargedCandidateFilter;   //!
   TBranch        *b_Flag_eeBadScFilter;   //!
   TBranch        *b_Flag_all;   //!
   TBranch        *b_Flag2_HBHENoiseFilter;   //!
   TBranch        *b_Flag2_HBHEIsoNoiseFilter;   //!
   TBranch        *b_Flag2_BadPFMuonFilter;   //!
   TBranch        *b_Flag2_globalSuperTightHalo2016Filter;   //!
   TBranch        *b_Flag2_globalTightHalo2016Filter;   //!
   TBranch        *b_Flag2_BadChargedCandidateFilter;   //!
   TBranch        *b_Flag2_EcalDeadCellTriggerPrimitiveFilter;   //!
   TBranch        *b_Flag2_ecalBadCalibFilter;   //!
   TBranch        *b_Flag2_eeBadScFilter;   //!
   TBranch        *b_Flag2_all;   //!
   TBranch        *b_EE_prefiring;   //!
   TBranch        *b_rho;   //!
   TBranch        *b_met;   //!
   TBranch        *b_metNoMu;   //!
   TBranch        *b_metPhi;   //!
   TBranch        *b_metXYCorr;   //!
   TBranch        *b_metPhiXYCorr;   //!
   TBranch        *b_HT;   //!
   TBranch        *b_jetMet_dPhi;   //!
   TBranch        *b_jetMet_dPhiMin;   //!
   TBranch        *b_jetMet_dPhiMin4;   //!
   TBranch        *b_metJESUp;   //!
   TBranch        *b_metJESDown;   //!
   TBranch        *b_metPhiJESUp;   //!
   TBranch        *b_metPhiJESDown;   //!
   TBranch        *b_metJESUpSF;   //!
   TBranch        *b_metJESDownSF;   //!
   TBranch        *b_metEENoise;   //!
   TBranch        *b_metPhiEENoise;   //!
   TBranch        *b_metHEM;   //!
   TBranch        *b_metPhiHEM;   //!
   TBranch        *b_metEENoiseXYCorr;   //!
   TBranch        *b_metPhiEENoiseXYCorr;   //!
   TBranch        *b_metHEMXYCorr;   //!
   TBranch        *b_metPhiHEMXYCorr;   //!
   TBranch        *b_genMetPtTrue;   //!
   TBranch        *b_genMetPhiTrue;   //!
   TBranch        *b_genMetPtCalo;   //!
   TBranch        *b_genMetPhiCalo;   //!
   TBranch        *b_nGenParticle;   //!
   TBranch        *b_gParticleId;   //!
   TBranch        *b_gParticleStatus;   //!
   TBranch        *b_gParticleMotherId;   //!
   TBranch        *b_gParticleE;   //!
   TBranch        *b_gParticlePt;   //!
   TBranch        *b_gParticleEta;   //!
   TBranch        *b_gParticlePhi;   //!
   TBranch        *b_nGenJets;   //!
   TBranch        *b_genJetE;   //!
   TBranch        *b_genJetPt;   //!
   TBranch        *b_genJetEta;   //!
   TBranch        *b_genJetPhi;   //!
   TBranch        *b_genJetMET;   //!
   TBranch        *b_gWPt;   //!
   TBranch        *b_gLepId;   //!
   TBranch        *b_gLepPt;   //!
   TBranch        *b_gLepE;   //!
   TBranch        *b_gLepEta;   //!
   TBranch        *b_gLepPhi;   //!
   TBranch        *b_gHiggsPt;   //!
   TBranch        *b_gHiggsE;   //!
   TBranch        *b_gHiggsEta;   //!
   TBranch        *b_gHiggsPhi;   //!
   TBranch        *b_nCscRechits;   //!
   TBranch        *b_nEarlyCscRechits;   //!
   TBranch        *b_nLateCscRechits;   //!
   TBranch        *b_nEarly2CscRechits;   //!
   TBranch        *b_nLate2CscRechits;   //!
   TBranch        *b_nCscRings;   //!
   TBranch        *b_nCscPositiveYRechits;   //!
   TBranch        *b_nCscNegativeYRechits;   //!
   TBranch        *b_cscPosTpeak;   //!
   TBranch        *b_cscNegTpeak;   //!
   TBranch        *b_nCscRechitsChamberPlus11;   //!
   TBranch        *b_nCscRechitsChamberPlus12;   //!
   TBranch        *b_nCscRechitsChamberPlus13;   //!
   TBranch        *b_nCscRechitsChamberPlus21;   //!
   TBranch        *b_nCscRechitsChamberPlus22;   //!
   TBranch        *b_nCscRechitsChamberPlus31;   //!
   TBranch        *b_nCscRechitsChamberPlus32;   //!
   TBranch        *b_nCscRechitsChamberPlus41;   //!
   TBranch        *b_nCscRechitsChamberPlus42;   //!
   TBranch        *b_nCscRechitsChamberMinus11;   //!
   TBranch        *b_nCscRechitsChamberMinus12;   //!
   TBranch        *b_nCscRechitsChamberMinus13;   //!
   TBranch        *b_nCscRechitsChamberMinus21;   //!
   TBranch        *b_nCscRechitsChamberMinus22;   //!
   TBranch        *b_nCscRechitsChamberMinus31;   //!
   TBranch        *b_nCscRechitsChamberMinus32;   //!
   TBranch        *b_nCscRechitsChamberMinus41;   //!
   TBranch        *b_nCscRechitsChamberMinus42;   //!
   TBranch        *b_nRpc;   //!
   TBranch        *b_nDtSeg;   //!
   TBranch        *b_nDTRechits;   //!
   TBranch        *b_nDtRings;   //!
   TBranch        *b_nDTPositiveYRechits;   //!
   TBranch        *b_nDTNegativeYRechits;   //!
   TBranch        *b_nDTRechitsChamberMinus12;   //!
   TBranch        *b_nDTRechitsChamberMinus11;   //!
   TBranch        *b_nDTRechitsChamber10;   //!
   TBranch        *b_nDTRechitsChamberPlus11;   //!
   TBranch        *b_nDTRechitsChamberPlus12;   //!
   TBranch        *b_nDTRechitsChamberMinus22;   //!
   TBranch        *b_nDTRechitsChamberMinus21;   //!
   TBranch        *b_nDTRechitsChamber20;   //!
   TBranch        *b_nDTRechitsChamberPlus21;   //!
   TBranch        *b_nDTRechitsChamberPlus22;   //!
   TBranch        *b_nDTRechitsChamberMinus32;   //!
   TBranch        *b_nDTRechitsChamberMinus31;   //!
   TBranch        *b_nDTRechitsChamber30;   //!
   TBranch        *b_nDTRechitsChamberPlus31;   //!
   TBranch        *b_nDTRechitsChamberPlus32;   //!
   TBranch        *b_nDTRechitsChamberMinus42;   //!
   TBranch        *b_nDTRechitsChamberMinus41;   //!
   TBranch        *b_nDTRechitsChamber40;   //!
   TBranch        *b_nDTRechitsChamberPlus41;   //!
   TBranch        *b_nDTRechitsChamberPlus42;   //!
   TBranch        *b_cscRechitsStation;   //!
   TBranch        *b_cscRechitsChamber;   //!
   TBranch        *b_cscRechitsPhi;   //!
   TBranch        *b_cscRechitsEta;   //!
   TBranch        *b_dtRechitsEta;   //!
   TBranch        *b_dtRechitsPhi;   //!
   TBranch        *b_dtRechitsStation;   //!
   TBranch        *b_dtRechitsWheel;   //!
   TBranch        *b_rpcEta;   //!
   TBranch        *b_rpcPhi;   //!
   TBranch        *b_rpc_RE12;   //!
   TBranch        *b_rpc_RB1;   //!
   TBranch        *b_dtSegEta;   //!
   TBranch        *b_dtSegPhi;   //!
   TBranch        *b_dtSegWheel;   //!
   TBranch        *b_dtSegStation;   //!
   TBranch        *b_nCscRechitClusters3;   //!
   TBranch        *b_cscRechitCluster3_match_gLLP;   //!
   TBranch        *b_cscRechitCluster3_match_gLLP_minDeltaR;   //!
   TBranch        *b_cscRechitCluster3_match_gLLP_index;   //!
   TBranch        *b_cscRechitCluster3_match_gLLP_eta;   //!
   TBranch        *b_cscRechitCluster3_match_gLLP_phi;   //!
   TBranch        *b_cscRechitCluster3_match_gLLP_decay_r;   //!
   TBranch        *b_cscRechitCluster3_match_gLLP_decay_x;   //!
   TBranch        *b_cscRechitCluster3_match_gLLP_decay_y;   //!
   TBranch        *b_cscRechitCluster3_match_gLLP_decay_z;   //!
   TBranch        *b_cscRechitCluster3_match_gLLP_ctau;   //!
   TBranch        *b_cscRechitCluster3_match_gLLP_beta;   //!
   TBranch        *b_cscRechitCluster3_match_gLLP_csc;   //!
   TBranch        *b_cscRechitCluster3_match_gLLP_multiplicity;   //!
   TBranch        *b_cscRechitCluster3_match_gLLP_EM_multiplicity;   //!
   TBranch        *b_cscRechitCluster3_match_gLLP_daughterKaon;   //!
   TBranch        *b_cscRechitCluster3_match_gLLP_e;   //!
   TBranch        *b_cscRechitCluster3_match_gLLP_pt;   //!
   TBranch        *b_cscRechitCluster3_match_gLLP_EMFracE;   //!
   TBranch        *b_cscRechitCluster3_match_gLLP_EMFracEz;   //!
   TBranch        *b_cscRechitCluster3_match_gLLP_EMFracP;   //!
   TBranch        *b_cscRechitCluster3_match_gLLP_EMFracPz;   //!
   TBranch        *b_cscRechitCluster3_match_gLLP_visE;   //!
   TBranch        *b_cscRechitCluster3_match_gLLP_visEz;   //!
   TBranch        *b_cscRechitCluster3_match_gLLP_visP;   //!
   TBranch        *b_cscRechitCluster3_match_gLLP_visPz;   //!
   TBranch        *b_cscRechitCluster3_match_gLLP_lepdPhi;   //!
   TBranch        *b_cscRechitCluster3_match_gLLP_daughter0_deltaR;   //!
   TBranch        *b_cscRechitCluster3_match_gLLP_daughter1_deltaR;   //!
   TBranch        *b_cscRechitCluster3_match_gLLP_daughter2_deltaR;   //!
   TBranch        *b_cscRechitCluster3_match_gLLP_daughter3_deltaR;   //!
   TBranch        *b_cscRechitCluster3_match_gLLP_other_daughter_deltaR;   //!
   TBranch        *b_cscRechitCluster3_match_gLLP_other_daughter_index;   //!
   TBranch        *b_cscRechitCluster3_match_gLLP_other_eta;   //!
   TBranch        *b_cscRechitCluster3_match_gLLP_other_phi;   //!
   TBranch        *b_cscRechitCluster3_match_gLLP_other_decay_r;   //!
   TBranch        *b_cscRechitCluster3_match_gLLP_other_decay_x;   //!
   TBranch        *b_cscRechitCluster3_match_gLLP_other_decay_y;   //!
   TBranch        *b_cscRechitCluster3_match_gLLP_other_decay_z;   //!
   TBranch        *b_cscRechitCluster3_match_gLLP_other_ctau;   //!
   TBranch        *b_cscRechitCluster3_match_gLLP_other_beta;   //!
   TBranch        *b_cscRechitCluster3_match_gLLP_other_csc;   //!
   TBranch        *b_cscRechitCluster3_match_gLLP_other_e;   //!
   TBranch        *b_cscRechitCluster3_match_gLLP_other_pt;   //!
   TBranch        *b_cscRechitCluster3X;   //!
   TBranch        *b_cscRechitCluster3Y;   //!
   TBranch        *b_cscRechitCluster3Z;   //!
   TBranch        *b_cscRechitCluster3Time;   //!
   TBranch        *b_cscRechitCluster3TimeWire;   //!
   TBranch        *b_cscRechitCluster3TimeWirePruned;   //!
   TBranch        *b_cscRechitCluster3TimeTotal;   //!
   TBranch        *b_cscRechitCluster3TimeSpread;   //!
   TBranch        *b_cscRechitCluster3TimeTotalSpread;   //!
   TBranch        *b_cscRechitCluster3TimeTotalSpreadPruned;   //!
   TBranch        *b_cscRechitCluster3TimeWireSpread;   //!
   TBranch        *b_cscRechitCluster3GenMuonDeltaR;   //!
   TBranch        *b_cscRechitCluster3XYSpread;   //!
   TBranch        *b_cscRechitCluster3MajorAxis;   //!
   TBranch        *b_cscRechitCluster3MinorAxis;   //!
   TBranch        *b_cscRechitCluster3EtaPhiSpread;   //!
   TBranch        *b_cscRechitCluster3PhiSpread;   //!
   TBranch        *b_cscRechitCluster3EtaSpread;   //!
   TBranch        *b_cscRechitCluster3DeltaRSpread;   //!
   TBranch        *b_cscRechitCluster3XSpread;   //!
   TBranch        *b_cscRechitCluster3RSpread;   //!
   TBranch        *b_cscRechitCluster3YSpread;   //!
   TBranch        *b_cscRechitCluster3ZSpread;   //!
   TBranch        *b_cscRechitCluster3Phi;   //!
   TBranch        *b_cscRechitCluster3Eta;   //!
   TBranch        *b_cscRechitCluster3JetVetoPt;   //!
   TBranch        *b_cscRechitCluster3JetVetoEta;   //!
   TBranch        *b_cscRechitCluster3JetVetoPhi;   //!
   TBranch        *b_cscRechitCluster3JetVetoE;   //!
   TBranch        *b_cscRechitCluster3GenJetVetoPt;   //!
   TBranch        *b_cscRechitCluster3GenJetVetoE;   //!
   TBranch        *b_cscRechitCluster3MuonVetoPt;   //!
   TBranch        *b_cscRechitCluster3MuonVetoE;   //!
   TBranch        *b_cscRechitCluster3MuonVetoPhi;   //!
   TBranch        *b_cscRechitCluster3MuonVetoEta;   //!
   TBranch        *b_cscRechitCluster3JetVetoElectronEnergyFraction;   //!
   TBranch        *b_cscRechitCluster3JetVetoPhotonEnergyFraction;   //!
   TBranch        *b_cscRechitCluster3JetVetoChargedHadronEnergyFraction;   //!
   TBranch        *b_cscRechitCluster3JetVetoNeutralHadronEnergyFraction;   //!
   TBranch        *b_cscRechitCluster3JetVetoMuonEnergyFraction;   //!
   TBranch        *b_cscRechitCluster3JetVetoPt_0p6;   //!
   TBranch        *b_cscRechitCluster3JetVetoPt_0p8;   //!
   TBranch        *b_cscRechitCluster3JetVetoE_0p6;   //!
   TBranch        *b_cscRechitCluster3JetVetoE_0p8;   //!
   TBranch        *b_cscRechitCluster3MuonVetoPt_0p6;   //!
   TBranch        *b_cscRechitCluster3MuonVetoPt_0p8;   //!
   TBranch        *b_cscRechitCluster3MuonVetoE_0p6;   //!
   TBranch        *b_cscRechitCluster3MuonVetoE_0p8;   //!
   TBranch        *b_cscRechitCluster3MuonVetoLooseIso;   //!
   TBranch        *b_cscRechitCluster3MuonVetoTightIso;   //!
   TBranch        *b_cscRechitCluster3MuonVetoVTightIso;   //!
   TBranch        *b_cscRechitCluster3MuonVetoVVTightIso;   //!
   TBranch        *b_cscRechitCluster3MuonVetoTightId;   //!
   TBranch        *b_cscRechitCluster3MuonVetoLooseId;   //!
   TBranch        *b_cscRechitCluster3MuonVetoGlobal;   //!
   TBranch        *b_cscRechitCluster3MuonVetoIso;   //!
   TBranch        *b_cscRechitCluster3IsoMuonVetoPt;   //!
   TBranch        *b_cscRechitCluster3IsoMuonVetoE;   //!
   TBranch        *b_cscRechitCluster3IsoMuonVetoPhi;   //!
   TBranch        *b_cscRechitCluster3IsoMuonVetoEta;   //!
   TBranch        *b_cscRechitCluster3GenMuonVetoPt;   //!
   TBranch        *b_cscRechitCluster3MuonVetoType;   //!
   TBranch        *b_cscRechitCluster3Size;   //!
   TBranch        *b_cscRechitCluster3Me11Ratio;   //!
   TBranch        *b_cscRechitCluster3Me12Ratio;   //!
   TBranch        *b_cscRechitCluster3NStation;   //!
   TBranch        *b_cscRechitCluster3NStation5;   //!
   TBranch        *b_cscRechitCluster3NStation10;   //!
   TBranch        *b_cscRechitCluster3NStation10perc;   //!
   TBranch        *b_cscRechitCluster3AvgStation;   //!
   TBranch        *b_cscRechitCluster3AvgStation5;   //!
   TBranch        *b_cscRechitCluster3AvgStation10;   //!
   TBranch        *b_cscRechitCluster3AvgStation10perc;   //!
   TBranch        *b_cscRechitCluster3MaxStation;   //!
   TBranch        *b_cscRechitCluster3MaxStationRatio;   //!
   TBranch        *b_cscRechitCluster3NChamber;   //!
   TBranch        *b_cscRechitCluster3MaxChamber;   //!
   TBranch        *b_cscRechitCluster3MaxChamberRatio;   //!
   TBranch        *b_cscRechitCluster3NRechitChamberPlus11;   //!
   TBranch        *b_cscRechitCluster3NRechitChamberPlus12;   //!
   TBranch        *b_cscRechitCluster3NRechitChamberPlus13;   //!
   TBranch        *b_cscRechitCluster3NRechitChamberPlus21;   //!
   TBranch        *b_cscRechitCluster3NRechitChamberPlus22;   //!
   TBranch        *b_cscRechitCluster3NRechitChamberPlus31;   //!
   TBranch        *b_cscRechitCluster3NRechitChamberPlus32;   //!
   TBranch        *b_cscRechitCluster3NRechitChamberPlus41;   //!
   TBranch        *b_cscRechitCluster3NRechitChamberPlus42;   //!
   TBranch        *b_cscRechitCluster3NRechitChamberMinus11;   //!
   TBranch        *b_cscRechitCluster3NRechitChamberMinus12;   //!
   TBranch        *b_cscRechitCluster3NRechitChamberMinus13;   //!
   TBranch        *b_cscRechitCluster3NRechitChamberMinus21;   //!
   TBranch        *b_cscRechitCluster3NRechitChamberMinus22;   //!
   TBranch        *b_cscRechitCluster3NRechitChamberMinus31;   //!
   TBranch        *b_cscRechitCluster3NRechitChamberMinus32;   //!
   TBranch        *b_cscRechitCluster3NRechitChamberMinus41;   //!
   TBranch        *b_cscRechitCluster3NRechitChamberMinus42;   //!
   TBranch        *b_cscRechitCluster3Met_dPhi;   //!
   TBranch        *b_cscRechitCluster3MetXYCorr_dPhi;   //!
   TBranch        *b_cscRechitCluster3_match_cscRechits_0p4;   //!
   TBranch        *b_cscRechitCluster3NLayersChamberPlus11;   //!
   TBranch        *b_cscRechitCluster3NLayersChamberPlus12;   //!
   TBranch        *b_cscRechitCluster3NLayersChamberPlus13;   //!
   TBranch        *b_cscRechitCluster3NLayersChamberPlus21;   //!
   TBranch        *b_cscRechitCluster3NLayersChamberPlus22;   //!
   TBranch        *b_cscRechitCluster3NLayersChamberPlus31;   //!
   TBranch        *b_cscRechitCluster3NLayersChamberPlus32;   //!
   TBranch        *b_cscRechitCluster3NLayersChamberPlus41;   //!
   TBranch        *b_cscRechitCluster3NLayersChamberPlus42;   //!
   TBranch        *b_cscRechitCluster3NLayersChamberMinus11;   //!
   TBranch        *b_cscRechitCluster3NLayersChamberMinus12;   //!
   TBranch        *b_cscRechitCluster3NLayersChamberMinus13;   //!
   TBranch        *b_cscRechitCluster3NLayersChamberMinus21;   //!
   TBranch        *b_cscRechitCluster3NLayersChamberMinus22;   //!
   TBranch        *b_cscRechitCluster3NLayersChamberMinus31;   //!
   TBranch        *b_cscRechitCluster3NLayersChamberMinus32;   //!
   TBranch        *b_cscRechitCluster3NLayersChamberMinus41;   //!
   TBranch        *b_cscRechitCluster3NLayersChamberMinus42;   //!
   TBranch        *b_cscRechitCluster3MetHEM_dPhi;   //!
   TBranch        *b_cscRechitCluster3MetHEMXYCorr_dPhi;   //!
   TBranch        *b_cscRechitCluster3MetEENoise_dPhi;   //!
   TBranch        *b_cscRechitCluster3MetEENoiseXYCorr_dPhi;   //!
   TBranch        *b_cscRechitCluster3MetJesUp_dPhi;   //!
   TBranch        *b_cscRechitCluster3MetJesDown_dPhi;   //!
   TBranch        *b_cscRechitCluster3_match_dtRechits_phi0p2;   //!
   TBranch        *b_cscRechitCluster3_match_dtRechits_0p4;   //!
   TBranch        *b_cscRechitCluster3_match_MB1_0p4;   //!
   TBranch        *b_cscRechitCluster3_match_dtSeg_0p4;   //!
   TBranch        *b_cscRechitCluster3_match_MB1Seg_0p4;   //!
   TBranch        *b_cscRechitCluster3_match_RB1_0p4;   //!
   TBranch        *b_cscRechitCluster3_match_RE12_0p4;   //!
   TBranch        *b_cscRechitCluster3_match_cluster_dR;   //!
   TBranch        *b_cscRechitCluster3_match_cluster_index;   //!
   TBranch        *b_gLLP_multiplicity;   //!
   TBranch        *b_gLLP_multiplicity20;   //!
   TBranch        *b_gLLP_EM_multiplicity;   //!
   TBranch        *b_gLLP_eta;   //!
   TBranch        *b_gLLP_phi;   //!
   TBranch        *b_gLLP_csc;   //!
   TBranch        *b_gLLP_beta;   //!
   TBranch        *b_gLLP_maxMatchedDis;   //!
   TBranch        *b_gLLP_e;   //!
   TBranch        *b_gLLP_pt;   //!
   TBranch        *b_gLLP_lepdPhi;   //!
   TBranch        *b_gLLP_daughterKaon;   //!
   TBranch        *b_gLLP_ctau;   //!
   TBranch        *b_gLLP_EMFracE;   //!
   TBranch        *b_gLLP_EMFracEz;   //!
   TBranch        *b_gLLP_EMFracP;   //!
   TBranch        *b_gLLP_EMFracPz;   //!
   TBranch        *b_gLLP_visE;   //!
   TBranch        *b_gLLP_visE20;   //!
   TBranch        *b_gLLP_visEz;   //!
   TBranch        *b_gLLP_visP;   //!
   TBranch        *b_gLLP_visPz;   //!
   TBranch        *b_gLLP_decay_vertex_r;   //!
   TBranch        *b_gLLP_decay_vertex_x;   //!
   TBranch        *b_gLLP_decay_vertex_y;   //!
   TBranch        *b_gLLP_decay_vertex_z;   //!
   TBranch        *b_gLLP_deltaR;   //!
   TBranch        *b_gLLP_daughter_deltaR;   //!
   TBranch        *b_gLLP_daughter_pt;   //!
   TBranch        *b_gLLP_daughter_id;   //!
   TBranch        *b_gLLP_daughter_eta;   //!
   TBranch        *b_gLLP_daughter_phi;   //!
   TBranch        *b_gLLP_daughter_e;   //!
   TBranch        *b_gLLP_daughter_mass;   //!
   TBranch        *b_nMuons;   //!
   TBranch        *b_muonPt;   //!
   TBranch        *b_muonEta;   //!
   TBranch        *b_muonPhi;   //!
   TBranch        *b_nLeptons;   //!
   TBranch        *b_lepE;   //!
   TBranch        *b_lepPt;   //!
   TBranch        *b_lepEta;   //!
   TBranch        *b_lepPhi;   //!
   TBranch        *b_lepPdgId;   //!
   TBranch        *b_lepDZ;   //!
   TBranch        *b_lepPassId;   //!
   TBranch        *b_lepFromZ;   //!
   TBranch        *b_lepEff;   //!
   TBranch        *b_lepSF;   //!
   TBranch        *b_lepTriggerSF;   //!
   TBranch        *b_lepTightIdSF;   //!
   TBranch        *b_lepLooseIdSF;   //!
   TBranch        *b_lepTightIsoSF;   //!
   TBranch        *b_lepLooseIsoSF;   //!
   TBranch        *b_lepTag;   //!
   TBranch        *b_lepPassLooseIso;   //!
   TBranch        *b_lepPassTightIso;   //!
   TBranch        *b_lepPassVTightIso;   //!
   TBranch        *b_lepPassVVTightIso;   //!
   TBranch        *b_MT;   //!
   TBranch        *b_ZMass1;   //!
   TBranch        *b_ZMass;   //!
   TBranch        *b_ZPt;   //!
   TBranch        *b_ZEta;   //!
   TBranch        *b_ZPhi;   //!
   TBranch        *b_ZleptonIndex1;   //!
   TBranch        *b_ZleptonIndex2;   //!
   TBranch        *b_nJets;   //!
   TBranch        *b_jetE;   //!
   TBranch        *b_jetPt;   //!
   TBranch        *b_jetEta;   //!
   TBranch        *b_jetPhi;   //!
   TBranch        *b_jetTime;   //!
   TBranch        *b_jetPassId;   //!
   TBranch        *b_jetPtJESUp;   //!
   TBranch        *b_jetPtJESDown;   //!
   TBranch        *b_jetEJESUp;   //!
   TBranch        *b_jetEJESDown;   //!
   TBranch        *b_JecUnc;   //!
   TBranch        *b_jet_match_genJet_pt;   //!
   TBranch        *b_jet_match_genJet_index;   //!
   TBranch        *b_jet_match_genJet_minDeltaR;   //!
   TBranch        *b_jetTightPassId;   //!
   TBranch        *b_HLTDecision;   //!
   TBranch        *b_METTrigger;   //!
   TBranch        *b_METNoMuTrigger;   //!
   TBranch        *b_jetMuonEnergyFraction;   //!
   TBranch        *b_jetElectronEnergyFraction;   //!
   TBranch        *b_jetPhotonEnergyFraction;   //!
   TBranch        *b_jetChargedHadronEnergyFraction;   //!
   TBranch        *b_jetNeutralHadronEnergyFraction;   //!

   int    det_ID[2];
   double ctau_weight[13];
   double ctau_weight10;
   double ctau_weight30;
   double ctau_weight60;
   double ctau_weight100;
   double ctau_weight300;
   double ctau_weight600;
   double ctau_weight1000;
   double ctau_weight3000;
   double ctau_weight6000;
   double ctau_weight10000;
   double ctau_weight30000;
   double ctau_weight60000;
   double ctau_weight100000;

   MuonSystem(TTree *tree=0);
   virtual ~MuonSystem();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     UnSetBranches();
   virtual void     SetAcceptanceBranches();
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
   virtual detectorID GetLLP_DetectorID(int index);
   virtual float GetCtau(float rf_decay_length1, float rf_decay_length2, float old_ctau, float new_ctau);
   virtual void CreateOutTree();
};

#endif

#ifdef MuonSystem_cxx
MuonSystem::MuonSystem(TTree *tree) : fChain(0)
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("ggH_HToSSTo4Tau_MH-125_MS-15_ctau-10_137000pb_weighted.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("ggH_HToSSTo4Tau_MH-125_MS-15_ctau-10_137000pb_weighted.root");
      }
      f->GetObject("MuonSystem",tree);

   }
   Init(tree);
}

MuonSystem::~MuonSystem()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t MuonSystem::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t MuonSystem::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void MuonSystem::UnSetBranches(){fChain->SetBranchStatus("*",0);};
void MuonSystem::SetAcceptanceBranches()
{
  fChain->SetBranchStatus("ctau", 1);
  fChain->SetBranchStatus("weight",1);
  fChain->SetBranchStatus("pileupWeight",1);
  fChain->SetBranchStatus("met",1);
  //fChain->SetBranchStatus("HT",1);

  fChain->SetBranchStatus("gHiggsPt",1);
  fChain->SetBranchStatus("gLLP_ctau",1);
  fChain->SetBranchStatus("gLLP_decay_vertex_r",1);
  fChain->SetBranchStatus("gLLP_decay_vertex_x",1);
  fChain->SetBranchStatus("gLLP_decay_vertex_y",1);
  fChain->SetBranchStatus("gLLP_decay_vertex_z",1);

};

void MuonSystem::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("runNum", &runNum, &b_runNum);
   fChain->SetBranchAddress("lumiSec", &lumiSec, &b_lumiSec);
   fChain->SetBranchAddress("evtNum", &evtNum, &b_evtNum);
   fChain->SetBranchAddress("mH", &mH, &b_mH);
   fChain->SetBranchAddress("mX", &mX, &b_mX);
   fChain->SetBranchAddress("ctau", &ctau, &b_ctau);
   fChain->SetBranchAddress("ZCategory", &ZCategory, &b_ZCategory);
   fChain->SetBranchAddress("category", &category, &b_category);
   fChain->SetBranchAddress("npv", &npv, &b_npv);
   fChain->SetBranchAddress("npu", &npu, &b_npu);
   fChain->SetBranchAddress("weight", &weight, &b_weight);
   fChain->SetBranchAddress("higgsPtWeight", &higgsPtWeight, &b_higgsPtWeight);
   fChain->SetBranchAddress("higgsPtWeightSys", higgsPtWeightSys, &b_higgsPtWeightSys);
   fChain->SetBranchAddress("scaleWeights", scaleWeights, &b_scaleWeights);
   fChain->SetBranchAddress("lepOverallSF", &lepOverallSF, &b_lepOverallSF);
   fChain->SetBranchAddress("sf_facScaleUp", &sf_facScaleUp, &b_sf_facScaleUp);
   fChain->SetBranchAddress("sf_facScaleDown", &sf_facScaleDown, &b_sf_facScaleDown);
   fChain->SetBranchAddress("sf_renScaleUp", &sf_renScaleUp, &b_sf_renScaleUp);
   fChain->SetBranchAddress("sf_renScaleDown", &sf_renScaleDown, &b_sf_renScaleDown);
   fChain->SetBranchAddress("sf_facRenScaleUp", &sf_facRenScaleUp, &b_sf_facRenScaleUp);
   fChain->SetBranchAddress("sf_facRenScaleDown", &sf_facRenScaleDown, &b_sf_facRenScaleDown);
   fChain->SetBranchAddress("metSF", &metSF, &b_metSF);
   fChain->SetBranchAddress("pileupWeight", &pileupWeight, &b_pileupWeight);
   fChain->SetBranchAddress("pileupWeightUp", &pileupWeightUp, &b_pileupWeightUp);
   fChain->SetBranchAddress("pileupWeightDown", &pileupWeightDown, &b_pileupWeightDown);
   fChain->SetBranchAddress("Flag_HBHENoiseFilter", &Flag_HBHENoiseFilter, &b_Flag_HBHENoiseFilter);
   fChain->SetBranchAddress("Flag_BadPFMuonFilter", &Flag_BadPFMuonFilter, &b_Flag_BadPFMuonFilter);
   fChain->SetBranchAddress("Flag_HBHEIsoNoiseFilter", &Flag_HBHEIsoNoiseFilter, &b_Flag_HBHEIsoNoiseFilter);
   fChain->SetBranchAddress("Flag_CSCTightHaloFilter", &Flag_CSCTightHaloFilter, &b_Flag_CSCTightHaloFilter);
   fChain->SetBranchAddress("Flag_globalSuperTightHalo2016Filter", &Flag_globalSuperTightHalo2016Filter, &b_Flag_globalSuperTightHalo2016Filter);
   fChain->SetBranchAddress("Flag_goodVertices", &Flag_goodVertices, &b_Flag_goodVertices);
   fChain->SetBranchAddress("Flag_ecalBadCalibFilter", &Flag_ecalBadCalibFilter, &b_Flag_ecalBadCalibFilter);
   fChain->SetBranchAddress("Flag_BadChargedCandidateFilter", &Flag_BadChargedCandidateFilter, &b_Flag_BadChargedCandidateFilter);
   fChain->SetBranchAddress("Flag_eeBadScFilter", &Flag_eeBadScFilter, &b_Flag_eeBadScFilter);
   fChain->SetBranchAddress("Flag_all", &Flag_all, &b_Flag_all);
   fChain->SetBranchAddress("Flag2_HBHENoiseFilter", &Flag2_HBHENoiseFilter, &b_Flag2_HBHENoiseFilter);
   fChain->SetBranchAddress("Flag2_HBHEIsoNoiseFilter", &Flag2_HBHEIsoNoiseFilter, &b_Flag2_HBHEIsoNoiseFilter);
   fChain->SetBranchAddress("Flag2_BadPFMuonFilter", &Flag2_BadPFMuonFilter, &b_Flag2_BadPFMuonFilter);
   fChain->SetBranchAddress("Flag2_globalSuperTightHalo2016Filter", &Flag2_globalSuperTightHalo2016Filter, &b_Flag2_globalSuperTightHalo2016Filter);
   fChain->SetBranchAddress("Flag2_globalTightHalo2016Filter", &Flag2_globalTightHalo2016Filter, &b_Flag2_globalTightHalo2016Filter);
   fChain->SetBranchAddress("Flag2_BadChargedCandidateFilter", &Flag2_BadChargedCandidateFilter, &b_Flag2_BadChargedCandidateFilter);
   fChain->SetBranchAddress("Flag2_EcalDeadCellTriggerPrimitiveFilter", &Flag2_EcalDeadCellTriggerPrimitiveFilter, &b_Flag2_EcalDeadCellTriggerPrimitiveFilter);
   fChain->SetBranchAddress("Flag2_ecalBadCalibFilter", &Flag2_ecalBadCalibFilter, &b_Flag2_ecalBadCalibFilter);
   fChain->SetBranchAddress("Flag2_eeBadScFilter", &Flag2_eeBadScFilter, &b_Flag2_eeBadScFilter);
   fChain->SetBranchAddress("Flag2_all", &Flag2_all, &b_Flag2_all);
   fChain->SetBranchAddress("EE_prefiring", &EE_prefiring, &b_EE_prefiring);
   fChain->SetBranchAddress("rho", &rho, &b_rho);
   fChain->SetBranchAddress("met", &met, &b_met);
   fChain->SetBranchAddress("metNoMu", &metNoMu, &b_metNoMu);
   fChain->SetBranchAddress("metPhi", &metPhi, &b_metPhi);
   fChain->SetBranchAddress("metXYCorr", &metXYCorr, &b_metXYCorr);
   fChain->SetBranchAddress("metPhiXYCorr", &metPhiXYCorr, &b_metPhiXYCorr);
   fChain->SetBranchAddress("HT", &HT, &b_HT);
   fChain->SetBranchAddress("jetMet_dPhi", &jetMet_dPhi, &b_jetMet_dPhi);
   fChain->SetBranchAddress("jetMet_dPhiMin", &jetMet_dPhiMin, &b_jetMet_dPhiMin);
   fChain->SetBranchAddress("jetMet_dPhiMin4", &jetMet_dPhiMin4, &b_jetMet_dPhiMin4);
   fChain->SetBranchAddress("metJESUp", &metJESUp, &b_metJESUp);
   fChain->SetBranchAddress("metJESDown", &metJESDown, &b_metJESDown);
   fChain->SetBranchAddress("metPhiJESUp", &metPhiJESUp, &b_metPhiJESUp);
   fChain->SetBranchAddress("metPhiJESDown", &metPhiJESDown, &b_metPhiJESDown);
   fChain->SetBranchAddress("metJESUpSF", &metJESUpSF, &b_metJESUpSF);
   fChain->SetBranchAddress("metJESDownSF", &metJESDownSF, &b_metJESDownSF);
   fChain->SetBranchAddress("metEENoise", &metEENoise, &b_metEENoise);
   fChain->SetBranchAddress("metPhiEENoise", &metPhiEENoise, &b_metPhiEENoise);
   fChain->SetBranchAddress("metHEM", &metHEM, &b_metHEM);
   fChain->SetBranchAddress("metPhiHEM", &metPhiHEM, &b_metPhiHEM);
   fChain->SetBranchAddress("metEENoiseXYCorr", &metEENoiseXYCorr, &b_metEENoiseXYCorr);
   fChain->SetBranchAddress("metPhiEENoiseXYCorr", &metPhiEENoiseXYCorr, &b_metPhiEENoiseXYCorr);
   fChain->SetBranchAddress("metHEMXYCorr", &metHEMXYCorr, &b_metHEMXYCorr);
   fChain->SetBranchAddress("metPhiHEMXYCorr", &metPhiHEMXYCorr, &b_metPhiHEMXYCorr);
   fChain->SetBranchAddress("genMetPtTrue", &genMetPtTrue, &b_genMetPtTrue);
   fChain->SetBranchAddress("genMetPhiTrue", &genMetPhiTrue, &b_genMetPhiTrue);
   fChain->SetBranchAddress("genMetPtCalo", &genMetPtCalo, &b_genMetPtCalo);
   fChain->SetBranchAddress("genMetPhiCalo", &genMetPhiCalo, &b_genMetPhiCalo);
   fChain->SetBranchAddress("nGenParticle", &nGenParticle, &b_nGenParticle);
   fChain->SetBranchAddress("gParticleId", &gParticleId, &b_gParticleId);
   fChain->SetBranchAddress("gParticleStatus", &gParticleStatus, &b_gParticleStatus);
   fChain->SetBranchAddress("gParticleMotherId", &gParticleMotherId, &b_gParticleMotherId);
   fChain->SetBranchAddress("gParticleE", &gParticleE, &b_gParticleE);
   fChain->SetBranchAddress("gParticlePt", &gParticlePt, &b_gParticlePt);
   fChain->SetBranchAddress("gParticleEta", &gParticleEta, &b_gParticleEta);
   fChain->SetBranchAddress("gParticlePhi", &gParticlePhi, &b_gParticlePhi);
   fChain->SetBranchAddress("nGenJets", &nGenJets, &b_nGenJets);
   fChain->SetBranchAddress("genJetE", &genJetE, &b_genJetE);
   fChain->SetBranchAddress("genJetPt", &genJetPt, &b_genJetPt);
   fChain->SetBranchAddress("genJetEta", &genJetEta, &b_genJetEta);
   fChain->SetBranchAddress("genJetPhi", &genJetPhi, &b_genJetPhi);
   fChain->SetBranchAddress("genJetMET", &genJetMET, &b_genJetMET);
   fChain->SetBranchAddress("gWPt", &gWPt, &b_gWPt);
   fChain->SetBranchAddress("gLepId", &gLepId, &b_gLepId);
   fChain->SetBranchAddress("gLepPt", &gLepPt, &b_gLepPt);
   fChain->SetBranchAddress("gLepE", &gLepE, &b_gLepE);
   fChain->SetBranchAddress("gLepEta", &gLepEta, &b_gLepEta);
   fChain->SetBranchAddress("gLepPhi", &gLepPhi, &b_gLepPhi);
   fChain->SetBranchAddress("gHiggsPt", &gHiggsPt, &b_gHiggsPt);
   fChain->SetBranchAddress("gHiggsE", &gHiggsE, &b_gHiggsE);
   fChain->SetBranchAddress("gHiggsEta", &gHiggsEta, &b_gHiggsEta);
   fChain->SetBranchAddress("gHiggsPhi", &gHiggsPhi, &b_gHiggsPhi);
   fChain->SetBranchAddress("nCscRechits", &nCscRechits, &b_nCscRechits);
   fChain->SetBranchAddress("nEarlyCscRechits", &nEarlyCscRechits, &b_nEarlyCscRechits);
   fChain->SetBranchAddress("nLateCscRechits", &nLateCscRechits, &b_nLateCscRechits);
   fChain->SetBranchAddress("nEarly2CscRechits", &nEarly2CscRechits, &b_nEarly2CscRechits);
   fChain->SetBranchAddress("nLate2CscRechits", &nLate2CscRechits, &b_nLate2CscRechits);
   fChain->SetBranchAddress("nCscRings", &nCscRings, &b_nCscRings);
   fChain->SetBranchAddress("nCscPositiveYRechits", &nCscPositiveYRechits, &b_nCscPositiveYRechits);
   fChain->SetBranchAddress("nCscNegativeYRechits", &nCscNegativeYRechits, &b_nCscNegativeYRechits);
   fChain->SetBranchAddress("cscPosTpeak", &cscPosTpeak, &b_cscPosTpeak);
   fChain->SetBranchAddress("cscNegTpeak", &cscNegTpeak, &b_cscNegTpeak);
   fChain->SetBranchAddress("nCscRechitsChamberPlus11", &nCscRechitsChamberPlus11, &b_nCscRechitsChamberPlus11);
   fChain->SetBranchAddress("nCscRechitsChamberPlus12", &nCscRechitsChamberPlus12, &b_nCscRechitsChamberPlus12);
   fChain->SetBranchAddress("nCscRechitsChamberPlus13", &nCscRechitsChamberPlus13, &b_nCscRechitsChamberPlus13);
   fChain->SetBranchAddress("nCscRechitsChamberPlus21", &nCscRechitsChamberPlus21, &b_nCscRechitsChamberPlus21);
   fChain->SetBranchAddress("nCscRechitsChamberPlus22", &nCscRechitsChamberPlus22, &b_nCscRechitsChamberPlus22);
   fChain->SetBranchAddress("nCscRechitsChamberPlus31", &nCscRechitsChamberPlus31, &b_nCscRechitsChamberPlus31);
   fChain->SetBranchAddress("nCscRechitsChamberPlus32", &nCscRechitsChamberPlus32, &b_nCscRechitsChamberPlus32);
   fChain->SetBranchAddress("nCscRechitsChamberPlus41", &nCscRechitsChamberPlus41, &b_nCscRechitsChamberPlus41);
   fChain->SetBranchAddress("nCscRechitsChamberPlus42", &nCscRechitsChamberPlus42, &b_nCscRechitsChamberPlus42);
   fChain->SetBranchAddress("nCscRechitsChamberMinus11", &nCscRechitsChamberMinus11, &b_nCscRechitsChamberMinus11);
   fChain->SetBranchAddress("nCscRechitsChamberMinus12", &nCscRechitsChamberMinus12, &b_nCscRechitsChamberMinus12);
   fChain->SetBranchAddress("nCscRechitsChamberMinus13", &nCscRechitsChamberMinus13, &b_nCscRechitsChamberMinus13);
   fChain->SetBranchAddress("nCscRechitsChamberMinus21", &nCscRechitsChamberMinus21, &b_nCscRechitsChamberMinus21);
   fChain->SetBranchAddress("nCscRechitsChamberMinus22", &nCscRechitsChamberMinus22, &b_nCscRechitsChamberMinus22);
   fChain->SetBranchAddress("nCscRechitsChamberMinus31", &nCscRechitsChamberMinus31, &b_nCscRechitsChamberMinus31);
   fChain->SetBranchAddress("nCscRechitsChamberMinus32", &nCscRechitsChamberMinus32, &b_nCscRechitsChamberMinus32);
   fChain->SetBranchAddress("nCscRechitsChamberMinus41", &nCscRechitsChamberMinus41, &b_nCscRechitsChamberMinus41);
   fChain->SetBranchAddress("nCscRechitsChamberMinus42", &nCscRechitsChamberMinus42, &b_nCscRechitsChamberMinus42);
   fChain->SetBranchAddress("nRpc", &nRpc, &b_nRpc);
   fChain->SetBranchAddress("nDtSeg", &nDtSeg, &b_nDtSeg);
   fChain->SetBranchAddress("nDTRechits", &nDTRechits, &b_nDTRechits);
   fChain->SetBranchAddress("nDtRings", &nDtRings, &b_nDtRings);
   fChain->SetBranchAddress("nDTPositiveYRechits", &nDTPositiveYRechits, &b_nDTPositiveYRechits);
   fChain->SetBranchAddress("nDTNegativeYRechits", &nDTNegativeYRechits, &b_nDTNegativeYRechits);
   fChain->SetBranchAddress("nDTRechitsChamberMinus12", &nDTRechitsChamberMinus12, &b_nDTRechitsChamberMinus12);
   fChain->SetBranchAddress("nDTRechitsChamberMinus11", &nDTRechitsChamberMinus11, &b_nDTRechitsChamberMinus11);
   fChain->SetBranchAddress("nDTRechitsChamber10", &nDTRechitsChamber10, &b_nDTRechitsChamber10);
   fChain->SetBranchAddress("nDTRechitsChamberPlus11", &nDTRechitsChamberPlus11, &b_nDTRechitsChamberPlus11);
   fChain->SetBranchAddress("nDTRechitsChamberPlus12", &nDTRechitsChamberPlus12, &b_nDTRechitsChamberPlus12);
   fChain->SetBranchAddress("nDTRechitsChamberMinus22", &nDTRechitsChamberMinus22, &b_nDTRechitsChamberMinus22);
   fChain->SetBranchAddress("nDTRechitsChamberMinus21", &nDTRechitsChamberMinus21, &b_nDTRechitsChamberMinus21);
   fChain->SetBranchAddress("nDTRechitsChamber20", &nDTRechitsChamber20, &b_nDTRechitsChamber20);
   fChain->SetBranchAddress("nDTRechitsChamberPlus21", &nDTRechitsChamberPlus21, &b_nDTRechitsChamberPlus21);
   fChain->SetBranchAddress("nDTRechitsChamberPlus22", &nDTRechitsChamberPlus22, &b_nDTRechitsChamberPlus22);
   fChain->SetBranchAddress("nDTRechitsChamberMinus32", &nDTRechitsChamberMinus32, &b_nDTRechitsChamberMinus32);
   fChain->SetBranchAddress("nDTRechitsChamberMinus31", &nDTRechitsChamberMinus31, &b_nDTRechitsChamberMinus31);
   fChain->SetBranchAddress("nDTRechitsChamber30", &nDTRechitsChamber30, &b_nDTRechitsChamber30);
   fChain->SetBranchAddress("nDTRechitsChamberPlus31", &nDTRechitsChamberPlus31, &b_nDTRechitsChamberPlus31);
   fChain->SetBranchAddress("nDTRechitsChamberPlus32", &nDTRechitsChamberPlus32, &b_nDTRechitsChamberPlus32);
   fChain->SetBranchAddress("nDTRechitsChamberMinus42", &nDTRechitsChamberMinus42, &b_nDTRechitsChamberMinus42);
   fChain->SetBranchAddress("nDTRechitsChamberMinus41", &nDTRechitsChamberMinus41, &b_nDTRechitsChamberMinus41);
   fChain->SetBranchAddress("nDTRechitsChamber40", &nDTRechitsChamber40, &b_nDTRechitsChamber40);
   fChain->SetBranchAddress("nDTRechitsChamberPlus41", &nDTRechitsChamberPlus41, &b_nDTRechitsChamberPlus41);
   fChain->SetBranchAddress("nDTRechitsChamberPlus42", &nDTRechitsChamberPlus42, &b_nDTRechitsChamberPlus42);
   fChain->SetBranchAddress("cscRechitsStation", &cscRechitsStation, &b_cscRechitsStation);
   fChain->SetBranchAddress("cscRechitsChamber", &cscRechitsChamber, &b_cscRechitsChamber);
   fChain->SetBranchAddress("cscRechitsPhi", &cscRechitsPhi, &b_cscRechitsPhi);
   fChain->SetBranchAddress("cscRechitsEta", &cscRechitsEta, &b_cscRechitsEta);
   fChain->SetBranchAddress("dtRechitsEta", dtRechitsEta, &b_dtRechitsEta);
   fChain->SetBranchAddress("dtRechitsPhi", dtRechitsPhi, &b_dtRechitsPhi);
   fChain->SetBranchAddress("dtRechitsStation", dtRechitsStation, &b_dtRechitsStation);
   fChain->SetBranchAddress("dtRechitsWheel", dtRechitsWheel, &b_dtRechitsWheel);
   fChain->SetBranchAddress("rpcEta", &rpcEta, &b_rpcEta);
   fChain->SetBranchAddress("rpcPhi", &rpcPhi, &b_rpcPhi);
   fChain->SetBranchAddress("rpc_RE12", &rpc_RE12, &b_rpc_RE12);
   fChain->SetBranchAddress("rpc_RB1", &rpc_RB1, &b_rpc_RB1);
   fChain->SetBranchAddress("dtSegEta", &dtSegEta, &b_dtSegEta);
   fChain->SetBranchAddress("dtSegPhi", &dtSegPhi, &b_dtSegPhi);
   fChain->SetBranchAddress("dtSegWheel", &dtSegWheel, &b_dtSegWheel);
   fChain->SetBranchAddress("dtSegStation", &dtSegStation, &b_dtSegStation);
   fChain->SetBranchAddress("nCscRechitClusters3", &nCscRechitClusters3, &b_nCscRechitClusters3);
   fChain->SetBranchAddress("cscRechitCluster3_match_gLLP", cscRechitCluster3_match_gLLP, &b_cscRechitCluster3_match_gLLP);
   fChain->SetBranchAddress("cscRechitCluster3_match_gLLP_minDeltaR", cscRechitCluster3_match_gLLP_minDeltaR, &b_cscRechitCluster3_match_gLLP_minDeltaR);
   fChain->SetBranchAddress("cscRechitCluster3_match_gLLP_index", cscRechitCluster3_match_gLLP_index, &b_cscRechitCluster3_match_gLLP_index);
   fChain->SetBranchAddress("cscRechitCluster3_match_gLLP_eta", cscRechitCluster3_match_gLLP_eta, &b_cscRechitCluster3_match_gLLP_eta);
   fChain->SetBranchAddress("cscRechitCluster3_match_gLLP_phi", cscRechitCluster3_match_gLLP_phi, &b_cscRechitCluster3_match_gLLP_phi);
   fChain->SetBranchAddress("cscRechitCluster3_match_gLLP_decay_r", cscRechitCluster3_match_gLLP_decay_r, &b_cscRechitCluster3_match_gLLP_decay_r);
   fChain->SetBranchAddress("cscRechitCluster3_match_gLLP_decay_x", cscRechitCluster3_match_gLLP_decay_x, &b_cscRechitCluster3_match_gLLP_decay_x);
   fChain->SetBranchAddress("cscRechitCluster3_match_gLLP_decay_y", cscRechitCluster3_match_gLLP_decay_y, &b_cscRechitCluster3_match_gLLP_decay_y);
   fChain->SetBranchAddress("cscRechitCluster3_match_gLLP_decay_z", cscRechitCluster3_match_gLLP_decay_z, &b_cscRechitCluster3_match_gLLP_decay_z);
   fChain->SetBranchAddress("cscRechitCluster3_match_gLLP_ctau", cscRechitCluster3_match_gLLP_ctau, &b_cscRechitCluster3_match_gLLP_ctau);
   fChain->SetBranchAddress("cscRechitCluster3_match_gLLP_beta", cscRechitCluster3_match_gLLP_beta, &b_cscRechitCluster3_match_gLLP_beta);
   fChain->SetBranchAddress("cscRechitCluster3_match_gLLP_csc", cscRechitCluster3_match_gLLP_csc, &b_cscRechitCluster3_match_gLLP_csc);
   fChain->SetBranchAddress("cscRechitCluster3_match_gLLP_multiplicity", cscRechitCluster3_match_gLLP_multiplicity, &b_cscRechitCluster3_match_gLLP_multiplicity);
   fChain->SetBranchAddress("cscRechitCluster3_match_gLLP_EM_multiplicity", cscRechitCluster3_match_gLLP_EM_multiplicity, &b_cscRechitCluster3_match_gLLP_EM_multiplicity);
   fChain->SetBranchAddress("cscRechitCluster3_match_gLLP_daughterKaon", cscRechitCluster3_match_gLLP_daughterKaon, &b_cscRechitCluster3_match_gLLP_daughterKaon);
   fChain->SetBranchAddress("cscRechitCluster3_match_gLLP_e", cscRechitCluster3_match_gLLP_e, &b_cscRechitCluster3_match_gLLP_e);
   fChain->SetBranchAddress("cscRechitCluster3_match_gLLP_pt", cscRechitCluster3_match_gLLP_pt, &b_cscRechitCluster3_match_gLLP_pt);
   fChain->SetBranchAddress("cscRechitCluster3_match_gLLP_EMFracE", cscRechitCluster3_match_gLLP_EMFracE, &b_cscRechitCluster3_match_gLLP_EMFracE);
   fChain->SetBranchAddress("cscRechitCluster3_match_gLLP_EMFracEz", cscRechitCluster3_match_gLLP_EMFracEz, &b_cscRechitCluster3_match_gLLP_EMFracEz);
   fChain->SetBranchAddress("cscRechitCluster3_match_gLLP_EMFracP", cscRechitCluster3_match_gLLP_EMFracP, &b_cscRechitCluster3_match_gLLP_EMFracP);
   fChain->SetBranchAddress("cscRechitCluster3_match_gLLP_EMFracPz", cscRechitCluster3_match_gLLP_EMFracPz, &b_cscRechitCluster3_match_gLLP_EMFracPz);
   fChain->SetBranchAddress("cscRechitCluster3_match_gLLP_visE", cscRechitCluster3_match_gLLP_visE, &b_cscRechitCluster3_match_gLLP_visE);
   fChain->SetBranchAddress("cscRechitCluster3_match_gLLP_visEz", cscRechitCluster3_match_gLLP_visEz, &b_cscRechitCluster3_match_gLLP_visEz);
   fChain->SetBranchAddress("cscRechitCluster3_match_gLLP_visP", cscRechitCluster3_match_gLLP_visP, &b_cscRechitCluster3_match_gLLP_visP);
   fChain->SetBranchAddress("cscRechitCluster3_match_gLLP_visPz", cscRechitCluster3_match_gLLP_visPz, &b_cscRechitCluster3_match_gLLP_visPz);
   fChain->SetBranchAddress("cscRechitCluster3_match_gLLP_lepdPhi", cscRechitCluster3_match_gLLP_lepdPhi, &b_cscRechitCluster3_match_gLLP_lepdPhi);
   fChain->SetBranchAddress("cscRechitCluster3_match_gLLP_daughter0_deltaR", cscRechitCluster3_match_gLLP_daughter0_deltaR, &b_cscRechitCluster3_match_gLLP_daughter0_deltaR);
   fChain->SetBranchAddress("cscRechitCluster3_match_gLLP_daughter1_deltaR", cscRechitCluster3_match_gLLP_daughter1_deltaR, &b_cscRechitCluster3_match_gLLP_daughter1_deltaR);
   fChain->SetBranchAddress("cscRechitCluster3_match_gLLP_daughter2_deltaR", cscRechitCluster3_match_gLLP_daughter2_deltaR, &b_cscRechitCluster3_match_gLLP_daughter2_deltaR);
   fChain->SetBranchAddress("cscRechitCluster3_match_gLLP_daughter3_deltaR", cscRechitCluster3_match_gLLP_daughter3_deltaR, &b_cscRechitCluster3_match_gLLP_daughter3_deltaR);
   fChain->SetBranchAddress("cscRechitCluster3_match_gLLP_other_daughter_deltaR", cscRechitCluster3_match_gLLP_other_daughter_deltaR, &b_cscRechitCluster3_match_gLLP_other_daughter_deltaR);
   fChain->SetBranchAddress("cscRechitCluster3_match_gLLP_other_daughter_index", cscRechitCluster3_match_gLLP_other_daughter_index, &b_cscRechitCluster3_match_gLLP_other_daughter_index);
   fChain->SetBranchAddress("cscRechitCluster3_match_gLLP_other_eta", cscRechitCluster3_match_gLLP_other_eta, &b_cscRechitCluster3_match_gLLP_other_eta);
   fChain->SetBranchAddress("cscRechitCluster3_match_gLLP_other_phi", cscRechitCluster3_match_gLLP_other_phi, &b_cscRechitCluster3_match_gLLP_other_phi);
   fChain->SetBranchAddress("cscRechitCluster3_match_gLLP_other_decay_r", cscRechitCluster3_match_gLLP_other_decay_r, &b_cscRechitCluster3_match_gLLP_other_decay_r);
   fChain->SetBranchAddress("cscRechitCluster3_match_gLLP_other_decay_x", cscRechitCluster3_match_gLLP_other_decay_x, &b_cscRechitCluster3_match_gLLP_other_decay_x);
   fChain->SetBranchAddress("cscRechitCluster3_match_gLLP_other_decay_y", cscRechitCluster3_match_gLLP_other_decay_y, &b_cscRechitCluster3_match_gLLP_other_decay_y);
   fChain->SetBranchAddress("cscRechitCluster3_match_gLLP_other_decay_z", cscRechitCluster3_match_gLLP_other_decay_z, &b_cscRechitCluster3_match_gLLP_other_decay_z);
   fChain->SetBranchAddress("cscRechitCluster3_match_gLLP_other_ctau", cscRechitCluster3_match_gLLP_other_ctau, &b_cscRechitCluster3_match_gLLP_other_ctau);
   fChain->SetBranchAddress("cscRechitCluster3_match_gLLP_other_beta", cscRechitCluster3_match_gLLP_other_beta, &b_cscRechitCluster3_match_gLLP_other_beta);
   fChain->SetBranchAddress("cscRechitCluster3_match_gLLP_other_csc", cscRechitCluster3_match_gLLP_other_csc, &b_cscRechitCluster3_match_gLLP_other_csc);
   fChain->SetBranchAddress("cscRechitCluster3_match_gLLP_other_e", cscRechitCluster3_match_gLLP_other_e, &b_cscRechitCluster3_match_gLLP_other_e);
   fChain->SetBranchAddress("cscRechitCluster3_match_gLLP_other_pt", cscRechitCluster3_match_gLLP_other_pt, &b_cscRechitCluster3_match_gLLP_other_pt);
   fChain->SetBranchAddress("cscRechitCluster3X", cscRechitCluster3X, &b_cscRechitCluster3X);
   fChain->SetBranchAddress("cscRechitCluster3Y", cscRechitCluster3Y, &b_cscRechitCluster3Y);
   fChain->SetBranchAddress("cscRechitCluster3Z", cscRechitCluster3Z, &b_cscRechitCluster3Z);
   fChain->SetBranchAddress("cscRechitCluster3Time", cscRechitCluster3Time, &b_cscRechitCluster3Time);
   fChain->SetBranchAddress("cscRechitCluster3TimeWire", cscRechitCluster3TimeWire, &b_cscRechitCluster3TimeWire);
   fChain->SetBranchAddress("cscRechitCluster3TimeWirePruned", cscRechitCluster3TimeWirePruned, &b_cscRechitCluster3TimeWirePruned);
   fChain->SetBranchAddress("cscRechitCluster3TimeTotal", cscRechitCluster3TimeTotal, &b_cscRechitCluster3TimeTotal);
   fChain->SetBranchAddress("cscRechitCluster3TimeSpread", cscRechitCluster3TimeSpread, &b_cscRechitCluster3TimeSpread);
   fChain->SetBranchAddress("cscRechitCluster3TimeTotalSpread", cscRechitCluster3TimeTotalSpread, &b_cscRechitCluster3TimeTotalSpread);
   fChain->SetBranchAddress("cscRechitCluster3TimeTotalSpreadPruned", cscRechitCluster3TimeTotalSpreadPruned, &b_cscRechitCluster3TimeTotalSpreadPruned);
   fChain->SetBranchAddress("cscRechitCluster3TimeWireSpread", cscRechitCluster3TimeWireSpread, &b_cscRechitCluster3TimeWireSpread);
   fChain->SetBranchAddress("cscRechitCluster3GenMuonDeltaR", cscRechitCluster3GenMuonDeltaR, &b_cscRechitCluster3GenMuonDeltaR);
   fChain->SetBranchAddress("cscRechitCluster3XYSpread", cscRechitCluster3XYSpread, &b_cscRechitCluster3XYSpread);
   fChain->SetBranchAddress("cscRechitCluster3MajorAxis", cscRechitCluster3MajorAxis, &b_cscRechitCluster3MajorAxis);
   fChain->SetBranchAddress("cscRechitCluster3MinorAxis", cscRechitCluster3MinorAxis, &b_cscRechitCluster3MinorAxis);
   fChain->SetBranchAddress("cscRechitCluster3EtaPhiSpread", cscRechitCluster3EtaPhiSpread, &b_cscRechitCluster3EtaPhiSpread);
   fChain->SetBranchAddress("cscRechitCluster3PhiSpread", cscRechitCluster3PhiSpread, &b_cscRechitCluster3PhiSpread);
   fChain->SetBranchAddress("cscRechitCluster3EtaSpread", cscRechitCluster3EtaSpread, &b_cscRechitCluster3EtaSpread);
   fChain->SetBranchAddress("cscRechitCluster3DeltaRSpread", cscRechitCluster3DeltaRSpread, &b_cscRechitCluster3DeltaRSpread);
   fChain->SetBranchAddress("cscRechitCluster3XSpread", cscRechitCluster3XSpread, &b_cscRechitCluster3XSpread);
   fChain->SetBranchAddress("cscRechitCluster3RSpread", cscRechitCluster3RSpread, &b_cscRechitCluster3RSpread);
   fChain->SetBranchAddress("cscRechitCluster3YSpread", cscRechitCluster3YSpread, &b_cscRechitCluster3YSpread);
   fChain->SetBranchAddress("cscRechitCluster3ZSpread", cscRechitCluster3ZSpread, &b_cscRechitCluster3ZSpread);
   fChain->SetBranchAddress("cscRechitCluster3Phi", cscRechitCluster3Phi, &b_cscRechitCluster3Phi);
   fChain->SetBranchAddress("cscRechitCluster3Eta", cscRechitCluster3Eta, &b_cscRechitCluster3Eta);
   fChain->SetBranchAddress("cscRechitCluster3JetVetoPt", cscRechitCluster3JetVetoPt, &b_cscRechitCluster3JetVetoPt);
   fChain->SetBranchAddress("cscRechitCluster3JetVetoEta", cscRechitCluster3JetVetoEta, &b_cscRechitCluster3JetVetoEta);
   fChain->SetBranchAddress("cscRechitCluster3JetVetoPhi", cscRechitCluster3JetVetoPhi, &b_cscRechitCluster3JetVetoPhi);
   fChain->SetBranchAddress("cscRechitCluster3JetVetoE", cscRechitCluster3JetVetoE, &b_cscRechitCluster3JetVetoE);
   fChain->SetBranchAddress("cscRechitCluster3GenJetVetoPt", cscRechitCluster3GenJetVetoPt, &b_cscRechitCluster3GenJetVetoPt);
   fChain->SetBranchAddress("cscRechitCluster3GenJetVetoE", cscRechitCluster3GenJetVetoE, &b_cscRechitCluster3GenJetVetoE);
   fChain->SetBranchAddress("cscRechitCluster3MuonVetoPt", cscRechitCluster3MuonVetoPt, &b_cscRechitCluster3MuonVetoPt);
   fChain->SetBranchAddress("cscRechitCluster3MuonVetoE", cscRechitCluster3MuonVetoE, &b_cscRechitCluster3MuonVetoE);
   fChain->SetBranchAddress("cscRechitCluster3MuonVetoPhi", cscRechitCluster3MuonVetoPhi, &b_cscRechitCluster3MuonVetoPhi);
   fChain->SetBranchAddress("cscRechitCluster3MuonVetoEta", cscRechitCluster3MuonVetoEta, &b_cscRechitCluster3MuonVetoEta);
   fChain->SetBranchAddress("cscRechitCluster3JetVetoElectronEnergyFraction", cscRechitCluster3JetVetoElectronEnergyFraction, &b_cscRechitCluster3JetVetoElectronEnergyFraction);
   fChain->SetBranchAddress("cscRechitCluster3JetVetoPhotonEnergyFraction", cscRechitCluster3JetVetoPhotonEnergyFraction, &b_cscRechitCluster3JetVetoPhotonEnergyFraction);
   fChain->SetBranchAddress("cscRechitCluster3JetVetoChargedHadronEnergyFraction", cscRechitCluster3JetVetoChargedHadronEnergyFraction, &b_cscRechitCluster3JetVetoChargedHadronEnergyFraction);
   fChain->SetBranchAddress("cscRechitCluster3JetVetoNeutralHadronEnergyFraction", cscRechitCluster3JetVetoNeutralHadronEnergyFraction, &b_cscRechitCluster3JetVetoNeutralHadronEnergyFraction);
   fChain->SetBranchAddress("cscRechitCluster3JetVetoMuonEnergyFraction", cscRechitCluster3JetVetoMuonEnergyFraction, &b_cscRechitCluster3JetVetoMuonEnergyFraction);
   fChain->SetBranchAddress("cscRechitCluster3JetVetoPt_0p6", cscRechitCluster3JetVetoPt_0p6, &b_cscRechitCluster3JetVetoPt_0p6);
   fChain->SetBranchAddress("cscRechitCluster3JetVetoPt_0p8", cscRechitCluster3JetVetoPt_0p8, &b_cscRechitCluster3JetVetoPt_0p8);
   fChain->SetBranchAddress("cscRechitCluster3JetVetoE_0p6", cscRechitCluster3JetVetoE_0p6, &b_cscRechitCluster3JetVetoE_0p6);
   fChain->SetBranchAddress("cscRechitCluster3JetVetoE_0p8", cscRechitCluster3JetVetoE_0p8, &b_cscRechitCluster3JetVetoE_0p8);
   fChain->SetBranchAddress("cscRechitCluster3MuonVetoPt_0p6", cscRechitCluster3MuonVetoPt_0p6, &b_cscRechitCluster3MuonVetoPt_0p6);
   fChain->SetBranchAddress("cscRechitCluster3MuonVetoPt_0p8", cscRechitCluster3MuonVetoPt_0p8, &b_cscRechitCluster3MuonVetoPt_0p8);
   fChain->SetBranchAddress("cscRechitCluster3MuonVetoE_0p6", cscRechitCluster3MuonVetoE_0p6, &b_cscRechitCluster3MuonVetoE_0p6);
   fChain->SetBranchAddress("cscRechitCluster3MuonVetoE_0p8", cscRechitCluster3MuonVetoE_0p8, &b_cscRechitCluster3MuonVetoE_0p8);
   fChain->SetBranchAddress("cscRechitCluster3MuonVetoLooseIso", cscRechitCluster3MuonVetoLooseIso, &b_cscRechitCluster3MuonVetoLooseIso);
   fChain->SetBranchAddress("cscRechitCluster3MuonVetoTightIso", cscRechitCluster3MuonVetoTightIso, &b_cscRechitCluster3MuonVetoTightIso);
   fChain->SetBranchAddress("cscRechitCluster3MuonVetoVTightIso", cscRechitCluster3MuonVetoVTightIso, &b_cscRechitCluster3MuonVetoVTightIso);
   fChain->SetBranchAddress("cscRechitCluster3MuonVetoVVTightIso", cscRechitCluster3MuonVetoVVTightIso, &b_cscRechitCluster3MuonVetoVVTightIso);
   fChain->SetBranchAddress("cscRechitCluster3MuonVetoTightId", cscRechitCluster3MuonVetoTightId, &b_cscRechitCluster3MuonVetoTightId);
   fChain->SetBranchAddress("cscRechitCluster3MuonVetoLooseId", cscRechitCluster3MuonVetoLooseId, &b_cscRechitCluster3MuonVetoLooseId);
   fChain->SetBranchAddress("cscRechitCluster3MuonVetoGlobal", cscRechitCluster3MuonVetoGlobal, &b_cscRechitCluster3MuonVetoGlobal);
   fChain->SetBranchAddress("cscRechitCluster3MuonVetoIso", cscRechitCluster3MuonVetoIso, &b_cscRechitCluster3MuonVetoIso);
   fChain->SetBranchAddress("cscRechitCluster3IsoMuonVetoPt", cscRechitCluster3IsoMuonVetoPt, &b_cscRechitCluster3IsoMuonVetoPt);
   fChain->SetBranchAddress("cscRechitCluster3IsoMuonVetoE", cscRechitCluster3IsoMuonVetoE, &b_cscRechitCluster3IsoMuonVetoE);
   fChain->SetBranchAddress("cscRechitCluster3IsoMuonVetoPhi", cscRechitCluster3IsoMuonVetoPhi, &b_cscRechitCluster3IsoMuonVetoPhi);
   fChain->SetBranchAddress("cscRechitCluster3IsoMuonVetoEta", cscRechitCluster3IsoMuonVetoEta, &b_cscRechitCluster3IsoMuonVetoEta);
   fChain->SetBranchAddress("cscRechitCluster3GenMuonVetoPt", cscRechitCluster3GenMuonVetoPt, &b_cscRechitCluster3GenMuonVetoPt);
   fChain->SetBranchAddress("cscRechitCluster3MuonVetoType", cscRechitCluster3MuonVetoType, &b_cscRechitCluster3MuonVetoType);
   fChain->SetBranchAddress("cscRechitCluster3Size", cscRechitCluster3Size, &b_cscRechitCluster3Size);
   fChain->SetBranchAddress("cscRechitCluster3Me11Ratio", cscRechitCluster3Me11Ratio, &b_cscRechitCluster3Me11Ratio);
   fChain->SetBranchAddress("cscRechitCluster3Me12Ratio", cscRechitCluster3Me12Ratio, &b_cscRechitCluster3Me12Ratio);
   fChain->SetBranchAddress("cscRechitCluster3NStation", cscRechitCluster3NStation, &b_cscRechitCluster3NStation);
   fChain->SetBranchAddress("cscRechitCluster3NStation5", cscRechitCluster3NStation5, &b_cscRechitCluster3NStation5);
   fChain->SetBranchAddress("cscRechitCluster3NStation10", cscRechitCluster3NStation10, &b_cscRechitCluster3NStation10);
   fChain->SetBranchAddress("cscRechitCluster3NStation10perc", cscRechitCluster3NStation10perc, &b_cscRechitCluster3NStation10perc);
   fChain->SetBranchAddress("cscRechitCluster3AvgStation", cscRechitCluster3AvgStation, &b_cscRechitCluster3AvgStation);
   fChain->SetBranchAddress("cscRechitCluster3AvgStation5", cscRechitCluster3AvgStation5, &b_cscRechitCluster3AvgStation5);
   fChain->SetBranchAddress("cscRechitCluster3AvgStation10", cscRechitCluster3AvgStation10, &b_cscRechitCluster3AvgStation10);
   fChain->SetBranchAddress("cscRechitCluster3AvgStation10perc", cscRechitCluster3AvgStation10perc, &b_cscRechitCluster3AvgStation10perc);
   fChain->SetBranchAddress("cscRechitCluster3MaxStation", cscRechitCluster3MaxStation, &b_cscRechitCluster3MaxStation);
   fChain->SetBranchAddress("cscRechitCluster3MaxStationRatio", cscRechitCluster3MaxStationRatio, &b_cscRechitCluster3MaxStationRatio);
   fChain->SetBranchAddress("cscRechitCluster3NChamber", cscRechitCluster3NChamber, &b_cscRechitCluster3NChamber);
   fChain->SetBranchAddress("cscRechitCluster3MaxChamber", cscRechitCluster3MaxChamber, &b_cscRechitCluster3MaxChamber);
   fChain->SetBranchAddress("cscRechitCluster3MaxChamberRatio", cscRechitCluster3MaxChamberRatio, &b_cscRechitCluster3MaxChamberRatio);
   fChain->SetBranchAddress("cscRechitCluster3NRechitChamberPlus11", cscRechitCluster3NRechitChamberPlus11, &b_cscRechitCluster3NRechitChamberPlus11);
   fChain->SetBranchAddress("cscRechitCluster3NRechitChamberPlus12", cscRechitCluster3NRechitChamberPlus12, &b_cscRechitCluster3NRechitChamberPlus12);
   fChain->SetBranchAddress("cscRechitCluster3NRechitChamberPlus13", cscRechitCluster3NRechitChamberPlus13, &b_cscRechitCluster3NRechitChamberPlus13);
   fChain->SetBranchAddress("cscRechitCluster3NRechitChamberPlus21", cscRechitCluster3NRechitChamberPlus21, &b_cscRechitCluster3NRechitChamberPlus21);
   fChain->SetBranchAddress("cscRechitCluster3NRechitChamberPlus22", cscRechitCluster3NRechitChamberPlus22, &b_cscRechitCluster3NRechitChamberPlus22);
   fChain->SetBranchAddress("cscRechitCluster3NRechitChamberPlus31", cscRechitCluster3NRechitChamberPlus31, &b_cscRechitCluster3NRechitChamberPlus31);
   fChain->SetBranchAddress("cscRechitCluster3NRechitChamberPlus32", cscRechitCluster3NRechitChamberPlus32, &b_cscRechitCluster3NRechitChamberPlus32);
   fChain->SetBranchAddress("cscRechitCluster3NRechitChamberPlus41", cscRechitCluster3NRechitChamberPlus41, &b_cscRechitCluster3NRechitChamberPlus41);
   fChain->SetBranchAddress("cscRechitCluster3NRechitChamberPlus42", cscRechitCluster3NRechitChamberPlus42, &b_cscRechitCluster3NRechitChamberPlus42);
   fChain->SetBranchAddress("cscRechitCluster3NRechitChamberMinus11", cscRechitCluster3NRechitChamberMinus11, &b_cscRechitCluster3NRechitChamberMinus11);
   fChain->SetBranchAddress("cscRechitCluster3NRechitChamberMinus12", cscRechitCluster3NRechitChamberMinus12, &b_cscRechitCluster3NRechitChamberMinus12);
   fChain->SetBranchAddress("cscRechitCluster3NRechitChamberMinus13", cscRechitCluster3NRechitChamberMinus13, &b_cscRechitCluster3NRechitChamberMinus13);
   fChain->SetBranchAddress("cscRechitCluster3NRechitChamberMinus21", cscRechitCluster3NRechitChamberMinus21, &b_cscRechitCluster3NRechitChamberMinus21);
   fChain->SetBranchAddress("cscRechitCluster3NRechitChamberMinus22", cscRechitCluster3NRechitChamberMinus22, &b_cscRechitCluster3NRechitChamberMinus22);
   fChain->SetBranchAddress("cscRechitCluster3NRechitChamberMinus31", cscRechitCluster3NRechitChamberMinus31, &b_cscRechitCluster3NRechitChamberMinus31);
   fChain->SetBranchAddress("cscRechitCluster3NRechitChamberMinus32", cscRechitCluster3NRechitChamberMinus32, &b_cscRechitCluster3NRechitChamberMinus32);
   fChain->SetBranchAddress("cscRechitCluster3NRechitChamberMinus41", cscRechitCluster3NRechitChamberMinus41, &b_cscRechitCluster3NRechitChamberMinus41);
   fChain->SetBranchAddress("cscRechitCluster3NRechitChamberMinus42", cscRechitCluster3NRechitChamberMinus42, &b_cscRechitCluster3NRechitChamberMinus42);
   fChain->SetBranchAddress("cscRechitCluster3Met_dPhi", cscRechitCluster3Met_dPhi, &b_cscRechitCluster3Met_dPhi);
   fChain->SetBranchAddress("cscRechitCluster3MetXYCorr_dPhi", cscRechitCluster3MetXYCorr_dPhi, &b_cscRechitCluster3MetXYCorr_dPhi);
   fChain->SetBranchAddress("cscRechitCluster3_match_cscRechits_0p4", cscRechitCluster3_match_cscRechits_0p4, &b_cscRechitCluster3_match_cscRechits_0p4);
   fChain->SetBranchAddress("cscRechitCluster3NLayersChamberPlus11", cscRechitCluster3NLayersChamberPlus11, &b_cscRechitCluster3NLayersChamberPlus11);
   fChain->SetBranchAddress("cscRechitCluster3NLayersChamberPlus12", cscRechitCluster3NLayersChamberPlus12, &b_cscRechitCluster3NLayersChamberPlus12);
   fChain->SetBranchAddress("cscRechitCluster3NLayersChamberPlus13", cscRechitCluster3NLayersChamberPlus13, &b_cscRechitCluster3NLayersChamberPlus13);
   fChain->SetBranchAddress("cscRechitCluster3NLayersChamberPlus21", cscRechitCluster3NLayersChamberPlus21, &b_cscRechitCluster3NLayersChamberPlus21);
   fChain->SetBranchAddress("cscRechitCluster3NLayersChamberPlus22", cscRechitCluster3NLayersChamberPlus22, &b_cscRechitCluster3NLayersChamberPlus22);
   fChain->SetBranchAddress("cscRechitCluster3NLayersChamberPlus31", cscRechitCluster3NLayersChamberPlus31, &b_cscRechitCluster3NLayersChamberPlus31);
   fChain->SetBranchAddress("cscRechitCluster3NLayersChamberPlus32", cscRechitCluster3NLayersChamberPlus32, &b_cscRechitCluster3NLayersChamberPlus32);
   fChain->SetBranchAddress("cscRechitCluster3NLayersChamberPlus41", cscRechitCluster3NLayersChamberPlus41, &b_cscRechitCluster3NLayersChamberPlus41);
   fChain->SetBranchAddress("cscRechitCluster3NLayersChamberPlus42", cscRechitCluster3NLayersChamberPlus42, &b_cscRechitCluster3NLayersChamberPlus42);
   fChain->SetBranchAddress("cscRechitCluster3NLayersChamberMinus11", cscRechitCluster3NLayersChamberMinus11, &b_cscRechitCluster3NLayersChamberMinus11);
   fChain->SetBranchAddress("cscRechitCluster3NLayersChamberMinus12", cscRechitCluster3NLayersChamberMinus12, &b_cscRechitCluster3NLayersChamberMinus12);
   fChain->SetBranchAddress("cscRechitCluster3NLayersChamberMinus13", cscRechitCluster3NLayersChamberMinus13, &b_cscRechitCluster3NLayersChamberMinus13);
   fChain->SetBranchAddress("cscRechitCluster3NLayersChamberMinus21", cscRechitCluster3NLayersChamberMinus21, &b_cscRechitCluster3NLayersChamberMinus21);
   fChain->SetBranchAddress("cscRechitCluster3NLayersChamberMinus22", cscRechitCluster3NLayersChamberMinus22, &b_cscRechitCluster3NLayersChamberMinus22);
   fChain->SetBranchAddress("cscRechitCluster3NLayersChamberMinus31", cscRechitCluster3NLayersChamberMinus31, &b_cscRechitCluster3NLayersChamberMinus31);
   fChain->SetBranchAddress("cscRechitCluster3NLayersChamberMinus32", cscRechitCluster3NLayersChamberMinus32, &b_cscRechitCluster3NLayersChamberMinus32);
   fChain->SetBranchAddress("cscRechitCluster3NLayersChamberMinus41", cscRechitCluster3NLayersChamberMinus41, &b_cscRechitCluster3NLayersChamberMinus41);
   fChain->SetBranchAddress("cscRechitCluster3NLayersChamberMinus42", cscRechitCluster3NLayersChamberMinus42, &b_cscRechitCluster3NLayersChamberMinus42);
   fChain->SetBranchAddress("cscRechitCluster3MetHEM_dPhi", cscRechitCluster3MetHEM_dPhi, &b_cscRechitCluster3MetHEM_dPhi);
   fChain->SetBranchAddress("cscRechitCluster3MetHEMXYCorr_dPhi", cscRechitCluster3MetHEMXYCorr_dPhi, &b_cscRechitCluster3MetHEMXYCorr_dPhi);
   fChain->SetBranchAddress("cscRechitCluster3MetEENoise_dPhi", cscRechitCluster3MetEENoise_dPhi, &b_cscRechitCluster3MetEENoise_dPhi);
   fChain->SetBranchAddress("cscRechitCluster3MetEENoiseXYCorr_dPhi", cscRechitCluster3MetEENoiseXYCorr_dPhi, &b_cscRechitCluster3MetEENoiseXYCorr_dPhi);
   fChain->SetBranchAddress("cscRechitCluster3MetJesUp_dPhi", cscRechitCluster3MetJesUp_dPhi, &b_cscRechitCluster3MetJesUp_dPhi);
   fChain->SetBranchAddress("cscRechitCluster3MetJesDown_dPhi", cscRechitCluster3MetJesDown_dPhi, &b_cscRechitCluster3MetJesDown_dPhi);
   fChain->SetBranchAddress("cscRechitCluster3_match_dtRechits_phi0p2", cscRechitCluster3_match_dtRechits_phi0p2, &b_cscRechitCluster3_match_dtRechits_phi0p2);
   fChain->SetBranchAddress("cscRechitCluster3_match_dtRechits_0p4", cscRechitCluster3_match_dtRechits_0p4, &b_cscRechitCluster3_match_dtRechits_0p4);
   fChain->SetBranchAddress("cscRechitCluster3_match_MB1_0p4", cscRechitCluster3_match_MB1_0p4, &b_cscRechitCluster3_match_MB1_0p4);
   fChain->SetBranchAddress("cscRechitCluster3_match_dtSeg_0p4", cscRechitCluster3_match_dtSeg_0p4, &b_cscRechitCluster3_match_dtSeg_0p4);
   fChain->SetBranchAddress("cscRechitCluster3_match_MB1Seg_0p4", cscRechitCluster3_match_MB1Seg_0p4, &b_cscRechitCluster3_match_MB1Seg_0p4);
   fChain->SetBranchAddress("cscRechitCluster3_match_RB1_0p4", cscRechitCluster3_match_RB1_0p4, &b_cscRechitCluster3_match_RB1_0p4);
   fChain->SetBranchAddress("cscRechitCluster3_match_RE12_0p4", cscRechitCluster3_match_RE12_0p4, &b_cscRechitCluster3_match_RE12_0p4);
   fChain->SetBranchAddress("cscRechitCluster3_match_cluster_dR", cscRechitCluster3_match_cluster_dR, &b_cscRechitCluster3_match_cluster_dR);
   fChain->SetBranchAddress("cscRechitCluster3_match_cluster_index", cscRechitCluster3_match_cluster_index, &b_cscRechitCluster3_match_cluster_index);
   fChain->SetBranchAddress("gLLP_multiplicity", gLLP_multiplicity, &b_gLLP_multiplicity);
   fChain->SetBranchAddress("gLLP_multiplicity20", gLLP_multiplicity20, &b_gLLP_multiplicity20);
   fChain->SetBranchAddress("gLLP_EM_multiplicity", gLLP_EM_multiplicity, &b_gLLP_EM_multiplicity);
   fChain->SetBranchAddress("gLLP_eta", gLLP_eta, &b_gLLP_eta);
   fChain->SetBranchAddress("gLLP_phi", gLLP_phi, &b_gLLP_phi);
   fChain->SetBranchAddress("gLLP_csc", gLLP_csc, &b_gLLP_csc);
   fChain->SetBranchAddress("gLLP_beta", gLLP_beta, &b_gLLP_beta);
   fChain->SetBranchAddress("gLLP_maxMatchedDis", gLLP_maxMatchedDis, &b_gLLP_maxMatchedDis);
   fChain->SetBranchAddress("gLLP_e", gLLP_e, &b_gLLP_e);
   fChain->SetBranchAddress("gLLP_pt", gLLP_pt, &b_gLLP_pt);
   fChain->SetBranchAddress("gLLP_lepdPhi", gLLP_lepdPhi, &b_gLLP_lepdPhi);
   fChain->SetBranchAddress("gLLP_daughterKaon", gLLP_daughterKaon, &b_gLLP_daughterKaon);
   fChain->SetBranchAddress("gLLP_ctau", gLLP_ctau, &b_gLLP_ctau);
   fChain->SetBranchAddress("gLLP_EMFracE", gLLP_EMFracE, &b_gLLP_EMFracE);
   fChain->SetBranchAddress("gLLP_EMFracEz", gLLP_EMFracEz, &b_gLLP_EMFracEz);
   fChain->SetBranchAddress("gLLP_EMFracP", gLLP_EMFracP, &b_gLLP_EMFracP);
   fChain->SetBranchAddress("gLLP_EMFracPz", gLLP_EMFracPz, &b_gLLP_EMFracPz);
   fChain->SetBranchAddress("gLLP_visE", gLLP_visE, &b_gLLP_visE);
   fChain->SetBranchAddress("gLLP_visE20", gLLP_visE20, &b_gLLP_visE20);
   fChain->SetBranchAddress("gLLP_visEz", gLLP_visEz, &b_gLLP_visEz);
   fChain->SetBranchAddress("gLLP_visP", gLLP_visP, &b_gLLP_visP);
   fChain->SetBranchAddress("gLLP_visPz", gLLP_visPz, &b_gLLP_visPz);
   fChain->SetBranchAddress("gLLP_decay_vertex_r", gLLP_decay_vertex_r, &b_gLLP_decay_vertex_r);
   fChain->SetBranchAddress("gLLP_decay_vertex_x", gLLP_decay_vertex_x, &b_gLLP_decay_vertex_x);
   fChain->SetBranchAddress("gLLP_decay_vertex_y", gLLP_decay_vertex_y, &b_gLLP_decay_vertex_y);
   fChain->SetBranchAddress("gLLP_decay_vertex_z", gLLP_decay_vertex_z, &b_gLLP_decay_vertex_z);
   fChain->SetBranchAddress("gLLP_deltaR", &gLLP_deltaR, &b_gLLP_deltaR);
   fChain->SetBranchAddress("gLLP_daughter_deltaR", gLLP_daughter_deltaR, &b_gLLP_daughter_deltaR);
   fChain->SetBranchAddress("gLLP_daughter_pt", gLLP_daughter_pt, &b_gLLP_daughter_pt);
   fChain->SetBranchAddress("gLLP_daughter_id", gLLP_daughter_id, &b_gLLP_daughter_id);
   fChain->SetBranchAddress("gLLP_daughter_eta", gLLP_daughter_eta, &b_gLLP_daughter_eta);
   fChain->SetBranchAddress("gLLP_daughter_phi", gLLP_daughter_phi, &b_gLLP_daughter_phi);
   fChain->SetBranchAddress("gLLP_daughter_e", gLLP_daughter_e, &b_gLLP_daughter_e);
   fChain->SetBranchAddress("gLLP_daughter_mass", gLLP_daughter_mass, &b_gLLP_daughter_mass);
   fChain->SetBranchAddress("nMuons", &nMuons, &b_nMuons);
   fChain->SetBranchAddress("muonPt", &muonPt, &b_muonPt);
   fChain->SetBranchAddress("muonEta", &muonEta, &b_muonEta);
   fChain->SetBranchAddress("muonPhi", &muonPhi, &b_muonPhi);
   fChain->SetBranchAddress("nLeptons", &nLeptons, &b_nLeptons);
   fChain->SetBranchAddress("lepE", lepE, &b_lepE);
   fChain->SetBranchAddress("lepPt", lepPt, &b_lepPt);
   fChain->SetBranchAddress("lepEta", lepEta, &b_lepEta);
   fChain->SetBranchAddress("lepPhi", lepPhi, &b_lepPhi);
   fChain->SetBranchAddress("lepPdgId", lepPdgId, &b_lepPdgId);
   fChain->SetBranchAddress("lepDZ", lepDZ, &b_lepDZ);
   fChain->SetBranchAddress("lepPassId", lepPassId, &b_lepPassId);
   fChain->SetBranchAddress("lepFromZ", lepFromZ, &b_lepFromZ);
   fChain->SetBranchAddress("lepEff", lepEff, &b_lepEff);
   fChain->SetBranchAddress("lepSF", lepSF, &b_lepSF);
   fChain->SetBranchAddress("lepTriggerSF", lepTriggerSF, &b_lepTriggerSF);
   fChain->SetBranchAddress("lepTightIdSF", lepTightIdSF, &b_lepTightIdSF);
   fChain->SetBranchAddress("lepLooseIdSF", lepLooseIdSF, &b_lepLooseIdSF);
   fChain->SetBranchAddress("lepTightIsoSF", lepTightIsoSF, &b_lepTightIsoSF);
   fChain->SetBranchAddress("lepLooseIsoSF", lepLooseIsoSF, &b_lepLooseIsoSF);
   fChain->SetBranchAddress("lepTag", lepTag, &b_lepTag);
   fChain->SetBranchAddress("lepPassLooseIso", lepPassLooseIso, &b_lepPassLooseIso);
   fChain->SetBranchAddress("lepPassTightIso", lepPassTightIso, &b_lepPassTightIso);
   fChain->SetBranchAddress("lepPassVTightIso", lepPassVTightIso, &b_lepPassVTightIso);
   fChain->SetBranchAddress("lepPassVVTightIso", lepPassVVTightIso, &b_lepPassVVTightIso);
   fChain->SetBranchAddress("MT", &MT, &b_MT);
   fChain->SetBranchAddress("ZMass1", &ZMass1, &b_ZMass1);
   fChain->SetBranchAddress("ZMass", &ZMass, &b_ZMass);
   fChain->SetBranchAddress("ZPt", &ZPt, &b_ZPt);
   fChain->SetBranchAddress("ZEta", &ZEta, &b_ZEta);
   fChain->SetBranchAddress("ZPhi", &ZPhi, &b_ZPhi);
   fChain->SetBranchAddress("ZleptonIndex1", &ZleptonIndex1, &b_ZleptonIndex1);
   fChain->SetBranchAddress("ZleptonIndex2", &ZleptonIndex2, &b_ZleptonIndex2);
   fChain->SetBranchAddress("nJets", &nJets, &b_nJets);
   fChain->SetBranchAddress("jetE", jetE, &b_jetE);
   fChain->SetBranchAddress("jetPt", jetPt, &b_jetPt);
   fChain->SetBranchAddress("jetEta", jetEta, &b_jetEta);
   fChain->SetBranchAddress("jetPhi", jetPhi, &b_jetPhi);
   fChain->SetBranchAddress("jetTime", jetTime, &b_jetTime);
   fChain->SetBranchAddress("jetPassId", jetPassId, &b_jetPassId);
   fChain->SetBranchAddress("jetPtJESUp", jetPtJESUp, &b_jetPtJESUp);
   fChain->SetBranchAddress("jetPtJESDown", jetPtJESDown, &b_jetPtJESDown);
   fChain->SetBranchAddress("jetEJESUp", jetEJESUp, &b_jetEJESUp);
   fChain->SetBranchAddress("jetEJESDown", jetEJESDown, &b_jetEJESDown);
   fChain->SetBranchAddress("JecUnc", JecUnc, &b_JecUnc);
   fChain->SetBranchAddress("jet_match_genJet_pt", jet_match_genJet_pt, &b_jet_match_genJet_pt);
   fChain->SetBranchAddress("jet_match_genJet_index", jet_match_genJet_index, &b_jet_match_genJet_index);
   fChain->SetBranchAddress("jet_match_genJet_minDeltaR", jet_match_genJet_minDeltaR, &b_jet_match_genJet_minDeltaR);
   fChain->SetBranchAddress("jetTightPassId", jetTightPassId, &b_jetTightPassId);
   fChain->SetBranchAddress("HLTDecision", HLTDecision, &b_HLTDecision);
   fChain->SetBranchAddress("METTrigger", &METTrigger, &b_METTrigger);
   fChain->SetBranchAddress("METNoMuTrigger", &METNoMuTrigger, &b_METNoMuTrigger);
   fChain->SetBranchAddress("jetMuonEnergyFraction", jetMuonEnergyFraction, &b_jetMuonEnergyFraction);
   fChain->SetBranchAddress("jetElectronEnergyFraction", jetElectronEnergyFraction, &b_jetElectronEnergyFraction);
   fChain->SetBranchAddress("jetPhotonEnergyFraction", jetPhotonEnergyFraction, &b_jetPhotonEnergyFraction);
   fChain->SetBranchAddress("jetChargedHadronEnergyFraction", jetChargedHadronEnergyFraction, &b_jetChargedHadronEnergyFraction);
   fChain->SetBranchAddress("jetNeutralHadronEnergyFraction", jetNeutralHadronEnergyFraction, &b_jetNeutralHadronEnergyFraction);
   Notify();
}

Bool_t MuonSystem::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void MuonSystem::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t MuonSystem::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef MuonSystem_cxx
