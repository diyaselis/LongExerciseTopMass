void lep0pt()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan 15 21:35:19 2020) by ROOT version 6.14/09
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
   p1->Range(-36.14458,-4221.312,265.0602,30957.12);
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
   
   TH1F *frame__15 = new TH1F("frame__15","t#bar{t}",25,0,250);
   frame__15->SetMinimum(0.1);
   frame__15->SetMaximum(30605.34);
   frame__15->SetEntries(32767);
   frame__15->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__15->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__15->SetMarkerColor(ci);
   frame__15->GetXaxis()->SetTitle("Leading Lepton Transverse Momentum");
   frame__15->GetXaxis()->SetLabelFont(42);
   frame__15->GetXaxis()->SetLabelSize(0.035);
   frame__15->GetXaxis()->SetTitleSize(0.035);
   frame__15->GetXaxis()->SetTitleFont(42);
   frame__15->GetYaxis()->SetTitle(" Events");
   frame__15->GetYaxis()->SetNoExponent();
   frame__15->GetYaxis()->SetLabelFont(42);
   frame__15->GetYaxis()->SetTitleSize(0.045);
   frame__15->GetYaxis()->SetTitleOffset(1.3);
   frame__15->GetYaxis()->SetTitleFont(42);
   frame__15->GetZaxis()->SetLabelFont(42);
   frame__15->GetZaxis()->SetLabelSize(0.035);
   frame__15->GetZaxis()->SetTitleSize(0.035);
   frame__15->GetZaxis()->SetTitleFont(42);
   frame__15->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_8 = new TH1F("mc_stack_8","mc",25,0,250);
   mc_stack_8->SetMinimum(-9.345868e-07);
   mc_stack_8->SetMaximum(24719.69);
   mc_stack_8->SetDirectory(0);
   mc_stack_8->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_8->SetLineColor(ci);
   mc_stack_8->GetXaxis()->SetLabelFont(42);
   mc_stack_8->GetXaxis()->SetLabelSize(0.035);
   mc_stack_8->GetXaxis()->SetTitleSize(0.035);
   mc_stack_8->GetXaxis()->SetTitleFont(42);
   mc_stack_8->GetYaxis()->SetLabelFont(42);
   mc_stack_8->GetYaxis()->SetLabelSize(0.035);
   mc_stack_8->GetYaxis()->SetTitleSize(0.035);
   mc_stack_8->GetYaxis()->SetTitleOffset(0);
   mc_stack_8->GetYaxis()->SetTitleFont(42);
   mc_stack_8->GetZaxis()->SetLabelFont(42);
   mc_stack_8->GetZaxis()->SetLabelSize(0.035);
   mc_stack_8->GetZaxis()->SetTitleSize(0.035);
   mc_stack_8->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_8);
   
   
   TH1F *lep0pt_t#bar{t}_stack_1 = new TH1F("lep0pt_t#bar{t}_stack_1","t#bar{t}",25,0,250);
   lep0pt_t#bar{t}_stack_1->SetBinContent(3,21441.49);
   lep0pt_t#bar{t}_stack_1->SetBinContent(4,22521.19);
   lep0pt_t#bar{t}_stack_1->SetBinContent(5,20912.85);
   lep0pt_t#bar{t}_stack_1->SetBinContent(6,16968.89);
   lep0pt_t#bar{t}_stack_1->SetBinContent(7,12923.89);
   lep0pt_t#bar{t}_stack_1->SetBinContent(8,9801.691);
   lep0pt_t#bar{t}_stack_1->SetBinContent(9,7316.345);
   lep0pt_t#bar{t}_stack_1->SetBinContent(10,5835.206);
   lep0pt_t#bar{t}_stack_1->SetBinContent(11,4404.959);
   lep0pt_t#bar{t}_stack_1->SetBinContent(12,3282.942);
   lep0pt_t#bar{t}_stack_1->SetBinContent(13,2313.812);
   lep0pt_t#bar{t}_stack_1->SetBinContent(14,1775.584);
   lep0pt_t#bar{t}_stack_1->SetBinContent(15,1331.609);
   lep0pt_t#bar{t}_stack_1->SetBinContent(16,964.2115);
   lep0pt_t#bar{t}_stack_1->SetBinContent(17,762.2607);
   lep0pt_t#bar{t}_stack_1->SetBinContent(18,516.4665);
   lep0pt_t#bar{t}_stack_1->SetBinContent(19,500.538);
   lep0pt_t#bar{t}_stack_1->SetBinContent(20,370.2109);
   lep0pt_t#bar{t}_stack_1->SetBinContent(21,278.7849);
   lep0pt_t#bar{t}_stack_1->SetBinContent(22,261.9543);
   lep0pt_t#bar{t}_stack_1->SetBinContent(23,164.6352);
   lep0pt_t#bar{t}_stack_1->SetBinContent(24,142.406);
   lep0pt_t#bar{t}_stack_1->SetBinContent(25,93.83549);
   lep0pt_t#bar{t}_stack_1->SetBinContent(26,435.8597);
   lep0pt_t#bar{t}_stack_1->SetBinError(3,335.1022);
   lep0pt_t#bar{t}_stack_1->SetBinError(4,344.9214);
   lep0pt_t#bar{t}_stack_1->SetBinError(5,333.5186);
   lep0pt_t#bar{t}_stack_1->SetBinError(6,300.7797);
   lep0pt_t#bar{t}_stack_1->SetBinError(7,262.7256);
   lep0pt_t#bar{t}_stack_1->SetBinError(8,229.1449);
   lep0pt_t#bar{t}_stack_1->SetBinError(9,197.0702);
   lep0pt_t#bar{t}_stack_1->SetBinError(10,179.8426);
   lep0pt_t#bar{t}_stack_1->SetBinError(11,155.6524);
   lep0pt_t#bar{t}_stack_1->SetBinError(12,134.4104);
   lep0pt_t#bar{t}_stack_1->SetBinError(13,112.4781);
   lep0pt_t#bar{t}_stack_1->SetBinError(14,98.68396);
   lep0pt_t#bar{t}_stack_1->SetBinError(15,86.25238);
   lep0pt_t#bar{t}_stack_1->SetBinError(16,72.9541);
   lep0pt_t#bar{t}_stack_1->SetBinError(17,64.49979);
   lep0pt_t#bar{t}_stack_1->SetBinError(18,53.69438);
   lep0pt_t#bar{t}_stack_1->SetBinError(19,52.48704);
   lep0pt_t#bar{t}_stack_1->SetBinError(20,45.52874);
   lep0pt_t#bar{t}_stack_1->SetBinError(21,38.90477);
   lep0pt_t#bar{t}_stack_1->SetBinError(22,38.03626);
   lep0pt_t#bar{t}_stack_1->SetBinError(23,30.57736);
   lep0pt_t#bar{t}_stack_1->SetBinError(24,28.06232);
   lep0pt_t#bar{t}_stack_1->SetBinError(25,22.78705);
   lep0pt_t#bar{t}_stack_1->SetBinError(26,48.55548);
   lep0pt_t#bar{t}_stack_1->SetEntries(27079);
   lep0pt_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   lep0pt_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   lep0pt_t#bar{t}_stack_1->SetMarkerColor(ci);
   lep0pt_t#bar{t}_stack_1->GetXaxis()->SetTitle("Leading Lepton Transverse Momentum");
   lep0pt_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   lep0pt_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   lep0pt_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   lep0pt_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   lep0pt_t#bar{t}_stack_1->GetYaxis()->SetTitle(" Events");
   lep0pt_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   lep0pt_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   lep0pt_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   lep0pt_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   lep0pt_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   lep0pt_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   lep0pt_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   lep0pt_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   lep0pt_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(lep0pt_t#bar{t}_stack_1,"hist");
   
   TH1F *lep0pt_Diboson_stack_2 = new TH1F("lep0pt_Diboson_stack_2","Diboson",25,0,250);
   lep0pt_Diboson_stack_2->SetBinContent(3,21.64077);
   lep0pt_Diboson_stack_2->SetBinContent(4,26.16635);
   lep0pt_Diboson_stack_2->SetBinContent(5,24.36737);
   lep0pt_Diboson_stack_2->SetBinContent(6,16.89673);
   lep0pt_Diboson_stack_2->SetBinContent(7,15.07165);
   lep0pt_Diboson_stack_2->SetBinContent(8,11.35742);
   lep0pt_Diboson_stack_2->SetBinContent(9,10.01801);
   lep0pt_Diboson_stack_2->SetBinContent(10,9.540356);
   lep0pt_Diboson_stack_2->SetBinContent(11,5.591259);
   lep0pt_Diboson_stack_2->SetBinContent(12,5.982188);
   lep0pt_Diboson_stack_2->SetBinContent(13,2.082091);
   lep0pt_Diboson_stack_2->SetBinContent(14,2.815073);
   lep0pt_Diboson_stack_2->SetBinContent(15,6.55256);
   lep0pt_Diboson_stack_2->SetBinContent(16,1.678292);
   lep0pt_Diboson_stack_2->SetBinContent(17,2.623035);
   lep0pt_Diboson_stack_2->SetBinContent(18,1.782654);
   lep0pt_Diboson_stack_2->SetBinContent(19,1.718006);
   lep0pt_Diboson_stack_2->SetBinContent(20,2.477329);
   lep0pt_Diboson_stack_2->SetBinContent(21,1.617348);
   lep0pt_Diboson_stack_2->SetBinContent(22,1.660728);
   lep0pt_Diboson_stack_2->SetBinContent(24,1.798748);
   lep0pt_Diboson_stack_2->SetBinContent(25,0.7823845);
   lep0pt_Diboson_stack_2->SetBinContent(26,7.930841);
   lep0pt_Diboson_stack_2->SetBinError(3,2.874821);
   lep0pt_Diboson_stack_2->SetBinError(4,3.128393);
   lep0pt_Diboson_stack_2->SetBinError(5,3.043494);
   lep0pt_Diboson_stack_2->SetBinError(6,2.538801);
   lep0pt_Diboson_stack_2->SetBinError(7,2.454769);
   lep0pt_Diboson_stack_2->SetBinError(8,2.109489);
   lep0pt_Diboson_stack_2->SetBinError(9,1.942823);
   lep0pt_Diboson_stack_2->SetBinError(10,1.980782);
   lep0pt_Diboson_stack_2->SetBinError(11,1.504608);
   lep0pt_Diboson_stack_2->SetBinError(12,1.545065);
   lep0pt_Diboson_stack_2->SetBinError(13,0.8860221);
   lep0pt_Diboson_stack_2->SetBinError(14,1.067853);
   lep0pt_Diboson_stack_2->SetBinError(15,1.603155);
   lep0pt_Diboson_stack_2->SetBinError(16,0.8352881);
   lep0pt_Diboson_stack_2->SetBinError(17,1.02735);
   lep0pt_Diboson_stack_2->SetBinError(18,0.8709895);
   lep0pt_Diboson_stack_2->SetBinError(19,0.8597774);
   lep0pt_Diboson_stack_2->SetBinError(20,1.015572);
   lep0pt_Diboson_stack_2->SetBinError(21,0.8102962);
   lep0pt_Diboson_stack_2->SetBinError(22,0.8312248);
   lep0pt_Diboson_stack_2->SetBinError(24,0.9003524);
   lep0pt_Diboson_stack_2->SetBinError(25,0.5533937);
   lep0pt_Diboson_stack_2->SetBinError(26,1.787816);
   lep0pt_Diboson_stack_2->SetEntries(511);
   lep0pt_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   lep0pt_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   lep0pt_Diboson_stack_2->SetMarkerColor(ci);
   lep0pt_Diboson_stack_2->GetXaxis()->SetTitle("Leading Lepton Transverse Momentum");
   lep0pt_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   lep0pt_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   lep0pt_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   lep0pt_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   lep0pt_Diboson_stack_2->GetYaxis()->SetTitle(" Events");
   lep0pt_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   lep0pt_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   lep0pt_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   lep0pt_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   lep0pt_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   lep0pt_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   lep0pt_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   lep0pt_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   lep0pt_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(lep0pt_Diboson_stack_2,"hist");
   
   TH1F *lep0pt_DY_stack_3 = new TH1F("lep0pt_DY_stack_3","DY",25,0,250);
   lep0pt_DY_stack_3->SetBinContent(3,218.3443);
   lep0pt_DY_stack_3->SetBinContent(4,35.34811);
   lep0pt_DY_stack_3->SetBinContent(5,17.90387);
   lep0pt_DY_stack_3->SetBinContent(7,9.033381);
   lep0pt_DY_stack_3->SetBinContent(8,16.81726);
   lep0pt_DY_stack_3->SetBinContent(10,20.71554);
   lep0pt_DY_stack_3->SetBinContent(17,0.3771112);
   lep0pt_DY_stack_3->SetBinContent(19,20.7678);
   lep0pt_DY_stack_3->SetBinError(3,60.63844);
   lep0pt_DY_stack_3->SetBinError(4,24.99494);
   lep0pt_DY_stack_3->SetBinError(5,17.90386);
   lep0pt_DY_stack_3->SetBinError(7,9.03338);
   lep0pt_DY_stack_3->SetBinError(8,16.81726);
   lep0pt_DY_stack_3->SetBinError(10,20.71554);
   lep0pt_DY_stack_3->SetBinError(17,0.3771112);
   lep0pt_DY_stack_3->SetBinError(19,20.7678);
   lep0pt_DY_stack_3->SetEntries(21);
   lep0pt_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   lep0pt_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   lep0pt_DY_stack_3->SetMarkerColor(ci);
   lep0pt_DY_stack_3->GetXaxis()->SetTitle("Leading Lepton Transverse Momentum");
   lep0pt_DY_stack_3->GetXaxis()->SetLabelFont(42);
   lep0pt_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   lep0pt_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   lep0pt_DY_stack_3->GetXaxis()->SetTitleFont(42);
   lep0pt_DY_stack_3->GetYaxis()->SetTitle(" Events");
   lep0pt_DY_stack_3->GetYaxis()->SetLabelFont(42);
   lep0pt_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   lep0pt_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   lep0pt_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   lep0pt_DY_stack_3->GetYaxis()->SetTitleFont(42);
   lep0pt_DY_stack_3->GetZaxis()->SetLabelFont(42);
   lep0pt_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   lep0pt_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   lep0pt_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(lep0pt_DY_stack_3,"hist");
   
   TH1F *lep0pt_W_stack_4 = new TH1F("lep0pt_W_stack_4","W",25,0,250);
   lep0pt_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   lep0pt_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   lep0pt_W_stack_4->SetMarkerColor(ci);
   lep0pt_W_stack_4->GetXaxis()->SetTitle("Leading Lepton Transverse Momentum");
   lep0pt_W_stack_4->GetXaxis()->SetLabelFont(42);
   lep0pt_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   lep0pt_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   lep0pt_W_stack_4->GetXaxis()->SetTitleFont(42);
   lep0pt_W_stack_4->GetYaxis()->SetTitle(" Events");
   lep0pt_W_stack_4->GetYaxis()->SetLabelFont(42);
   lep0pt_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   lep0pt_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   lep0pt_W_stack_4->GetYaxis()->SetTitleOffset(0);
   lep0pt_W_stack_4->GetYaxis()->SetTitleFont(42);
   lep0pt_W_stack_4->GetZaxis()->SetLabelFont(42);
   lep0pt_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   lep0pt_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   lep0pt_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(lep0pt_W_stack_4,"hist");
   
   TH1F *lep0pt_SinglesPtop_stack_5 = new TH1F("lep0pt_SinglesPtop_stack_5","Single top",25,0,250);
   lep0pt_SinglesPtop_stack_5->SetBinContent(3,824.687);
   lep0pt_SinglesPtop_stack_5->SetBinContent(4,959.8593);
   lep0pt_SinglesPtop_stack_5->SetBinContent(5,863.1464);
   lep0pt_SinglesPtop_stack_5->SetBinContent(6,730.0511);
   lep0pt_SinglesPtop_stack_5->SetBinContent(7,547.7768);
   lep0pt_SinglesPtop_stack_5->SetBinContent(8,481.7657);
   lep0pt_SinglesPtop_stack_5->SetBinContent(9,367.9721);
   lep0pt_SinglesPtop_stack_5->SetBinContent(10,266.4113);
   lep0pt_SinglesPtop_stack_5->SetBinContent(11,238.6671);
   lep0pt_SinglesPtop_stack_5->SetBinContent(12,211.6189);
   lep0pt_SinglesPtop_stack_5->SetBinContent(13,169.8385);
   lep0pt_SinglesPtop_stack_5->SetBinContent(14,142.5962);
   lep0pt_SinglesPtop_stack_5->SetBinContent(15,113.5316);
   lep0pt_SinglesPtop_stack_5->SetBinContent(16,85.87769);
   lep0pt_SinglesPtop_stack_5->SetBinContent(17,57.93166);
   lep0pt_SinglesPtop_stack_5->SetBinContent(18,57.96555);
   lep0pt_SinglesPtop_stack_5->SetBinContent(19,51.34457);
   lep0pt_SinglesPtop_stack_5->SetBinContent(20,23.1839);
   lep0pt_SinglesPtop_stack_5->SetBinContent(21,28.76873);
   lep0pt_SinglesPtop_stack_5->SetBinContent(22,26.5513);
   lep0pt_SinglesPtop_stack_5->SetBinContent(23,27.85304);
   lep0pt_SinglesPtop_stack_5->SetBinContent(24,31.74348);
   lep0pt_SinglesPtop_stack_5->SetBinContent(25,16.91513);
   lep0pt_SinglesPtop_stack_5->SetBinContent(26,112.3102);
   lep0pt_SinglesPtop_stack_5->SetBinError(3,32.71911);
   lep0pt_SinglesPtop_stack_5->SetBinError(4,35.65215);
   lep0pt_SinglesPtop_stack_5->SetBinError(5,33.95611);
   lep0pt_SinglesPtop_stack_5->SetBinError(6,31.20304);
   lep0pt_SinglesPtop_stack_5->SetBinError(7,26.87628);
   lep0pt_SinglesPtop_stack_5->SetBinError(8,25.44412);
   lep0pt_SinglesPtop_stack_5->SetBinError(9,22.21748);
   lep0pt_SinglesPtop_stack_5->SetBinError(10,19.17311);
   lep0pt_SinglesPtop_stack_5->SetBinError(11,18.10929);
   lep0pt_SinglesPtop_stack_5->SetBinError(12,17.08419);
   lep0pt_SinglesPtop_stack_5->SetBinError(13,15.28609);
   lep0pt_SinglesPtop_stack_5->SetBinError(14,13.92985);
   lep0pt_SinglesPtop_stack_5->SetBinError(15,12.45666);
   lep0pt_SinglesPtop_stack_5->SetBinError(16,10.89794);
   lep0pt_SinglesPtop_stack_5->SetBinError(17,8.943872);
   lep0pt_SinglesPtop_stack_5->SetBinError(18,8.870302);
   lep0pt_SinglesPtop_stack_5->SetBinError(19,8.407721);
   lep0pt_SinglesPtop_stack_5->SetBinError(20,5.566687);
   lep0pt_SinglesPtop_stack_5->SetBinError(21,6.196314);
   lep0pt_SinglesPtop_stack_5->SetBinError(22,5.993669);
   lep0pt_SinglesPtop_stack_5->SetBinError(23,6.156632);
   lep0pt_SinglesPtop_stack_5->SetBinError(24,6.594621);
   lep0pt_SinglesPtop_stack_5->SetBinError(25,4.742463);
   lep0pt_SinglesPtop_stack_5->SetBinError(26,12.42436);
   lep0pt_SinglesPtop_stack_5->SetEntries(5156);
   lep0pt_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   lep0pt_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   lep0pt_SinglesPtop_stack_5->SetMarkerColor(ci);
   lep0pt_SinglesPtop_stack_5->GetXaxis()->SetTitle("Leading Lepton Transverse Momentum");
   lep0pt_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   lep0pt_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   lep0pt_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   lep0pt_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   lep0pt_SinglesPtop_stack_5->GetYaxis()->SetTitle(" Events");
   lep0pt_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   lep0pt_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   lep0pt_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   lep0pt_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   lep0pt_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   lep0pt_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   lep0pt_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   lep0pt_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   lep0pt_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(lep0pt_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_lep0pt_fx3015[26] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   0};
   Double_t Graph_from_lep0pt_fy3015[26] = {
   0,
   0,
   20651,
   22982,
   20165,
   16636,
   12694,
   9616,
   7124,
   5367,
   4008,
   2807,
   2169,
   1582,
   1211,
   948,
   674,
   563,
   396,
   321,
   252,
   178,
   144,
   123,
   105,
   0};
   Double_t Graph_from_lep0pt_felx3015[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   0};
   Double_t Graph_from_lep0pt_fely3015[26] = {
   0,
   0,
   143.7046,
   151.5982,
   142.0035,
   128.9806,
   112.6677,
   98.06121,
   84.40379,
   73.25981,
   63.30877,
   52.98113,
   46.57252,
   39.77436,
   34.79943,
   30.78961,
   25.96151,
   23.72762,
   19.89975,
   17.91647,
   15.87451,
   13.3294,
   11.9863,
   11.07567,
   10.23082,
   0};
   Double_t Graph_from_lep0pt_fehx3015[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   0};
   Double_t Graph_from_lep0pt_fehy3015[26] = {
   1.841055,
   1.841055,
   143.7046,
   151.5982,
   142.0035,
   128.9806,
   112.6677,
   98.06121,
   84.40379,
   73.25981,
   63.30877,
   52.98113,
   46.57252,
   39.77436,
   34.79943,
   30.78961,
   25.96151,
   23.72762,
   19.89975,
   17.91647,
   15.87451,
   14.36698,
   13.02808,
   12.12087,
   11.27975,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,Graph_from_lep0pt_fx3015,Graph_from_lep0pt_fy3015,Graph_from_lep0pt_felx3015,Graph_from_lep0pt_fehx3015,Graph_from_lep0pt_fely3015,Graph_from_lep0pt_fehy3015);
   grae->SetName("Graph_from_lep0pt");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_lep0pt3015 = new TH1F("Graph_Graph_from_lep0pt3015","Data",100,0,275);
   Graph_Graph_from_lep0pt3015->SetMinimum(0);
   Graph_Graph_from_lep0pt3015->SetMaximum(25446.96);
   Graph_Graph_from_lep0pt3015->SetDirectory(0);
   Graph_Graph_from_lep0pt3015->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_lep0pt3015->SetLineColor(ci);
   Graph_Graph_from_lep0pt3015->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_lep0pt3015->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_lep0pt3015->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_lep0pt3015->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_lep0pt3015->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_lep0pt3015->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_lep0pt3015->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_lep0pt3015->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_lep0pt3015->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_lep0pt3015->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_lep0pt3015->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_lep0pt3015->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_lep0pt3015->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_lep0pt3015);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_lep0pt","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("lep0pt_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("lep0pt_Diboson","Diboson","f");

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
   entry=leg->AddEntry("lep0pt_DY","DY","f");

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
   entry=leg->AddEntry("lep0pt_W","W","f");

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
   entry=leg->AddEntry("lep0pt_Single top","Single top","f");

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
   p2->Range(-36.14458,0.4485106,265.0602,1.597447);
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
   
   TH1F *ratioframe__16 = new TH1F("ratioframe__16","t#bar{t}",25,0,250);
   ratioframe__16->SetMinimum(0.46);
   ratioframe__16->SetMaximum(1.54);
   ratioframe__16->SetEntries(32767);

   ci = TColor::GetColor("#cc0000");
   ratioframe__16->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__16->SetMarkerColor(ci);
   ratioframe__16->GetXaxis()->SetTitle("Leading Lepton Transverse Momentum");
   ratioframe__16->GetXaxis()->SetLabelFont(42);
   ratioframe__16->GetXaxis()->SetLabelSize(0);
   ratioframe__16->GetXaxis()->SetTitleSize(0);
   ratioframe__16->GetXaxis()->SetTitleOffset(0);
   ratioframe__16->GetXaxis()->SetTitleFont(42);
   ratioframe__16->GetYaxis()->SetTitle("Data/MC");
   ratioframe__16->GetYaxis()->SetNoExponent();
   ratioframe__16->GetYaxis()->SetNdivisions(5);
   ratioframe__16->GetYaxis()->SetLabelFont(42);
   ratioframe__16->GetYaxis()->SetLabelSize(0.18);
   ratioframe__16->GetYaxis()->SetTitleSize(0.2);
   ratioframe__16->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__16->GetYaxis()->SetTitleFont(42);
   ratioframe__16->GetZaxis()->SetLabelFont(42);
   ratioframe__16->GetZaxis()->SetLabelSize(0.035);
   ratioframe__16->GetZaxis()->SetTitleSize(0.035);
   ratioframe__16->GetZaxis()->SetTitleFont(42);
   ratioframe__16->Draw("");
   
   Double_t Graph_from_ratio_fx3016[25] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245};
   Double_t Graph_from_ratio_fy3016[25] = {
   0,
   0,
   0.9175711,
   0.9761893,
   0.9242255,
   0.9390466,
   0.9405906,
   0.9325391,
   0.925876,
   0.8752628,
   0.8620805,
   0.8018756,
   0.8725797,
   0.8235316,
   0.8341983,
   0.9013399,
   0.8187636,
   0.9770663,
   0.689453,
   0.8108679,
   0.8150831,
   0.6134413,
   0.7480977,
   0.6990693,
   0.9414254};
   Double_t Graph_from_ratio_felx3016[25] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t Graph_from_ratio_fely3016[25] = {
   0,
   0,
   0.01534034,
   0.01578898,
   0.01564029,
   0.01760521,
   0.02022157,
   0.02296774,
   0.02626562,
   0.02860138,
   0.03209023,
   0.0345328,
   0.04403286,
   0.04748009,
   0.05552752,
   0.06966674,
   0.07204524,
   0.1010631,
   0.07677378,
   0.1043048,
   0.1158779,
   0.09350896,
   0.1363135,
   0.1307815,
   0.2169329};
   Double_t Graph_from_ratio_fehx3016[25] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t Graph_from_ratio_fehy3016[25] = {
   0,
   0,
   0.01534034,
   0.01578898,
   0.01564029,
   0.01760521,
   0.02022157,
   0.02296774,
   0.02626562,
   0.02860138,
   0.03209023,
   0.0345328,
   0.04403286,
   0.04748009,
   0.05552752,
   0.06966674,
   0.07204524,
   0.1010631,
   0.07677378,
   0.1043048,
   0.1158779,
   0.09350896,
   0.1363135,
   0.1307815,
   0.2169329};
   grae = new TGraphAsymmErrors(25,Graph_from_ratio_fx3016,Graph_from_ratio_fy3016,Graph_from_ratio_felx3016,Graph_from_ratio_fehx3016,Graph_from_ratio_fely3016,Graph_from_ratio_fehy3016);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3016 = new TH1F("Graph_Graph_from_ratio3016","Data",100,0,275);
   Graph_Graph_from_ratio3016->SetMinimum(0);
   Graph_Graph_from_ratio3016->SetMaximum(1.274194);
   Graph_Graph_from_ratio3016->SetDirectory(0);
   Graph_Graph_from_ratio3016->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3016->SetLineColor(ci);
   Graph_Graph_from_ratio3016->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3016->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3016->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3016->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3016->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3016->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3016->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3016->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3016->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3016->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3016->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3016->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3016->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3016);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
