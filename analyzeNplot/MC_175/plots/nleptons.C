void nleptons()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan 15 21:35:53 2020) by ROOT version 6.14/09
   TCanvas *c = new TCanvas("c", "c",0,0,500,500);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLeftMargin(0);
   c->SetRightMargin(0);
   c->SetTopMargin(0);
   c->SetBottomMargin(0);
   c->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p1
   TPad *p1 = new TPad("p1", "p1",0,0,1,0.85);
   p1->Draw();
   p1->cd();
   p1->Range(-0.7228916,-26938.21,5.301205,197547.7);
   p1->SetFillColor(0);
   p1->SetBorderMode(0);
   p1->SetBorderSize(2);
   p1->SetGridx();
   p1->SetLeftMargin(0.12);
   p1->SetRightMargin(0.05);
   p1->SetTopMargin(0.01);
   p1->SetBottomMargin(0.12);
   p1->SetFrameBorderMode(0);
   p1->SetFrameBorderMode(0);
   
   TH1F *frame__21 = new TH1F("frame__21","t#bar{t}",5,0,5);
   frame__21->SetMinimum(0.1);
   frame__21->SetMaximum(195302.9);
   frame__21->SetEntries(45339);
   frame__21->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__21->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__21->SetMarkerColor(ci);
   frame__21->GetXaxis()->SetTitle("Lepton multiplicity");
   frame__21->GetXaxis()->SetLabelFont(42);
   frame__21->GetXaxis()->SetLabelSize(0.035);
   frame__21->GetXaxis()->SetTitleSize(0.035);
   frame__21->GetXaxis()->SetTitleFont(42);
   frame__21->GetYaxis()->SetTitle(" Events");
   frame__21->GetYaxis()->SetNoExponent();
   frame__21->GetYaxis()->SetLabelFont(42);
   frame__21->GetYaxis()->SetTitleSize(0.045);
   frame__21->GetYaxis()->SetTitleOffset(1.3);
   frame__21->GetYaxis()->SetTitleFont(42);
   frame__21->GetZaxis()->SetLabelFont(42);
   frame__21->GetZaxis()->SetLabelSize(0.035);
   frame__21->GetZaxis()->SetTitleSize(0.035);
   frame__21->GetZaxis()->SetTitleFont(42);
   frame__21->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_11 = new TH1F("mc_stack_11","mc",5,0,5);
   mc_stack_11->SetMinimum(0);
   mc_stack_11->SetMaximum(157744.6);
   mc_stack_11->SetDirectory(0);
   mc_stack_11->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_11->SetLineColor(ci);
   mc_stack_11->GetXaxis()->SetLabelFont(42);
   mc_stack_11->GetXaxis()->SetLabelSize(0.035);
   mc_stack_11->GetXaxis()->SetTitleSize(0.035);
   mc_stack_11->GetXaxis()->SetTitleFont(42);
   mc_stack_11->GetYaxis()->SetLabelFont(42);
   mc_stack_11->GetYaxis()->SetLabelSize(0.035);
   mc_stack_11->GetYaxis()->SetTitleSize(0.035);
   mc_stack_11->GetYaxis()->SetTitleOffset(0);
   mc_stack_11->GetYaxis()->SetTitleFont(42);
   mc_stack_11->GetZaxis()->SetLabelFont(42);
   mc_stack_11->GetZaxis()->SetLabelSize(0.035);
   mc_stack_11->GetZaxis()->SetTitleSize(0.035);
   mc_stack_11->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_11);
   
   
   TH1F *nleptons_t#bar{t}_stack_1 = new TH1F("nleptons_t#bar{t}_stack_1","t#bar{t}",5,0,5);
   nleptons_t#bar{t}_stack_1->SetBinContent(3,143273.1);
   nleptons_t#bar{t}_stack_1->SetBinError(3,744.3394);
   nleptons_t#bar{t}_stack_1->SetEntries(39651);
   nleptons_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   nleptons_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   nleptons_t#bar{t}_stack_1->SetMarkerColor(ci);
   nleptons_t#bar{t}_stack_1->GetXaxis()->SetTitle("Lepton multiplicity");
   nleptons_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   nleptons_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   nleptons_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   nleptons_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   nleptons_t#bar{t}_stack_1->GetYaxis()->SetTitle(" Events");
   nleptons_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   nleptons_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   nleptons_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   nleptons_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   nleptons_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   nleptons_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   nleptons_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   nleptons_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   nleptons_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(nleptons_t#bar{t}_stack_1,"hist");
   
   TH1F *nleptons_Diboson_stack_2 = new TH1F("nleptons_Diboson_stack_2","Diboson",5,0,5);
   nleptons_Diboson_stack_2->SetBinContent(3,182.1511);
   nleptons_Diboson_stack_2->SetBinError(3,8.427531);
   nleptons_Diboson_stack_2->SetEntries(511);
   nleptons_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   nleptons_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   nleptons_Diboson_stack_2->SetMarkerColor(ci);
   nleptons_Diboson_stack_2->GetXaxis()->SetTitle("Lepton multiplicity");
   nleptons_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   nleptons_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   nleptons_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   nleptons_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   nleptons_Diboson_stack_2->GetYaxis()->SetTitle(" Events");
   nleptons_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   nleptons_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   nleptons_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   nleptons_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   nleptons_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   nleptons_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   nleptons_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   nleptons_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   nleptons_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(nleptons_Diboson_stack_2,"hist");
   
   TH1F *nleptons_DY_stack_3 = new TH1F("nleptons_DY_stack_3","DY",5,0,5);
   nleptons_DY_stack_3->SetBinContent(3,339.3073);
   nleptons_DY_stack_3->SetBinError(3,76.46774);
   nleptons_DY_stack_3->SetEntries(21);
   nleptons_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   nleptons_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   nleptons_DY_stack_3->SetMarkerColor(ci);
   nleptons_DY_stack_3->GetXaxis()->SetTitle("Lepton multiplicity");
   nleptons_DY_stack_3->GetXaxis()->SetLabelFont(42);
   nleptons_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   nleptons_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   nleptons_DY_stack_3->GetXaxis()->SetTitleFont(42);
   nleptons_DY_stack_3->GetYaxis()->SetTitle(" Events");
   nleptons_DY_stack_3->GetYaxis()->SetLabelFont(42);
   nleptons_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   nleptons_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   nleptons_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   nleptons_DY_stack_3->GetYaxis()->SetTitleFont(42);
   nleptons_DY_stack_3->GetZaxis()->SetLabelFont(42);
   nleptons_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   nleptons_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   nleptons_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(nleptons_DY_stack_3,"hist");
   
   TH1F *nleptons_W_stack_4 = new TH1F("nleptons_W_stack_4","W",5,0,5);
   nleptons_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   nleptons_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   nleptons_W_stack_4->SetMarkerColor(ci);
   nleptons_W_stack_4->GetXaxis()->SetTitle("Lepton multiplicity");
   nleptons_W_stack_4->GetXaxis()->SetLabelFont(42);
   nleptons_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   nleptons_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   nleptons_W_stack_4->GetXaxis()->SetTitleFont(42);
   nleptons_W_stack_4->GetYaxis()->SetTitle(" Events");
   nleptons_W_stack_4->GetYaxis()->SetLabelFont(42);
   nleptons_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   nleptons_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   nleptons_W_stack_4->GetYaxis()->SetTitleOffset(0);
   nleptons_W_stack_4->GetYaxis()->SetTitleFont(42);
   nleptons_W_stack_4->GetZaxis()->SetLabelFont(42);
   nleptons_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   nleptons_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   nleptons_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(nleptons_W_stack_4,"hist");
   
   TH1F *nleptons_SinglesPtop_stack_5 = new TH1F("nleptons_SinglesPtop_stack_5","Single top",5,0,5);
   nleptons_SinglesPtop_stack_5->SetBinContent(3,6438.368);
   nleptons_SinglesPtop_stack_5->SetBinError(3,92.80948);
   nleptons_SinglesPtop_stack_5->SetEntries(5156);
   nleptons_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   nleptons_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   nleptons_SinglesPtop_stack_5->SetMarkerColor(ci);
   nleptons_SinglesPtop_stack_5->GetXaxis()->SetTitle("Lepton multiplicity");
   nleptons_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   nleptons_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   nleptons_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   nleptons_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   nleptons_SinglesPtop_stack_5->GetYaxis()->SetTitle(" Events");
   nleptons_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   nleptons_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   nleptons_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   nleptons_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   nleptons_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   nleptons_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   nleptons_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   nleptons_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   nleptons_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(nleptons_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_nleptons_fx3021[6] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   0};
   Double_t Graph_from_nleptons_fy3021[6] = {
   0,
   0,
   131120,
   0,
   0,
   0};
   Double_t Graph_from_nleptons_felx3021[6] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0};
   Double_t Graph_from_nleptons_fely3021[6] = {
   0,
   0,
   362.105,
   0,
   0,
   0};
   Double_t Graph_from_nleptons_fehx3021[6] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0};
   Double_t Graph_from_nleptons_fehy3021[6] = {
   1.841055,
   1.841055,
   362.105,
   1.841055,
   1.841055,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(6,Graph_from_nleptons_fx3021,Graph_from_nleptons_fy3021,Graph_from_nleptons_felx3021,Graph_from_nleptons_fehx3021,Graph_from_nleptons_fely3021,Graph_from_nleptons_fehy3021);
   grae->SetName("Graph_from_nleptons");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_nleptons3021 = new TH1F("Graph_Graph_from_nleptons3021","Data",100,0,5.5);
   Graph_Graph_from_nleptons3021->SetMinimum(0);
   Graph_Graph_from_nleptons3021->SetMaximum(144630.3);
   Graph_Graph_from_nleptons3021->SetDirectory(0);
   Graph_Graph_from_nleptons3021->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_nleptons3021->SetLineColor(ci);
   Graph_Graph_from_nleptons3021->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_nleptons3021->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_nleptons3021->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_nleptons3021->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_nleptons3021->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_nleptons3021->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_nleptons3021->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_nleptons3021->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_nleptons3021->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_nleptons3021->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_nleptons3021->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_nleptons3021->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_nleptons3021->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_nleptons3021);
   
   grae->Draw("p");
   
   TLegend *leg = new TLegend(0.45,0.815,0.98,0.925,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(43);
   leg->SetTextSize(16);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("Graph_from_nleptons","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("nleptons_t#bar{t}","t#bar{t}","f");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("nleptons_Diboson","Diboson","f");

   ci = TColor::GetColor("#ffff00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("nleptons_DY","DY","f");

   ci = TColor::GetColor("#33ccff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("nleptons_W","W","f");

   ci = TColor::GetColor("#3366ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("nleptons_Single top","Single top","f");

   ci = TColor::GetColor("#990099");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   leg->Draw();
   TLatex *   tex = new TLatex(0.18,0.95,"#bf{CMS} #it{Preliminary} 35.9 fb^{-1} (13 TeV)");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextFont(43);
   tex->SetTextSize(16);
   tex->SetLineWidth(2);
   tex->Draw();
   p1->Modified();
   c->cd();
  
// ------------>Primitives in pad: p2
   TPad *p2 = new TPad("p2", "p2",0,0.85,1,1);
   p2->Draw();
   p2->cd();
   p2->Range(-0.7228916,0.4485106,5.301205,1.597447);
   p2->SetFillColor(0);
   p2->SetBorderMode(0);
   p2->SetBorderSize(2);
   p2->SetGridx();
   p2->SetGridy();
   p2->SetLeftMargin(0.12);
   p2->SetRightMargin(0.05);
   p2->SetTopMargin(0.05);
   p2->SetBottomMargin(0.01);
   p2->SetFrameBorderMode(0);
   p2->SetFrameBorderMode(0);
   
   TH1F *ratioframe__22 = new TH1F("ratioframe__22","t#bar{t}",5,0,5);
   ratioframe__22->SetMinimum(0.46);
   ratioframe__22->SetMaximum(1.54);
   ratioframe__22->SetEntries(45339);

   ci = TColor::GetColor("#cc0000");
   ratioframe__22->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__22->SetMarkerColor(ci);
   ratioframe__22->GetXaxis()->SetTitle("Lepton multiplicity");
   ratioframe__22->GetXaxis()->SetLabelFont(42);
   ratioframe__22->GetXaxis()->SetLabelSize(0);
   ratioframe__22->GetXaxis()->SetTitleSize(0);
   ratioframe__22->GetXaxis()->SetTitleOffset(0);
   ratioframe__22->GetXaxis()->SetTitleFont(42);
   ratioframe__22->GetYaxis()->SetTitle("Data/MC");
   ratioframe__22->GetYaxis()->SetNoExponent();
   ratioframe__22->GetYaxis()->SetNdivisions(5);
   ratioframe__22->GetYaxis()->SetLabelFont(42);
   ratioframe__22->GetYaxis()->SetLabelSize(0.18);
   ratioframe__22->GetYaxis()->SetTitleSize(0.2);
   ratioframe__22->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__22->GetYaxis()->SetTitleFont(42);
   ratioframe__22->GetZaxis()->SetLabelFont(42);
   ratioframe__22->GetZaxis()->SetLabelSize(0.035);
   ratioframe__22->GetZaxis()->SetTitleSize(0.035);
   ratioframe__22->GetZaxis()->SetTitleFont(42);
   ratioframe__22->Draw("");
   
   Double_t Graph_from_ratio_fx3022[5] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5};
   Double_t Graph_from_ratio_fy3022[5] = {
   0,
   0,
   0.8727777,
   0,
   0};
   Double_t Graph_from_ratio_felx3022[5] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_ratio_fely3022[5] = {
   0,
   0,
   0.004999896,
   0,
   0};
   Double_t Graph_from_ratio_fehx3022[5] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_ratio_fehy3022[5] = {
   0,
   0,
   0.004999896,
   0,
   0};
   grae = new TGraphAsymmErrors(5,Graph_from_ratio_fx3022,Graph_from_ratio_fy3022,Graph_from_ratio_felx3022,Graph_from_ratio_fehx3022,Graph_from_ratio_fely3022,Graph_from_ratio_fehy3022);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3022 = new TH1F("Graph_Graph_from_ratio3022","Data",100,0,5.5);
   Graph_Graph_from_ratio3022->SetMinimum(0);
   Graph_Graph_from_ratio3022->SetMaximum(0.9655554);
   Graph_Graph_from_ratio3022->SetDirectory(0);
   Graph_Graph_from_ratio3022->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3022->SetLineColor(ci);
   Graph_Graph_from_ratio3022->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3022->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3022->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3022->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3022->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3022->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3022->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3022->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3022->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3022->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3022->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3022->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3022->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3022);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
