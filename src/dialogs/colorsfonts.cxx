// generated by Fast Light User Interface Designer (fluid) version 1.0110

#include "gettext.h"
#include "colorsfonts.h"
#include <config.h>
#include "fl_digi.h"
#include "configuration.h"
#include "Viewer.h"
#include <FL/Fl_Color_Chooser.H>
#include <FL/fl_show_colormap.H>

void selectColorsFonts() {
  if (!dlgColorFont)
    make_colorsfonts();
dlgColorFont->show();
}

static void choose_color(Fl_Color & c) {
  unsigned char r, g, b;
Fl::get_color(c, r, g, b);
if (fl_color_chooser("Font color", r, g, b))
    c = fl_rgb_color(r, g, b);
}

static void adjust_label(Fl_Widget* w) {
  w->labelcolor(fl_contrast(w->labelcolor(), w->color()));
}

static void cbRxFontBrowser(Fl_Widget*, void*) {
  Fl_Font font = font_browser->fontNumber();
    int size = font_browser->fontSize();
    Fl_Color color = font_browser->fontColor();

    RxText->textfont(font);
    RxText->textsize(size);
    RxText->textcolor(color);
    RxText->redraw();

    progdefaults.RxFontnbr = font;
    progdefaults.RxFontsize = size;
    progdefaults.RxFontcolor = color;

    ReceiveText->setFont(font);
    ReceiveText->setFontSize(size);
    ReceiveText->setFontColor(progdefaults.RxFontcolor, FTextBase::RECV);

    font_browser->hide();

    progdefaults.changed = true;
}

static void cbTxFontBrowser(Fl_Widget*, void*) {
  Fl_Font font = font_browser->fontNumber();
    int size = font_browser->fontSize();
    Fl_Color color = font_browser->fontColor();

    TxText->textfont(font);
    TxText->textsize(size);
    TxText->textcolor(color);
    TxText->redraw();

    progdefaults.TxFontnbr = font;
    progdefaults.TxFontsize = size;
    progdefaults.TxFontcolor = color;

    TransmitText->setFont(font);
    TransmitText->setFontSize(size);
    TransmitText->setFontColor(progdefaults.TxFontcolor, FTextBase::RECV);

    font_browser->hide();

    progdefaults.changed = true;
}

void cbWaterfallFontBrowser(Fl_Widget*, void*) {
  Fl_Font fnt = font_browser->fontNumber();
    int size = font_browser->fontSize();

    progdefaults.WaterfallFontnbr = fnt;
    progdefaults.WaterfallFontsize = size;
    progdefaults.changed = true;

    font_browser->hide();
}

void cbViewerFontBrowser(Fl_Widget*, void*) {
  progdefaults.ViewerFontnbr = font_browser->fontNumber();
    progdefaults.ViewerFontsize = font_browser->fontSize();
    initViewer();
    progdefaults.changed = true;

    font_browser->hide();
}

Fl_Double_Window *dlgColorFont=(Fl_Double_Window *)0;

Fl_Button *btnClrFntClose=(Fl_Button *)0;

static void cb_btnClrFntClose(Fl_Button* o, void*) {
  o->window()->hide();
}

Fl_Tabs *tabsColors=(Fl_Tabs *)0;

Fl_Box *FDdisplay=(Fl_Box *)0;

Fl_Button *btnBackgroundColor=(Fl_Button *)0;

static void cb_btnBackgroundColor(Fl_Button*, void*) {
  uchar r, g, b;
    r = progdefaults.FDbackground.R;
    g = progdefaults.FDbackground.G;
    b = progdefaults.FDbackground.B;

    if (!fl_color_chooser("Background", r, g, b))
        return;

    progdefaults.FDbackground.R = r;
    progdefaults.FDbackground.G = g;
    progdefaults.FDbackground.B = b;
    
    FDdisplay->color(fl_rgb_color(r,g,b));
    FDdisplay->redraw();
    
    if (qsoFreqDisp) {
        qsoFreqDisp->SetONOFFCOLOR(
          fl_rgb_color(	progdefaults.FDforeground.R,
                        progdefaults.FDforeground.G,
                        progdefaults.FDforeground.B),
          fl_rgb_color(	progdefaults.FDbackground.R,
                        progdefaults.FDbackground.G,
                        progdefaults.FDbackground.B));
        qsoFreqDisp->redraw();
    }

    progdefaults.changed = true;
}

Fl_Button *btnForegroundColor=(Fl_Button *)0;

static void cb_btnForegroundColor(Fl_Button*, void*) {
  uchar r, g, b;
    r = progdefaults.FDforeground.R;
    g = progdefaults.FDforeground.G;
    b = progdefaults.FDforeground.B;

    if (!fl_color_chooser("Foreground", r, g, b))
        return;

    progdefaults.FDforeground.R = r;
    progdefaults.FDforeground.G = g;
    progdefaults.FDforeground.B = b;
    
    FDdisplay->labelcolor(fl_rgb_color(r,g,b));
    FDdisplay->redraw();
    
    if (qsoFreqDisp) {
        qsoFreqDisp->SetONOFFCOLOR(
          fl_rgb_color(	progdefaults.FDforeground.R,
                        progdefaults.FDforeground.G,
                        progdefaults.FDforeground.B),
          fl_rgb_color(	progdefaults.FDbackground.R,
                        progdefaults.FDbackground.G,
                        progdefaults.FDbackground.B));
        qsoFreqDisp->redraw();
    }

    progdefaults.changed = true;
}

