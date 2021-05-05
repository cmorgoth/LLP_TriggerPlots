//C++
#include <iostream>
#include <fstream>
#include <map>
#include <stdlib.h>
#include <utility>
//ROOT
#include <TFile.h>
#include <TTree.h>
#include <TGraph.h>
#include <TGraphErrors.h>
#include <TAxis.h>
#include <TCanvas.h>
#include <TStyle.h>
#include <TLatex.h>
#include <TLegend.h>

const float lumi = 5;
//Axis
const float axisTitleSize = 0.06;
const float axisTitleOffset = .8;

const float axisTitleSizeRatioX   = 0.18;
const float axisLabelSizeRatioX   = 0.12;
const float axisTitleOffsetRatioX = 0.94;

const float axisTitleSizeRatioY   = 0.15;
const float axisLabelSizeRatioY   = 0.108;
const float axisTitleOffsetRatioY = 0.32;

//Margins
const float leftMargin   = 0.12;
const float rightMargin  = 0.05;
const float topMargin    = 0.07;
const float bottomMargin = 0.12;

//CMS STANDARD
TString CMSText = "CMS";
//TString extraText   = "";
TString extraText   = "Preliminary";
//TString lumiText = "2.32 fb^{-1} (13 TeV)";
//TString lumiText = "35.9 fb^{-1} (13 TeV)";
//TString lumiText = "16.2 fb^{-1} (13 TeV)";
TString lumiText = "117 fb^{-1} (13 TeV)";

bool AddCMS( TCanvas* C );

