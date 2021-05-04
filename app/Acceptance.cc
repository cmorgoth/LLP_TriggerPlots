#include <iostream>
#include <TFile.h>
#include <TTree.h>
#include <CommandLineInput.hh>
#include <MuonSystem.hh>

int main(int argc, char** argv)
{
  //TFile* fin = new TFile("/Users/cmorgoth/Work/data/LLP/SignalSamplesCSC/ggH_HToSSTo4Tau_MH-125_MS-15_ctau-1000_137000pb_weighted.root", "READ");
  TFile* fin = new TFile("/Users/cmorgoth/Work/data/LLP/SignalSamplesCSC/ggH_HToSSTo4Tau_MH-125_MS-15_ctau-10000_137000pb_weighted.root", "READ");
  TTree* tree = (TTree*)fin->Get("MuonSystem");

  MuonSystem* ms = new MuonSystem(tree);
  ms->UnSetBranches();
  ms->SetAcceptanceBranches();
  ms->Loop();

  return 0;
}