Fl_Button *btnFD_SystemColor=(Fl_Button *)0;

static void cb_btnFD_SystemColor(Fl_Button*, void*) {
  uchar r, g, b;
    Fl_Color clr = FL_BACKGROUND2_COLOR;

    Fl::get_color(clr, r, g, b);

    progdefaults.FDbackground.R = r;
    progdefaults.FDbackground.G = g;
    progdefaults.FDbackground.B = b;
   
    FDdisplay->color(clr);
    
    clr = FL_FOREGROUND_COLOR;
    Fl::get_color(clr, r, g, b);
    
    FDdisplay->labelcolor(clr);
    FDdisplay->redraw();
    
    progdefaults.FDforeground.R = r;
    progdefaults.FDforeground.G = g;
    progdefaults.FDforeground.B = b;

    if (qsoFreqDisp) {
        qsoFreqDisp->SetONOFFCOLOR(
          fl_rgb_color(	progdefaults.FDforeground.R,
                        progdefaults.FDforeground.G,
                        progdefaults.FDforeground.B),
          fl_rgb_color(	progdefaults.FDbackground.R,
                        progdefaults.FDbackground.G,
                        progdefaults.FDbackground.B));
        qsoFreqDisp->redraw();
    }
         
    progdefaults.changed = true;
}

Fl_Check_Button *btnUseGroupColors=(Fl_Check_Button *)0;

static void cb_btnUseGroupColors(Fl_Check_Button* o, void*) {
  progdefaults.useGroupColors = o->value();
    colorize_macros();
    progdefaults.changed = true;
}

Fl_Button *btnGroup1=(Fl_Button *)0;

static void cb_btnGroup1(Fl_Button* o, void*) {
  uchar r, g, b;
    r = progdefaults.btnGroup1.R;
    g = progdefaults.btnGroup1.G;
    b = progdefaults.btnGroup1.B;

    if (fl_color_chooser("Group 1", r, g, b) == 0)
        return;
    progdefaults.btnGroup1.R = r;
    progdefaults.btnGroup1.G = g;
    progdefaults.btnGroup1.B = b;
    o->color(fl_rgb_color(r,g,b));
    colorize_macros();
    
    progdefaults.changed = true;
}

Fl_Button *btnGroup2=(Fl_Button *)0;

static void cb_btnGroup2(Fl_Button* o, void*) {
  uchar r, g, b;
    r = progdefaults.btnGroup2.R;
    g = progdefaults.btnGroup2.G;
    b = progdefaults.btnGroup2.B;

    if (fl_color_chooser("Group 2", r, g, b) == 0)
        return;
    progdefaults.btnGroup2.R = r;
    progdefaults.btnGroup2.G = g;
    progdefaults.btnGroup2.B = b;
    o->color(fl_rgb_color(r,g,b));
    colorize_macros();

    progdefaults.changed = true;
}

Fl_Button *btnGroup3=(Fl_Button *)0;

static void cb_btnGroup3(Fl_Button* o, void*) {
  uchar r, g, b;
    r = progdefaults.btnGroup3.R;
    g = progdefaults.btnGroup3.G;
    b = progdefaults.btnGroup3.B;

    if (fl_color_chooser("Group 3", r, g, b) == 0)
        return;
    progdefaults.btnGroup3.R = r;
    progdefaults.btnGroup3.G = g;
    progdefaults.btnGroup3.B = b;
    o->color(fl_rgb_color(r,g,b));

    colorize_macros();
    progdefaults.changed = true;
}

Fl_Button *btnFkeyTextColor=(Fl_Button *)0;

static void cb_btnFkeyTextColor(Fl_Button* o, void*) {
  uchar r, g, b;
    r = progdefaults.btnFkeyTextColor.R;
    g = progdefaults.btnFkeyTextColor.G;
    b = progdefaults.btnFkeyTextColor.B;

    if (fl_color_chooser("Fkey Text", r, g, b) == 0)
        return;

    progdefaults.btnFkeyTextColor.R = r;
    progdefaults.btnFkeyTextColor.G = g;
    progdefaults.btnFkeyTextColor.B = b;
    o->color(fl_rgb_color(r,g,b));
    adjust_label(o);
    btnGroup1->labelcolor(fl_rgb_color(r,g,b));
    btnGroup2->labelcolor(fl_rgb_color(r,g,b));
    btnGroup3->labelcolor(fl_rgb_color(r,g,b));
    btnGroup1->redraw_label();
    btnGroup2->redraw_label();
    btnGroup3->redraw_label();
    progdefaults.changed = true;
    colorize_macros();
}

Fl_Button *btnFkeyDEfaults=(Fl_Button *)0;