int main(int argc, char** argv)
{
  std::ifstream ifs ("data/HNL_Delphi.csv", std::ifstream::in);
  double x_delphi[1000];
  double y_delphi[1000];
  int n_delphi = 0;
  if( ifs.is_open() ){
    while (ifs.good())
    {
      double x_tmp;
      double y_tmp;
      ifs >> x_tmp >> y_tmp;
      if( ifs.eof() ) break;
      x_delphi[n_delphi] = x_tmp;
      y_delphi[n_delphi] = y_tmp;
      n_delphi++;
    }
    ifs.close();//close file if open
  }
  else
  {
    std::cerr << "[WARNING] input file NOT found!" << std::endl;
  }

  //------------------------------
  //CHARM
  //------------------------------
  std::ifstream ifs1 ("data/HNL_Charm.csv", std::ifstream::in);
  double x_charm[1000];
  double y_charm[1000];
  int n_charm = 0;
  if( ifs1.is_open() ){
    while (ifs1.good())
    {
      double x_tmp;
      double y_tmp;
      ifs1 >> x_tmp >> y_tmp;
      if( ifs1.eof() ) break;
      x_charm[n_charm] = x_tmp;
      y_charm[n_charm] = y_tmp;
      n_charm++;
    }
    ifs1.close();//close file if open
  }
  else
  {
    std::cerr << "[WARNING] input file NOT found!" << std::endl;
  }

  //------------------------------
  //EXO-20-009
  //------------------------------
  std::ifstream ifs2 ("data/HNL_EXO_20_009.csv", std::ifstream::in);
  double x_exo_20_009[1000];
  double y_exo_20_009[1000];
  int n_exo_20_009 = 0;
  if( ifs2.is_open() ){
    while (ifs2.good())
    {
      double x_tmp;
      double y_tmp;
      ifs2 >> x_tmp >> y_tmp;
      if( ifs2.eof() ) break;
      x_exo_20_009[n_exo_20_009] = x_tmp;
      y_exo_20_009[n_exo_20_009] = y_tmp;
      n_exo_20_009++;
    }
    ifs2.close();//close file if open
  }
  else
  {
    std::cerr << "[WARNING] input file NOT found!" << std::endl;
  }

  const int n_ccs = 8;
  double x_ccs[n_ccs] =  {1.0, 2.0, 4.0, 5.0, 4.5, 4.0, 2.0, 1.0};
  double y_ccs[n_ccs] = {3e-5, 5e-6, 8e-7, 1e-6, 3e-6,8e-6, 5e-3, 1e-1};
  double y_ccs_v2[n_ccs];
  double csc_limit_scale = 10.0;
  for(int i = 0; i < n_ccs; i++)
  {
    if( i <= 3 ) y_ccs_v2[i] = y_ccs[i]/csc_limit_scale;
    else y_ccs_v2[i] = y_ccs[i]*csc_limit_scale;
  }

  TFile* out = new TFile("out_test.root", "recreate");
  TGraph* g_delphi = new TGraph(n_delphi, x_delphi, y_delphi);
  TGraph* g_charm  = new TGraph(n_charm, x_charm, y_charm);
  TGraph* g_exo_20_009  = new TGraph(n_exo_20_009, x_exo_20_009, y_exo_20_009);
  TGraph* g_ccs    = new TGraph(n_ccs, x_ccs, y_ccs);
  TGraph* g_ccs_v2 = new TGraph(n_ccs, x_ccs, y_ccs_v2);

  TCanvas* c = new TCanvas( "c", "c", 2119, 33, 800, 700 );
  c->SetHighLightColor(2);
  c->SetFillColor(0);
  c->SetBorderMode(0);
  c->SetBorderSize(2);
  c->SetLeftMargin( leftMargin );
  c->SetRightMargin( rightMargin );
  c->SetTopMargin( topMargin );
  c->SetBottomMargin( bottomMargin );
  c->SetFrameBorderMode(0);
  c->SetFrameBorderMode(0);
  c->SetLogy();
  c->SetLogx();

  gStyle->SetPaintTextFormat("4.3f");

  g_delphi->SetTitle("");
  g_delphi->GetXaxis()->SetTitleSize(0.05);
  g_delphi->GetXaxis()->SetLabelOffset( 0.003);
  g_delphi->GetXaxis()->SetTitleOffset( 0.95);
  g_delphi->GetXaxis()->SetTitle("m_{N} (GeV)");
  g_delphi->GetYaxis()->SetTitleSize(0.05);
  g_delphi->GetYaxis()->CenterTitle(kTRUE);
  //g_delphi->GetYaxis()->SetTitle("95% C.L. limit #sigma(pp#rightarrow #tilde{#chi}^{0}_{2} #tilde{#chi}^{0}_{2}) (pb)");
  g_delphi->GetYaxis()->SetTitle("|V_{eN}|^{2}");

  //g_delphi->GetYaxis()->SetRangeUser(0,15);
  g_delphi->GetYaxis()->SetRangeUser(0,15);

  g_delphi->SetMaximum(1.0);
  g_delphi->SetMinimum(1e-9); //HZ
  //g_delphi->SetMinimum(0.1-0.01); //HH
  //g_delphi->GetYaxis()->SetRangeUser(0,15);
  //g_delphi->GetXaxis()->SetRangeUser(150,400);
  //g_delphi->GetXaxis()->SetRangeUser(120,450);
  g_delphi->GetXaxis()->SetLimits(1e-1,100.0);
  g_delphi->SetLineWidth(3);
  //gTheory->SetLineStyle(2);
  g_delphi->SetLineColor(kRed);
  //CHARM
  g_charm->SetLineWidth(3);
  //gTheory->SetLineStyle(2);
  g_charm->SetLineColor(kGreen);
  //CHARM
  g_exo_20_009->SetLineWidth(3);
  //gTheory->SetLineStyle(2);
  g_exo_20_009->SetLineColor(kBlack);

  //CCS
  g_ccs->SetLineWidth(3);
  //gTheory->SetLineStyle(2);
  g_ccs->SetLineColor(kBlue);

  g_ccs_v2->SetLineWidth(3);
  g_ccs_v2->SetLineColor(kBlue);
  g_ccs_v2->SetLineStyle(2);

  g_delphi->Draw("AC");
  g_charm->Draw("C");
  g_exo_20_009->Draw("C");
  g_ccs->Draw("C");
  g_ccs_v2->Draw("C");

  AddCMS(c);
  c->SaveAs("HNL_Exclusion.pdf");
  c->SaveAs("HNL_Exclusion.C");
  return 0;
}

bool AddCMS( TCanvas* C )
{
  C->cd();
  float lumix = 0.955;
  float lumiy = 0.945;
  float lumifont = 42;

  float cmsx = 0.25;
  float cmsy = 0.94;
  float cmsTextFont   = 61;  // default is helvetic-bold
  float extrax = cmsx +0.20;
  float extray = cmsy;
  //float extrax = cmsx + 0.078;
  //float extray = cmsy - 0.04;
  float extraTextFont = 52;  // default is helvetica-italics
  // ratio of "CMS" and extra text size
  float extraOverCmsTextSize  = 0.76;
  float cmsSize = 0.06;
  TLatex latex;
  latex.SetNDC();
  latex.SetTextAngle(0);
  latex.SetTextColor(kBlack);
  float extraTextSize = extraOverCmsTextSize*cmsSize;
  latex.SetTextFont(lumifont);
  latex.SetTextAlign(31);
  latex.SetTextSize(cmsSize);
  latex.DrawLatex(lumix, lumiy,lumiText);

  latex.SetTextFont(cmsTextFont);
  latex.SetTextAlign(31);
  latex.SetTextSize(cmsSize);
  latex.DrawLatex(cmsx, cmsy, CMSText);

  latex.SetTextFont(extraTextFont);
  latex.SetTextAlign(31);
  latex.SetTextSize(extraTextSize);
  latex.DrawLatex(extrax, extray, extraText);
  return true;
};
