#include <iostream>
#include <TFile.h>
#include <TTree.h>
#include <TChain.h>
#include <CommandLineInput.hh>
#include <MuonSystem.hh>

int main(int argc, char** argv)
{
  //TFile* fin = new TFile("/Users/cmorgoth/Work/data/LLP/SignalSamplesCSC/ggH_HToSSTo4Tau_MH-125_MS-15_ctau-1000_137000pb_weighted.root", "READ");
  TChain* chain = new TChain("MuonSystem");
  //chain->Add("/Users/cmorgoth/Work/data/LLP/SignalSamplesCSC/ggH_HToSSTo4Tau_MH-125_MS-15_ctau-1000_137000pb_weighted.root");
  //chain->Add("/Users/cmorgoth/Work/data/LLP/SignalSamplesCSC/ggH_HToSSTo4Tau_MH-125_MS-15_ctau-100_137000pb_weighted.root");
  // chain->Add("/Users/cmorgoth/Work/data/LLP/SignalSamplesCSC/ggH_HToSSTo4Tau_MH-125_MS-15_ctau-1000_137000pb_weighted.root");
  // chain->Add("/Users/cmorgoth/Work/data/LLP/SignalSamplesCSC/ggH_HToSSTo4Tau_MH-125_MS-15_ctau-10000_137000pb_weighted.root");
  // chain->Add("/Users/cmorgoth/Work/data/LLP/SignalSamplesCSC/ggH_HToSSTo4Tau_MH-125_MS-15_ctau-100000_137000pb_weighted.root");

  // chain->Add("/Users/cmorgoth/Work/data/LLP/SignalSamplesCSC/ggH_HToSSTo4Tau_MH-125_MS-40_ctau-100_137000pb_weighted.root");
  // chain->Add("/Users/cmorgoth/Work/data/LLP/SignalSamplesCSC/ggH_HToSSTo4Tau_MH-125_MS-40_ctau-1000_137000pb_weighted.root");
  // chain->Add("/Users/cmorgoth/Work/data/LLP/SignalSamplesCSC/ggH_HToSSTo4Tau_MH-125_MS-40_ctau-10000_137000pb_weighted.root");
  // chain->Add("/Users/cmorgoth/Work/data/LLP/SignalSamplesCSC/ggH_HToSSTo4Tau_MH-125_MS-40_ctau-100000_137000pb_weighted.root");

  // chain->Add("/Users/cmorgoth/Work/data/LLP/SignalSamplesCSC/ggH_HToSSTo4Tau_MH-125_MS-7_ctau-100_137000pb_weighted.root");
  // chain->Add("/Users/cmorgoth/Work/data/LLP/SignalSamplesCSC/ggH_HToSSTo4Tau_MH-125_MS-7_ctau-1000_137000pb_weighted.root");
  // chain->Add("/Users/cmorgoth/Work/data/LLP/SignalSamplesCSC/ggH_HToSSTo4Tau_MH-125_MS-7_ctau-10000_137000pb_weighted.root");
  // chain->Add("/Users/cmorgoth/Work/data/LLP/SignalSamplesCSC/ggH_HToSSTo4Tau_MH-125_MS-7_ctau-100000_137000pb_weighted.root");

  chain->Add("/Users/cmorgoth/Work/data/LLP/SignalSamplesCSC/ggH_HToSSTo4Tau_MH-125_MS-55_ctau-100_137000pb_weighted.root");
  chain->Add("/Users/cmorgoth/Work/data/LLP/SignalSamplesCSC/ggH_HToSSTo4Tau_MH-125_MS-55_ctau-1000_137000pb_weighted.root");
  chain->Add("/Users/cmorgoth/Work/data/LLP/SignalSamplesCSC/ggH_HToSSTo4Tau_MH-125_MS-55_ctau-10000_137000pb_weighted.root");
  chain->Add("/Users/cmorgoth/Work/data/LLP/SignalSamplesCSC/ggH_HToSSTo4Tau_MH-125_MS-55_ctau-100000_137000pb_weighted.root");
  //TFile* fin = new TFile("/Users/cmorgoth/Work/data/LLP/SignalSamplesCSC/ggH_HToSSTo4Tau_MH-125_MS-15_ctau-10000_137000pb_weighted.root", "READ");
  //TTree* tree = (TTree*)fin->Get("MuonSystem");

  //MuonSystem* ms = new MuonSystem(tree);
  MuonSystem* ms = new MuonSystem(chain);
  ms->UnSetBranches();
  ms->SetAcceptanceBranches();
  ms->Loop();

  return 0;
}