static void cb_btnFkeyDEfaults(Fl_Button*, void*) {
  uchar r, g, b;
    Fl_Color clr;

    r = 80; g = 144; b = 144;
    clr = fl_rgb_color(r,g,b);
    btnGroup1->color(clr);
    progdefaults.btnGroup1.R = r;
    progdefaults.btnGroup1.G = g;
    progdefaults.btnGroup1.B = b;

    r = 144; g = 80; b = 80;
    clr = fl_rgb_color(r,g,b);
    btnGroup2->color(clr);
    progdefaults.btnGroup2.R = r;
    progdefaults.btnGroup2.G = g;
    progdefaults.btnGroup2.B = b;

    r = 80; g = 80; b = 144;
    clr = fl_rgb_color(r,g,b);
    btnGroup3->color(clr);
    progdefaults.btnGroup3.R = r;
    progdefaults.btnGroup3.G = g;
    progdefaults.btnGroup3.B = b;

    r = 255; g = 255; b = 255;
    clr = fl_rgb_color(r,g,b);
    btnFkeyTextColor->color(clr);
    btnFkeyTextColor->redraw_label();
    progdefaults.btnFkeyTextColor.R = r;
    progdefaults.btnFkeyTextColor.G = g;
    progdefaults.btnFkeyTextColor.B = b;

    btnGroup1->labelcolor(clr);
    btnGroup1->redraw_label();

    btnGroup2->labelcolor(clr);
    btnGroup2->redraw_label();

    btnGroup3->labelcolor(clr);
    btnGroup3->redraw_label();

    colorize_macros();

progdefaults.changed = true;
}

Fl_Input *RxText=(Fl_Input *)0;

Fl_Button *btnRxColor=(Fl_Button *)0;

static void cb_btnRxColor(Fl_Button*, void*) {
  uchar r, g, b;
    r = progdefaults.RxColor.R;
    g = progdefaults.RxColor.G;
    b = progdefaults.RxColor.B;

    if (!fl_color_chooser("Rx Color", r, g, b))
        return;

    progdefaults.RxColor.R = r;
    progdefaults.RxColor.G = g;
    progdefaults.RxColor.B = b;
    RxText->color(fl_rgb_color(r,g,b));
    ReceiveText->color(RxText->color());
    RxText->redraw();
    ReceiveText->redraw();

    progdefaults.changed = true;
}

Fl_Button *btnTxColor=(Fl_Button *)0;

static void cb_btnTxColor(Fl_Button*, void*) {
  uchar r, g, b;
    r = progdefaults.TxColor.R;
    g = progdefaults.TxColor.G;
    b = progdefaults.TxColor.B;

    if (!fl_color_chooser("Tx Color", r, g, b))
        return;

    progdefaults.TxColor.R = r;
    progdefaults.TxColor.G = g;
    progdefaults.TxColor.B = b;
    TxText->color(fl_rgb_color(r,g,b));
    TransmitText->color(TxText->color());
    TxText->redraw();
    TransmitText->redraw();

progdefaults.changed = true;
}

Fl_Input *TxText=(Fl_Input *)0;

Fl_Button *btnRxFont=(Fl_Button *)0;

static void cb_btnRxFont(Fl_Button*, void*) {
  font_browser->fontNumber(progdefaults.RxFontnbr);
    font_browser->fontSize(progdefaults.RxFontsize);
    font_browser->fontColor(progdefaults.RxFontcolor);
    font_browser->fontFilter(Font_Browser::ALL_TYPES);
    font_browser->callback(cbRxFontBrowser);
font_browser->show();
}

Fl_Button *btnTxFont=(Fl_Button *)0;

static void cb_btnTxFont(Fl_Button*, void*) {
  font_browser->fontNumber(progdefaults.TxFontnbr);
    font_browser->fontSize(progdefaults.TxFontsize);
    font_browser->fontColor(progdefaults.TxFontcolor);
    font_browser->fontFilter(Font_Browser::ALL_TYPES);
    font_browser->callback(cbTxFontBrowser);
    font_browser->show();
}

Fl_Button *btnXMIT=(Fl_Button *)0;

static void cb_btnXMIT(Fl_Button*, void*) {
  choose_color(progdefaults.XMITcolor);
    btnXMIT->color( progdefaults.XMITcolor );
    TransmitText->setFontColor(progdefaults.XMITcolor, FTextBase::XMIT);
    ReceiveText->setFontColor(progdefaults.XMITcolor, FTextBase::XMIT);

    progdefaults.changed = true;
}

Fl_Button *btnCTRL=(Fl_Button *)0;

static void cb_btnCTRL(Fl_Button*, void*) {
  choose_color(progdefaults.CTRLcolor);
    btnCTRL->color( progdefaults.CTRLcolor );
    TransmitText->setFontColor(progdefaults.CTRLcolor, FTextBase::CTRL);
    ReceiveText->setFontColor(progdefaults.CTRLcolor, FTextBase::CTRL);

    progdefaults.changed = true;
}

Fl_Button *btnSKIP=(Fl_Button *)0;

static void cb_btnSKIP(Fl_Button*, void*) {
  choose_color(progdefaults.SKIPcolor);
    btnSKIP->color( progdefaults.SKIPcolor );
    TransmitText->setFontColor(progdefaults.SKIPcolor, FTextBase::SKIP);
    ReceiveText->setFontColor(progdefaults.SKIPcolor, FTextBase::SKIP);

    progdefaults.changed = true;
}

Fl_Button *btnALTR=(Fl_Button *)0;

static void cb_btnALTR(Fl_Button*, void*) {
  choose_color(progdefaults.ALTRcolor);
    btnALTR->color( progdefaults.ALTRcolor );
    TransmitText->setFontColor(progdefaults.ALTRcolor, FTextBase::ALTR);
    ReceiveText->setFontColor(progdefaults.ALTRcolor, FTextBase::ALTR);

    progdefaults.changed = true;
}

Fl_Button *btnNoTextColor=(Fl_Button *)0;

static void cb_btnNoTextColor(Fl_Button*, void*) {
  uchar r, g, b;
    Fl_Color clr = FL_BACKGROUND2_COLOR;

    Fl::get_color(clr, r, g, b);

    progdefaults.TxFontcolor = FL_BLACK;
    progdefaults.RxFontcolor = FL_BLACK;
    progdefaults.XMITcolor = FL_RED;
    progdefaults.CTRLcolor = FL_DARK_GREEN;
    progdefaults.SKIPcolor = FL_BLUE;
    progdefaults.ALTRcolor = FL_DARK_MAGENTA;
    btnXMIT->color(progdefaults.XMITcolor);
    btnCTRL->color(progdefaults.CTRLcolor);
    btnSKIP->color(progdefaults.SKIPcolor);
    btnALTR->color(progdefaults.ALTRcolor);
    btnXMIT->redraw();
    btnCTRL->redraw();
    btnSKIP->redraw();
    btnALTR->redraw();

    progdefaults.RxColor.R = r;
    progdefaults.RxColor.G = g;
    progdefaults.RxColor.B = b;

    clr = fl_rgb_color(r,g,b);
    RxText->color(clr);
    RxText->textcolor(progdefaults.RxFontcolor);
    RxText->redraw();

    ReceiveText->color(clr);
    ReceiveText->setFontColor(progdefaults.RxFontcolor, FTextBase::RECV);
    ReceiveText->setFontColor(progdefaults.XMITcolor, FTextBase::XMIT);
    ReceiveText->setFontColor(progdefaults.CTRLcolor, FTextBase::CTRL);
    ReceiveText->setFontColor(progdefaults.SKIPcolor, FTextBase::SKIP);
    ReceiveText->setFontColor(progdefaults.ALTRcolor, FTextBase::ALTR);
    ReceiveText->redraw();

    progdefaults.TxColor.R = r;
    progdefaults.TxColor.G = g;
    progdefaults.TxColor.B = b;

    TxText->color(clr);
    TxText->textcolor(progdefaults.TxFontcolor);
    TxText->redraw();

    TransmitText->color(clr);
    TransmitText->setFontColor(progdefaults.TxFontcolor, FTextBase::RECV);
    TransmitText->setFontColor(progdefaults.XMITcolor, FTextBase::XMIT);
    TransmitText->setFontColor(progdefaults.CTRLcolor, FTextBase::CTRL);
    TransmitText->setFontColor(progdefaults.SKIPcolor, FTextBase::SKIP);
    TransmitText->setFontColor(progdefaults.ALTRcolor, FTextBase::ALTR);
    TransmitText->redraw();

    progdefaults.changed = true;
}

Fl_Button *btnTextDefaults=(Fl_Button *)0;

static void cb_btnTextDefaults(Fl_Button*, void*) {
  uchar r, g, b;
    Fl_Color clr;

    progdefaults.TxFontcolor = FL_BLACK;
    progdefaults.RxFontcolor = FL_BLACK;
    progdefaults.XMITcolor = FL_RED;
    progdefaults.CTRLcolor = FL_DARK_GREEN;
    progdefaults.SKIPcolor = FL_BLUE;
    progdefaults.ALTRcolor = FL_DARK_MAGENTA;
    btnXMIT->color(progdefaults.XMITcolor);
    btnCTRL->color(progdefaults.CTRLcolor);
    btnSKIP->color(progdefaults.SKIPcolor);
    btnALTR->color(progdefaults.ALTRcolor);
    btnXMIT->redraw();
    btnCTRL->redraw();
    btnSKIP->redraw();
    btnALTR->redraw();

    r = 255; g = 242; b = 190;
    progdefaults.RxColor.R = r;
    progdefaults.RxColor.G = g;
    progdefaults.RxColor.B = b;

    clr = fl_rgb_color(r,g,b);
    RxText->color(clr);
    RxText->textcolor(progdefaults.RxFontcolor);
    RxText->redraw();

    ReceiveText->color(clr);
    ReceiveText->setFontColor(progdefaults.RxFontcolor, FTextBase::RECV);
    ReceiveText->setFontColor(progdefaults.XMITcolor, FTextBase::XMIT);
    ReceiveText->setFontColor(progdefaults.CTRLcolor, FTextBase::CTRL);
    ReceiveText->setFontColor(progdefaults.SKIPcolor, FTextBase::SKIP);
    ReceiveText->setFontColor(progdefaults.ALTRcolor, FTextBase::ALTR);
    ReceiveText->redraw();

    r = 200; g = 235; b = 255;
    progdefaults.TxColor.R = r;
    progdefaults.TxColor.G = g;
    progdefaults.TxColor.B = b;

    clr = fl_rgb_color(r,g,b);
    TxText->color(clr);
    TxText->textcolor(progdefaults.TxFontcolor);
    TxText->redraw();

    TransmitText->color(clr);
    TransmitText->setFontColor(progdefaults.TxFontcolor, FTextBase::RECV);
    TransmitText->setFontColor(progdefaults.XMITcolor, FTextBase::XMIT);
    TransmitText->setFontColor(progdefaults.CTRLcolor, FTextBase::CTRL);
    TransmitText->setFontColor(progdefaults.SKIPcolor, FTextBase::SKIP);
    TransmitText->setFontColor(progdefaults.ALTRcolor, FTextBase::ALTR);
    TransmitText->redraw();

    progdefaults.changed = true;
}

Fl_Button *btnTabColor=(Fl_Button *)0;

static void cb_btnTabColor(Fl_Button*, void*) {
  progdefaults.TabsColor = fl_show_colormap(progdefaults.TabsColor);
setTabColors();
progdefaults.changed = true;
}

Fl_Button *btnTabDefaultColor=(Fl_Button *)0;

static void cb_btnTabDefaultColor(Fl_Button*, void*) {
  progdefaults.TabsColor = FL_BACKGROUND2_COLOR;
setTabColors();    
progdefaults.changed = true;
}

Fl_Button *btnSpotColor=(Fl_Button *)0;

static void cb_btnSpotColor(Fl_Button*, void*) {
  progdefaults.SpotColor = fl_show_colormap(progdefaults.SpotColor);
spotcolor->color(progdefaults.SpotColor);
spotcolor->redraw();
spot_selection_color();
progdefaults.changed = true;
}

Fl_Button *btnRxIDColor=(Fl_Button *)0;

static void cb_btnRxIDColor(Fl_Button*, void*) {
  progdefaults.RxIDColor = fl_show_colormap(progdefaults.RxIDColor);
rxidcolor->color(progdefaults.RxIDColor);
rxidcolor->redraw();
rxid_selection_color();
progdefaults.changed = true;
}

Fl_Button *btnTxIDColor=(Fl_Button *)0;

static void cb_btnTxIDColor(Fl_Button*, void*) {
  progdefaults.TxIDColor = fl_show_colormap(progdefaults.TxIDColor);
txidcolor->color(progdefaults.TxIDColor);
txidcolor->redraw();
txid_selection_color();
progdefaults.changed = true;
}

Fl_Button *btnTuneColor=(Fl_Button *)0;

static void cb_btnTuneColor(Fl_Button*, void*) {
  progdefaults.TuneColor = fl_show_colormap(progdefaults.TuneColor);
tunecolor->color(progdefaults.TuneColor);
tunecolor->redraw();
tune_selection_color();
progdefaults.changed = true;
}

Fl_Button *btnLkColor=(Fl_Button *)0;

static void cb_btnLkColor(Fl_Button*, void*) {
  progdefaults.LkColor = fl_show_colormap(progdefaults.LkColor);
lockcolor->color(progdefaults.LkColor);
lockcolor->redraw();
xmtlock_selection_color();
progdefaults.changed = true;
}

Fl_Button *btnRevColor=(Fl_Button *)0;

static void cb_btnRevColor(Fl_Button*, void*) {
  progdefaults.RevColor = fl_show_colormap(progdefaults.RevColor);
revcolor->color(progdefaults.RevColor);
revcolor->redraw();
rev_selection_color();
progdefaults.changed = true;
}

Fl_Button *btnXmtColor=(Fl_Button *)0;

static void cb_btnXmtColor(Fl_Button*, void*) {
  progdefaults.XmtColor = fl_show_colormap(progdefaults.XmtColor);
xmtcolor->color(progdefaults.XmtColor);
xmtcolor->redraw();
xmtrcv_selection_color();
progdefaults.changed = true;
}

Fl_Button *btnAfcColor=(Fl_Button *)0;

static void cb_btnAfcColor(Fl_Button*, void*) {
  progdefaults.AfcColor = fl_show_colormap(progdefaults.AfcColor);
afccolor->color(progdefaults.AfcColor);
afccolor->redraw();
afc_selection_color();
progdefaults.changed = true;
}

Fl_Button *btnSql1Color=(Fl_Button *)0;

static void cb_btnSql1Color(Fl_Button*, void*) {
  progdefaults.Sql1Color = fl_show_colormap(progdefaults.Sql1Color);
sql1color->color(progdefaults.Sql1Color);
sql1color->redraw();
sql_selection_color();
progdefaults.changed = true;
}

Fl_Button *btnSql2Color=(Fl_Button *)0;

static void cb_btnSql2Color(Fl_Button*, void*) {
  progdefaults.Sql2Color = fl_show_colormap(progdefaults.Sql2Color);
sql2color->color(progdefaults.Sql2Color);
sql2color->redraw();
sql_selection_color();
progdefaults.changed = true;
}

Fl_Box *spotcolor=(Fl_Box *)0;

Fl_Box *rxidcolor=(Fl_Box *)0;

Fl_Box *txidcolor=(Fl_Box *)0;

Fl_Box *tunecolor=(Fl_Box *)0;

Fl_Box *lockcolor=(Fl_Box *)0;

Fl_Box *revcolor=(Fl_Box *)0;

Fl_Box *xmtcolor=(Fl_Box *)0;

Fl_Box *afccolor=(Fl_Box *)0;

Fl_Box *sql1color=(Fl_Box *)0;

Fl_Box *sql2color=(Fl_Box *)0;

Fl_Double_Window* make_colorsfonts() {
  font_browser = new Font_Browser;
  { dlgColorFont = new Fl_Double_Window(375, 220, _("Colors and Fonts"));
    { btnClrFntClose = new Fl_Button(296, 190, 75, 25, _("Close"));
      btnClrFntClose->callback((Fl_Callback*)cb_btnClrFntClose);
    } // Fl_Button* btnClrFntClose
    { tabsColors = new Fl_Tabs(0, 5, 375, 185);
      { Fl_Group* o = new Fl_Group(5, 30, 365, 150, _("Freq Disp"));
        { Fl_Box* o = FDdisplay = new Fl_Box(100, 45, 45, 67, _("8"));
          FDdisplay->box(FL_DOWN_BOX);
          FDdisplay->color((Fl_Color)55);
          FDdisplay->labelfont(4);
          FDdisplay->labelsize(48);
          o->color(fl_rgb_color(progdefaults.FDbackground.R,progdefaults.FDbackground.G,progdefaults.FDbackground.B));
          o->labelcolor(fl_rgb_color(progdefaults.FDforeground.R,progdefaults.FDforeground.G,progdefaults.FDforeground.B));
        } // Fl_Box* FDdisplay
        { btnBackgroundColor = new Fl_Button(165, 45, 100, 30, _("Background"));
          btnBackgroundColor->callback((Fl_Callback*)cb_btnBackgroundColor);
        } // Fl_Button* btnBackgroundColor
        { btnForegroundColor = new Fl_Button(165, 85, 100, 30, _("Foreground"));
          btnForegroundColor->callback((Fl_Callback*)cb_btnForegroundColor);
        } // Fl_Button* btnForegroundColor
        { btnFD_SystemColor = new Fl_Button(165, 125, 100, 30, _("System"));
          btnFD_SystemColor->callback((Fl_Callback*)cb_btnFD_SystemColor);
        } // Fl_Button* btnFD_SystemColor
        o->end();
      } // Fl_Group* o
      { Fl_Group* o = new Fl_Group(5, 30, 365, 150, _("Func keys"));
        o->hide();
        { btnUseGroupColors = new Fl_Check_Button(10, 40, 165, 20, _("Use colored buttons"));
          btnUseGroupColors->down_box(FL_DOWN_BOX);
          btnUseGroupColors->callback((Fl_Callback*)cb_btnUseGroupColors);
          btnUseGroupColors->value(progdefaults.useGroupColors);
        } // Fl_Check_Button* btnUseGroupColors
        { btnGroup1 = new Fl_Button(10, 70, 75, 20, _("Group 1"));
          btnGroup1->tooltip(_("Background color for Function key group 1"));
          btnGroup1->callback((Fl_Callback*)cb_btnGroup1);
          btnGroup1->color(fl_rgb_color(progdefaults.btnGroup1.R, progdefaults.btnGroup1.G,progdefaults.btnGroup1.B));
          btnGroup1->labelcolor(fl_rgb_color(progdefaults.btnFkeyTextColor.R, progdefaults.btnFkeyTextColor.R, progdefaults.btnFkeyTextColor.R));
        } // Fl_Button* btnGroup1
        { btnGroup2 = new Fl_Button(101, 70, 75, 20, _("Group 2"));
          btnGroup2->tooltip(_("Background color for Function key group 2"));
          btnGroup2->callback((Fl_Callback*)cb_btnGroup2);
          btnGroup2->color(fl_rgb_color(progdefaults.btnGroup2.R, progdefaults.btnGroup2.G,progdefaults.btnGroup2.B));
          btnGroup2->labelcolor(fl_rgb_color(progdefaults.btnFkeyTextColor.R, progdefaults.btnFkeyTextColor.R, progdefaults.btnFkeyTextColor.R));
        } // Fl_Button* btnGroup2
        { btnGroup3 = new Fl_Button(193, 70, 75, 20, _("Group 3"));
          btnGroup3->tooltip(_("Background color for Function key group 3"));
          btnGroup3->callback((Fl_Callback*)cb_btnGroup3);
          btnGroup3->color(fl_rgb_color(progdefaults.btnGroup3.R, progdefaults.btnGroup3.G,progdefaults.btnGroup3.B));
          btnGroup3->labelcolor(fl_rgb_color(progdefaults.btnFkeyTextColor.R, progdefaults.btnFkeyTextColor.R, progdefaults.btnFkeyTextColor.R));
        } // Fl_Button* btnGroup3
        { btnFkeyTextColor = new Fl_Button(193, 40, 75, 20, _("Label text"));
          btnFkeyTextColor->callback((Fl_Callback*)cb_btnFkeyTextColor);
          btnFkeyTextColor->color(fl_rgb_color(progdefaults.btnFkeyTextColor.R, progdefaults.btnFkeyTextColor.G, progdefaults.btnFkeyTextColor.B));
          adjust_label(btnFkeyTextColor);
        } // Fl_Button* btnFkeyTextColor
        { btnFkeyDEfaults = new Fl_Button(285, 70, 75, 20, _("Defaults"));
          btnFkeyDEfaults->callback((Fl_Callback*)cb_btnFkeyDEfaults);
        } // Fl_Button* btnFkeyDEfaults
        o->end();
      } // Fl_Group* o
      { Fl_Group* o = new Fl_Group(5, 30, 365, 150, _("Rx/Tx txt"));
        o->hide();
        { RxText = new Fl_Input(15, 43, 165, 35);
          RxText->value("Receive Text");
          RxText->color(fl_rgb_color(progdefaults.RxColor.R, progdefaults.RxColor.G, progdefaults.RxColor.B));
          RxText->textfont(progdefaults.RxFontnbr); RxText->textsize(progdefaults.RxFontsize); RxText->textcolor(progdefaults.RxFontcolor);
          RxText->type(FL_MULTILINE_INPUT_WRAP);
        } // Fl_Input* RxText
        { btnRxColor = new Fl_Button(190, 50, 75, 20, _("Rx bkgnd"));
          btnRxColor->callback((Fl_Callback*)cb_btnRxColor);
        } // Fl_Button* btnRxColor
        { btnTxColor = new Fl_Button(190, 90, 75, 20, _("Tx bkgnd"));
          btnTxColor->callback((Fl_Callback*)cb_btnTxColor);
        } // Fl_Button* btnTxColor
        { TxText = new Fl_Input(15, 85, 165, 35);
          TxText->value("Transmit Text");
          TxText->color(fl_rgb_color(progdefaults.TxColor.R, progdefaults.TxColor.G, progdefaults.TxColor.B));
          TxText->textfont(progdefaults.TxFontnbr); TxText->textsize(progdefaults.TxFontsize); TxText->textcolor(progdefaults.TxFontcolor);
          TxText->type(FL_MULTILINE_INPUT_WRAP);
        } // Fl_Input* TxText
        { btnRxFont = new Fl_Button(275, 50, 75, 20, _("Rx font"));
          btnRxFont->callback((Fl_Callback*)cb_btnRxFont);
        } // Fl_Button* btnRxFont
        { btnTxFont = new Fl_Button(275, 90, 75, 20, _("Tx font"));
          btnTxFont->callback((Fl_Callback*)cb_btnTxFont);
        } // Fl_Button* btnTxFont
        { btnXMIT = new Fl_Button(15, 130, 40, 20, _("XMIT"));
          btnXMIT->tooltip(_("Sent chars in Rx/Tx pane"));
          btnXMIT->callback((Fl_Callback*)cb_btnXMIT);
          btnXMIT->align(FL_ALIGN_BOTTOM);
          btnXMIT->color(progdefaults.XMITcolor);
        } // Fl_Button* btnXMIT
        { btnCTRL = new Fl_Button(66, 130, 40, 20, _("CTRL"));
          btnCTRL->tooltip(_("Control chars in Rx/Tx pane"));
          btnCTRL->callback((Fl_Callback*)cb_btnCTRL);
          btnCTRL->align(FL_ALIGN_BOTTOM);
          btnCTRL->color(progdefaults.CTRLcolor);
        } // Fl_Button* btnCTRL
        { btnSKIP = new Fl_Button(118, 130, 40, 20, _("SKIP"));
          btnSKIP->tooltip(_("Skipped chars in Tx pane\n(Tx on/off in CW)"));
          btnSKIP->callback((Fl_Callback*)cb_btnSKIP);
          btnSKIP->align(FL_ALIGN_BOTTOM);
          btnSKIP->color(progdefaults.SKIPcolor);
        } // Fl_Button* btnSKIP
        { btnALTR = new Fl_Button(170, 130, 40, 20, _("ALTR"));
          btnALTR->tooltip(_("Quick view chars in Rx pane"));
          btnALTR->callback((Fl_Callback*)cb_btnALTR);
          btnALTR->align(FL_ALIGN_BOTTOM);
          btnALTR->color(progdefaults.ALTRcolor);
        } // Fl_Button* btnALTR
        { btnNoTextColor = new Fl_Button(219, 130, 70, 20, _("System"));
          btnNoTextColor->callback((Fl_Callback*)cb_btnNoTextColor);
        } // Fl_Button* btnNoTextColor
        { btnTextDefaults = new Fl_Button(296, 130, 70, 20, _("Defaults"));
          btnTextDefaults->callback((Fl_Callback*)cb_btnTextDefaults);
        } // Fl_Button* btnTextDefaults
        o->end();
      } // Fl_Group* o
      { Fl_Group* o = new Fl_Group(0, 30, 365, 150, _("Tabs"));
        o->hide();
        { btnTabColor = new Fl_Button(85, 75, 75, 20, _("Tab Color"));
          btnTabColor->callback((Fl_Callback*)cb_btnTabColor);
        } // Fl_Button* btnTabColor
        { btnTabDefaultColor = new Fl_Button(215, 75, 75, 20, _("System"));
          btnTabDefaultColor->callback((Fl_Callback*)cb_btnTabDefaultColor);
        } // Fl_Button* btnTabDefaultColor
        o->end();
      } // Fl_Group* o
      { Fl_Group* o = new Fl_Group(0, 30, 365, 150, _("Buttons"));
        o->hide();
        { btnSpotColor = new Fl_Button(46, 50, 70, 20, _("Spot"));
          btnSpotColor->callback((Fl_Callback*)cb_btnSpotColor);
        } // Fl_Button* btnSpotColor
        { btnRxIDColor = new Fl_Button(46, 84, 70, 20, _("RxID"));
          btnRxIDColor->callback((Fl_Callback*)cb_btnRxIDColor);
        } // Fl_Button* btnRxIDColor
        { btnTxIDColor = new Fl_Button(46, 119, 70, 20, _("TxID"));
          btnTxIDColor->callback((Fl_Callback*)cb_btnTxIDColor);
        } // Fl_Button* btnTxIDColor
        { btnTuneColor = new Fl_Button(46, 154, 70, 20, _("Tune"));
          btnTuneColor->callback((Fl_Callback*)cb_btnTuneColor);
        } // Fl_Button* btnTuneColor
        { btnLkColor = new Fl_Button(157, 50, 70, 20, _("Lk"));
          btnLkColor->callback((Fl_Callback*)cb_btnLkColor);
        } // Fl_Button* btnLkColor
        { btnRevColor = new Fl_Button(157, 84, 70, 20, _("Rev"));
          btnRevColor->callback((Fl_Callback*)cb_btnRevColor);
        } // Fl_Button* btnRevColor
        { btnXmtColor = new Fl_Button(157, 118, 70, 20, _("T/R"));
          btnXmtColor->callback((Fl_Callback*)cb_btnXmtColor);
        } // Fl_Button* btnXmtColor
        { btnAfcColor = new Fl_Button(272, 49, 70, 20, _("AFC"));
          btnAfcColor->callback((Fl_Callback*)cb_btnAfcColor);
        } // Fl_Button* btnAfcColor
        { btnSql1Color = new Fl_Button(272, 85, 70, 20, _("SQL-1"));
          btnSql1Color->callback((Fl_Callback*)cb_btnSql1Color);
        } // Fl_Button* btnSql1Color
        { btnSql2Color = new Fl_Button(272, 119, 70, 20, _("SQL-2"));
          btnSql2Color->callback((Fl_Callback*)cb_btnSql2Color);
        } // Fl_Button* btnSql2Color
        { Fl_Box* o = spotcolor = new Fl_Box(27, 51, 18, 18);
          spotcolor->box(FL_THIN_DOWN_BOX);
          spotcolor->color((Fl_Color)3);
          o->color(progdefaults.SpotColor);
        } // Fl_Box* spotcolor
        { Fl_Box* o = rxidcolor = new Fl_Box(27, 85, 18, 18);
          rxidcolor->box(FL_THIN_DOWN_BOX);
          o->color(progdefaults.RxIDColor);
        } // Fl_Box* rxidcolor
        { Fl_Box* o = txidcolor = new Fl_Box(27, 120, 18, 18);
          txidcolor->box(FL_THIN_DOWN_BOX);
          o->color(progdefaults.TxIDColor);
        } // Fl_Box* txidcolor
        { Fl_Box* o = tunecolor = new Fl_Box(27, 155, 18, 18);
          tunecolor->box(FL_THIN_DOWN_BOX);
          o->color(progdefaults.TuneColor);
        } // Fl_Box* tunecolor
        { Fl_Box* o = lockcolor = new Fl_Box(137, 50, 18, 18);
          lockcolor->box(FL_THIN_DOWN_BOX);
          lockcolor->color((Fl_Color)3);
          o->color(progdefaults.LkColor);
        } // Fl_Box* lockcolor
        { Fl_Box* o = revcolor = new Fl_Box(137, 85, 18, 18);
          revcolor->box(FL_THIN_DOWN_BOX);
          o->color(progdefaults.RevColor);
        } // Fl_Box* revcolor
        { Fl_Box* o = xmtcolor = new Fl_Box(137, 119, 18, 18);
          xmtcolor->box(FL_THIN_DOWN_BOX);
          o->color(progdefaults.XmtColor);
        } // Fl_Box* xmtcolor
        { Fl_Box* o = afccolor = new Fl_Box(252, 51, 18, 18);
          afccolor->box(FL_THIN_DOWN_BOX);
          afccolor->color((Fl_Color)3);
          o->color(progdefaults.AfcColor);
        } // Fl_Box* afccolor
        { Fl_Box* o = sql1color = new Fl_Box(252, 86, 18, 18);
          sql1color->box(FL_THIN_DOWN_BOX);
          o->color(progdefaults.Sql1Color);
        } // Fl_Box* sql1color
        { Fl_Box* o = sql2color = new Fl_Box(252, 120, 18, 18);
          sql2color->box(FL_THIN_DOWN_BOX);
          o->color(progdefaults.Sql2Color);
        } // Fl_Box* sql2color
        { Fl_Box* o = new Fl_Box(135, 154, 220, 19, _("Lighted button enabled colors"));
          o->align(FL_ALIGN_TOP_LEFT|FL_ALIGN_INSIDE);
        } // Fl_Box* o
        o->end();
      } // Fl_Group* o
      tabsColors->end();
    } // Fl_Tabs* tabsColors
    dlgColorFont->xclass(PACKAGE_TARNAME);
    dlgColorFont->end();
  } // Fl_Double_Window* dlgColorFont
  return dlgColorFont;
}
