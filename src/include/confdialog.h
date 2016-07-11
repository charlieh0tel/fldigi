// generated by Fast Light User Interface Designer (fluid) version 1.0303

#ifndef confdialog_h
#define confdialog_h
#include <FL/Fl.H>
#include "font_browser.h"
#include "globals.h"
#include "modem.h"
#include "configuration.h"
#include "combo.h"
#include "flinput2.h"
#include "flslider2.h"
#include "flmisc.h"
extern Fl_Double_Window *dlgConfig; 
extern Mode_Browser* mode_browser; 
void cbWaterfallFontBrowser(Fl_Widget*, void*);
void cbViewerFontBrowser(Fl_Widget*, void*);
void cbFreqControlFontBrowser(Fl_Widget*, void*);
void set_qrzxml_buttons(Fl_Button* b);
void set_qrzweb_buttons(Fl_Button* b);
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Tabs.H>
extern Fl_Tabs *tabsConfigure;
#include <FL/Fl_Group.H>
extern Fl_Group *tabOperator;
extern Fl_Input2 *inpMyCallsign;
extern Fl_Input2 *inpMyName;
extern Fl_Input2 *inpMyQth;
extern Fl_Input2 *inpMyLocator;
extern Fl_Input2 *inpMyAntenna;
extern Fl_Group *grpNoise;
#include <FL/Fl_Check_Button.H>
extern Fl_Check_Button *btnNoiseOn;
extern Fl_Counter2 *noiseDB;
extern Fl_Check_Button *btnOffsetOn;
#include <FL/Fl_Counter.H>
extern Fl_Counter *ctrl_freq_offset;
extern Fl_Check_Button *btn_imd_on;
extern Fl_Counter2 *xmtimd;
extern Fl_Group *tabUI;
extern Fl_Tabs *tabsUI;
extern Fl_Group *tabBrowser;
extern Fl_Spinner2 *cntChannels;
extern Fl_Spinner2 *cntTimeout;
extern Fl_ListBox *listboxViewerLabel;
#include <FL/Fl_Button.H>
extern Fl_Button *btnViewerFont;
extern Fl_Check_Button *btnFixedIntervals;
extern Fl_Check_Button *btnMarquee;
extern Fl_Check_Button *btnAscend;
extern Fl_Check_Button *btnBrowserHistory;
extern Fl_Button *bwsrSliderColor;
extern Fl_Button *bwsrSldrSelColor;
#include "Viewer.h"
extern Fl_Button *bwsrHiLite_1_color;
extern Fl_Button *bwsrHiLite_2_color;
extern Fl_Button *bwsrHiLite_even_lines;
extern Fl_Button *bwsrHiLite_odd_lines;
extern Fl_Button *bwsrHiLite_select;
extern Fl_Group *tabContest;
#include <FL/Fl_Box.H>
extern Fl_Box *lblSend;
extern Fl_Input2 *inpSend1;
extern Fl_Check_Button *btn599;
extern Fl_Check_Button *btnCutNbrs;
extern Fl_Check_Button *btnUseLeadingZeros;
extern Fl_Value_Input2 *nbrContestStart;
extern Fl_Value_Input2 *nbrContestDigits;
extern Fl_Button *btnResetSerNbr;
#include <FL/Fl_Light_Button.H>
extern Fl_Light_Button *btnDupCheckOn;
extern Fl_Check_Button *btnDupBand;
extern Fl_Check_Button *btnDupMode;
extern Fl_Check_Button *btnDupState;
extern Fl_Check_Button *btnDupXchg1;
extern Fl_Check_Button *btnDupTimeSpan;
extern Fl_Value_Input2 *nbrTimeSpan;
#include <FL/Fl_Color_Chooser.H>
extern Fl_Button *btnDupColor;
extern Fl_Group *tabUserInterface;
extern Fl_Check_Button *btnShowTooltips;
extern Fl_Check_Button *chkMenuIcons;
extern Fl_ListBox *listboxScheme;
extern Fl_Button *bVisibleModes;
extern Fl_ListBox *listbox_language;
extern Fl_Check_Button *btn_rx_lowercase;
extern Fl_Check_Button *btn_tx_lowercase;
extern Fl_Check_Button *btn_save_config_on_exit;
extern Fl_Check_Button *btn2_save_macros_on_exit;
extern Fl_Check_Button *btn2NagMe;
extern Fl_Check_Button *btn2_confirm_exit;
extern Fl_Check_Button *btn_check_for_updates;
extern Fl_Check_Button *btn_tx_show_timer;
extern Fl_Group *tabLogServer;
extern Fl_Tabs *tabsLog;
extern Fl_Check_Button *btnNagMe;
extern Fl_Check_Button *btnClearOnSave;
extern Fl_Check_Button *btnCallUpperCase;
extern Fl_Check_Button *btnAutoFillQSO;
extern Fl_Check_Button *btnDateTimeSort;
extern Fl_Check_Button *btndate_time_force;
extern Fl_Check_Button *btnRSTindefault;
extern Fl_Check_Button *btnRSTdefault;
#include "dxcc.h"
extern Fl_Input2 *txt_cty_dat_pathname;
extern Fl_Button *btn_select_cty_dat;
extern Fl_Button *btn_default_cty_dat;
extern Fl_Button *btn_reload_cty_dat;
extern Fl_Input2 *inpMyPower;
extern Fl_Check_Button *btnRXClicks;
extern Fl_Check_Button *btnRXTooltips;
extern Fl_Input2 *inpNonword;
extern Fl_Check_Button *btnUSunits;
#include "maclogger.h"
extern Fl_Check_Button *btnConnectToMaclogger;
extern Fl_Check_Button *btn_capture_maclogger_radio;
extern Fl_Check_Button *btn_capture_maclogger_log;
extern Fl_Check_Button *btn_capture_maclogger_lookup;
extern Fl_Check_Button *btn_capture_maclogger_spot_tune;
extern Fl_Check_Button *btn_capture_maclogger_spot_report;
extern Fl_Check_Button *btn_enable_maclogger_log;
#include <FL/Fl_Text_Display.H>
extern Fl_Text_Display *txt_UDP_data;
#include <FL/Fl_Output.H>
extern Fl_Output *txt_maclogger_log_filename;
extern Fl_Group *tabMBars;
extern Fl_Check_Button *btnMacroMouseWheel;
extern Fl_Counter *cnt_macro_height;
#include <FL/Fl_Round_Button.H>
extern Fl_Round_Button *btn_scheme_0;
extern Fl_Round_Button *btn_scheme_1;
extern Fl_Round_Button *btn_scheme_2;
extern Fl_Round_Button *btn_scheme_3;
extern Fl_Round_Button *btn_scheme_4;
extern Fl_Round_Button *btn_scheme_5;
extern Fl_Round_Button *btn_scheme_6;
extern Fl_Round_Button *btn_scheme_7;
extern Fl_Round_Button *btn_scheme_8;
extern Fl_Round_Button *btn_scheme_9;
extern Fl_Round_Button *btn_scheme_10;
extern Fl_Round_Button *btn_scheme_11;
extern Fl_Round_Button *btn_scheme_12;
extern Fl_Check_Button *btnUseLastMacro;
extern Fl_Check_Button *btnDisplayMacroFilename;
extern Fl_Check_Button *btn_save_macros_on_exit;
extern Fl_Group *tabWF_UI;
extern Fl_Check_Button *btnWF_UIrev;
extern Fl_Check_Button *btnWF_UIx1;
extern Fl_Check_Button *btnWF_UIwfcarrier;
extern Fl_Check_Button *btnWF_UIwfshift;
extern Fl_Check_Button *btnWF_UIwfreflevel;
extern Fl_Check_Button *btnWF_UIwfdrop;
extern Fl_Check_Button *btnWF_UIwfampspan;
extern Fl_Check_Button *btnWF_UIwfstore;
extern Fl_Check_Button *btnWF_UIwfmode;
extern Fl_Check_Button *btnWF_UIqsy;
extern Fl_Check_Button *btnWF_UIxmtlock;
extern Fl_Button *btn_wf_enable_all;
extern Fl_Button *btn_wf_disable_all;
extern Fl_Group *tabColorsFonts;
extern Fl_Tabs *tabsColors;
#include "fl_digi.h"
extern Fl_ListBox *listbox_charset_status;
#include <FL/Fl_Input.H>
extern Fl_Input *RxText;
extern Fl_Button *btnRxColor;
extern Fl_Button *btnTxColor;
extern Fl_Input *TxText;
extern Fl_Button *btnRxFont;
extern Fl_Button *btnTxFont;
extern Fl_Input *MacroText;
extern Fl_Button *btnMacroEditFont;
extern Fl_Button *btnXMIT;
extern Fl_Button *btnCTRL;
extern Fl_Button *btnSKIP;
extern Fl_Button *btnALTR;
extern Fl_Button *btnSEL;
extern Fl_Button *btnNoTextColor;
extern Fl_Button *btnTextDefaults;
extern Fl_Check_Button *btn_show_all_codes;
extern Fl_Box *FDdisplay;
extern Fl_Button *btn_freq_control_font;
extern Fl_Button *btnBackgroundColor;
extern Fl_Button *btnForegroundColor;
extern Fl_Button *btnFD_SystemColor;
extern Fl_Button *btnSmeter_bg_color;
extern Fl_Button *btnSmeter_scale_color;
extern Fl_Button *btnSmeter_meter_color;
extern Fl_Button *btnPWR_bg_color;
extern Fl_Button *btnPWR_scale_color;
extern Fl_Button *btnPWR_meter_Color;
extern Fl_ListBox *listboxPWRselect;
extern Fl_Output *LOGGINGdisplay;
extern Fl_Button *btnLOGGING_color;
extern Fl_Button *btn_LOGGING_font;
extern Fl_Button *btnLOGGINGdefault_colors_font;
extern Fl_Output *LOGBOOKdisplay;
extern Fl_Button *btnLOGBOOK_color;
extern Fl_Button *btn_LOGBOOK_font;
extern Fl_Button *btnLOGBOOKdefault_colors_font;
extern Fl_Check_Button *btnUseGroupColors;
extern Fl_Button *btnGroup1;
extern Fl_Button *btnGroup2;
extern Fl_Button *btnGroup3;
extern Fl_Button *btnFkeyDEfaults;
extern Fl_Button *btnMacroBtnFont;
extern Fl_Button *btnTabColor;
extern Fl_Button *btnTabDefaultColor;
extern Fl_Button *btnSpotColor;
extern Fl_Button *btnRevColor;
extern Fl_Button *btnTuneColor;
extern Fl_Button *btnRxIDColor;
extern Fl_Button *btnLkColor;
extern Fl_Button *btnSql1Color;
extern Fl_Button *btnXmtColor;
extern Fl_Button *btnRxIDwideColor;
extern Fl_Button *btnAfcColor;
extern Fl_Button *btnSql2Color;
extern Fl_Button *btnTxIDColor;
extern Fl_Box *spotcolor;
extern Fl_Box *revcolor;
extern Fl_Box *tunecolor;
extern Fl_Box *rxidcolor;
extern Fl_Box *lockcolor;
extern Fl_Box *sql1color;
extern Fl_Box *rxidcolorwide;
extern Fl_Box *xmtcolor;
extern Fl_Box *afccolor;
extern Fl_Box *sql2color;
extern Fl_Box *txidcolor;
extern Fl_Button *btnLowSignal;
extern Fl_Box *lowcolor;
extern Fl_Button *btnHighSignal;
extern Fl_Box *highcolor;
extern Fl_Button *btnNormalSignal;
extern Fl_Box *normalcolor;
extern Fl_Button *btnOverSignal;
extern Fl_Box *overcolor;
extern Fl_Group *tab_touch;
#include <FL/Fl_Choice.H>
extern Fl_Choice *sel_lsd;
extern Fl_Check_Button *btn_rxtx_swap;
extern Fl_Group *tabWaterfall;
extern Fl_Tabs *tabsWaterfall;
#include "colorbox.h"
extern colorbox *WF_Palette;
extern Fl_Button *btnColor[9];
extern Fl_Button *btnLoadPalette;
extern Fl_Button *btnSavePalette;
extern Fl_Check_Button *btnUseCursorLines;
extern Fl_Button *btnCursorBWcolor;
extern Fl_Check_Button *btnUseWideCursor;
extern Fl_Check_Button *btnUseCursorCenterLine;
extern Fl_Button *btnCursorCenterLineColor;
extern Fl_Check_Button *btnUseWideCenter;
extern Fl_Check_Button *btnUseBWTracks;
extern Fl_Button *btnBwTracksColor;
extern Fl_Check_Button *btnUseWideTracks;
extern Fl_Button *btnNotchColor;
extern Fl_Check_Button *chkShowAudioScale;
extern Fl_Button *btnWaterfallFont;
extern Fl_Check_Button *btnViewXmtSignal;
extern Fl_Value_Slider2 *valTxMonitorLevel;
extern Fl_Counter2 *cntLowFreqCutoff;
extern Fl_Check_Button *btnWFaveraging;
extern Fl_ListBox *listboxFFTPrefilter;
extern Fl_Counter2 *cntrWfwidth;
extern Fl_Counter2 *wf_latency;
extern Fl_Counter *cntr_drop_speed;
extern Fl_Counter2 *cntrWfheight;
extern Fl_Check_Button *btnWaterfallHistoryDefault;
extern Fl_Check_Button *btnWaterfallQSY;
extern Fl_Check_Button *btnWaterfallClickInsert;
extern Fl_Input2 *inpWaterfallClickText;
extern Fl_ListBox *listboxWaterfallWheelAction;
extern Fl_Group *tabModems;
extern Fl_Tabs *tabsModems;
extern Fl_Group *tabCW;
extern Fl_Tabs *tabsCW;
extern Fl_Value_Slider2 *sldrCWbandwidth;
#include <FL/Fl_Value_Output.H>
extern Fl_Value_Output *valCWrcvWPM;
#include <FL/Fl_Progress.H>
extern Fl_Progress *prgsCWrcvWPM;
extern Fl_Check_Button *btnCWuseSOMdecoding;
extern Fl_Counter2 *cntLower;
extern Fl_Counter2 *cntUpper;
extern Fl_Check_Button *btnCWmfilt;
extern Fl_Check_Button *btnCWuseFFTfilter;
extern Fl_Check_Button *btnCWrcvTrack;
extern Fl_Counter2 *cntCWrange;
extern Fl_Value_Slider2 *sldrCWxmtWPM;
extern Fl_Counter2 *cntCWdefWPM;
extern Fl_Counter *cntCWlowerlimit;
extern Fl_Counter *cntCWupperlimit;
extern Fl_Value_Slider2 *sldrCWfarnsworth;
extern Fl_Check_Button *btnCWusefarnsworth;
extern Fl_Counter2 *cntCWweight;
extern Fl_Counter2 *cntCWdash2dot;
extern Fl_Counter2 *cntCWrisetime;
extern Fl_ListBox *i_listboxQSKshape;
extern Fl_Check_Button *btnCWnarrow;
extern Fl_Check_Button *btnCW_bpf_on;
extern Fl_Counter2 *cntCW_hpf;
extern Fl_Check_Button *btnQSK;
extern Fl_Counter2 *cntPreTiming;
extern Fl_Counter2 *cntPostTiming;
extern Fl_Check_Button *btnQSKadjust;
extern char szTestChar[];
extern Fl_ListBox *i_listbox_test_char;
extern Fl_Check_Button *btnCW_use_paren;
extern Fl_ListBox *listbox_prosign[9];
extern Fl_Group *tabDomEX;
extern Fl_Input2 *txtSecondary;
extern Fl_Check_Button *valDominoEX_FILTER;
extern Fl_Counter2 *valDominoEX_BW;
extern Fl_Check_Button *chkDominoEX_FEC;
extern Fl_Value_Slider2 *valDomCWI;
extern Fl_Counter2 *valDominoEX_PATHS;
extern Fl_Group *tabFeld;
#include "fontdef.h"
extern Fl_ListBox *listboxHellFont;
extern Fl_Check_Button *btnBlackboard;
extern Fl_Spinner2 *valHellXmtWidth;
extern Fl_Check_Button *btnHellRcvWidth;
extern Fl_ListBox *listboxHellPulse;
extern Fl_Value_Slider2 *sldrHellBW;
extern Fl_Check_Button *btnFeldHellIdle;
extern Fl_Check_Button *btnHellXmtWidth;
extern Fl_Group *tabFSQ;
#include <FL/Fl_Value_Slider.H>
extern Fl_Value_Slider *valhits;
extern Fl_Choice *sel_fsq_lpf;
extern Fl_Value_Slider *sldrMovAvg;
extern Fl_Choice *sel_fsq_heard_aging;
extern Fl_Round_Button *btn_fsqbaud[4];
extern Fl_Choice *sel_fsq_frequency;
extern Fl_Choice *sel_fsq_sounder;
extern Fl_Check_Button *btn_fsq_lowercase;
extern Fl_Counter *cntr_FSQ_time_out;
extern Fl_Check_Button *btn_fsq_msg_dt_stamp;
extern Fl_Check_Button *btn_fsq_msg_append;
extern Fl_Output *txtAuditLog;
extern Fl_Light_Button *btn_enable_auditlog;
extern Fl_Button *btn_select_auditlog;
extern Fl_Output *txtHeardLog;
extern Fl_Light_Button *btn_enable_fsq_heard_log;
extern Fl_Button *btn_select_fsq_heard_log;
extern Fl_Button *btn_fsq_xmt_color;
extern Fl_Button *btn_fsq_directed_color;
extern Fl_Button *btn_fsq_undirected_color;
extern Fl_Button *btn_fsq_color_defaults;
extern Fl_Group *tabIFKP;
extern Fl_Round_Button *btn_ifkpbaud[3];
extern Fl_Check_Button *btn_ifkp_lowercase;
extern Fl_Check_Button *btn_ifkp_lowercase_call;
#include "trx.h"
extern Fl_Check_Button *btn_ifkp_freqlock;
extern Fl_Output *txt_ifkp_audit_log;
extern Fl_Light_Button *btn_enable_ifkp_audit_log;
extern Fl_Button *btn_ifkp_select_auditlog;
extern Fl_Output *txt_ifkp_heard_log;
extern Fl_Light_Button *btn_enable_ifkp_heard_log;
extern Fl_Button *btn_select_ifkp_heard_log;
extern Fl_Group *tabMT63;
extern Fl_Check_Button *btnMT63_8bit;
extern Fl_Check_Button *btnMT63_rx_integration;
extern Fl_Check_Button *btnMT63_usetones;
extern Fl_Check_Button *btnMT63_upper_lower;
extern Fl_Spinner2 *MT63_tone_duration;
extern Fl_Check_Button *btnMT63_at500;
extern Fl_Group *tabOlivia;
extern Fl_ListBox *i_listbox_olivia_bandwidth;
extern Fl_ListBox *i_listbox_olivia_tones;
extern Fl_Counter2 *cntOlivia_smargin;
extern Fl_Counter2 *cntOlivia_sinteg;
extern Fl_Check_Button *btn_olivia_reset_fec;
extern Fl_Check_Button *btnOlivia_8bit;
extern Fl_Check_Button *btnOlivia_start_stop_tones;
extern Fl_Group *tabContestia;
extern Fl_ListBox *i_listbox_contestia_bandwidth;
extern Fl_ListBox *i_listbox_contestia_tones;
extern Fl_Counter2 *cntContestia_smargin;
extern Fl_Counter2 *cntContestia_sinteg;
extern Fl_Check_Button *btnContestia_8bit;
extern Fl_Check_Button *btnContestia_start_stop_tones;
extern Fl_Group *tabPSK;
extern Fl_Tabs *tabsPSK;
extern Fl_Group *grpPSK;
extern Fl_Counter2 *cntSearchRange;
extern Fl_Counter2 *cntACQsn;
extern Fl_ListBox *listbox_psk_status_timeout;
extern Fl_Check_Button *btnEnablePSKbrowsing;
extern Fl_Check_Button *btnPSKpilot;
extern Fl_Counter2 *cnt_pilot_power;
extern Fl_Check_Button *btnPSK8Preamble;
extern Fl_Group *tabRTTY;
extern Fl_Tabs *tabsRTTY;
extern Fl_ListBox *selShift;
extern Fl_Counter2 *selCustomShift;
extern Fl_ListBox *selBaud;
extern Fl_ListBox *selBits;
extern Fl_ListBox *selParity;
extern Fl_ListBox *selStopBits;
extern Fl_Check_Button *btnAUTOCRLF;
extern Fl_Counter2 *cntrAUTOCRLF;
extern Fl_Check_Button *btnCRCRLF;
extern Fl_Check_Button *chkUOStx;
extern Fl_Check_Button *chk_shaped_rtty;
extern Fl_Check_Button *chkPseudoFSK;
extern Fl_ListBox *i_listbox_rtty_afc_speed;
extern Fl_Check_Button *chkUOSrx;
#include <FL/Fl_Value_Input.H>
extern Fl_Value_Input *rtty_rx_shape;
extern Fl_Check_Button *btnRxTones[3];
extern Fl_Check_Button *btnPreferXhairScope;
extern Fl_Check_Button *chk_true_scope;
extern Fl_Check_Button *chk_useMARKfreq;
extern Fl_Button *btnRTTY_mark_color;
extern Fl_Check_Button *btnSynopAdifDecoding;
extern Fl_Check_Button *btnSynopKmlDecoding;
extern Fl_Check_Button *btnSynopInterleaved;
extern Fl_Group *tabTHOR;
extern Fl_Input2 *txtTHORSecondary;
extern Fl_Check_Button *valTHOR_FILTER;
extern Fl_Counter2 *valTHOR_BW;
extern Fl_Value_Slider2 *valThorCWI;
extern Fl_Check_Button *valTHOR_PREAMBLE;
extern Fl_Check_Button *valTHOR_SOFTSYMBOLS;
extern Fl_Check_Button *valTHOR_SOFTBITS;
extern Fl_Counter2 *valTHOR_PATHS;
extern Fl_Group *tabOther;
extern Fl_Tabs *tabsOther;
extern Fl_Group *tabNavtex;
extern Fl_Check_Button *btnNvtxAdifLog;
extern Fl_Check_Button *btnNvtxKmlLog;
extern Fl_Group *tabWefax;
extern Fl_Check_Button *btnWefaxAdifLog;
extern Fl_Check_Button *btnWefaxEmbeddedGui;
extern Fl_Value_Input2 *btnWefaxShift;
extern Fl_Value_Input2 *btnWefaxMaxRows;
extern Fl_Input *btnWefaxSaveDir;
extern Fl_Button *btnSelectFaxDestDir;
extern Fl_Check_Button *btnWefaxHideTx;
extern Fl_Check_Button *btnWefaxSaveMonochrome;
extern Fl_Group *tabDFTscan;
extern Fl_Counter *cnt_dft_scans;
extern Fl_Counter *cnt_dft_range;
extern Fl_Check_Button *btn_use_relative_dB;
extern Fl_Group *tabRig;
extern Fl_Tabs *tabsRig;
extern Fl_Check_Button *chkUSERIGCAT;
extern Fl_Group *grpRigCAT;
extern Fl_Output *txtXmlRigFilename;
extern Fl_Button *btnSelectRigXmlFile;
extern Fl_ComboBox *inpXmlRigDevice;
extern Fl_Value_Input2 *cntRigCatRetries;
extern Fl_Value_Input2 *cntRigCatTimeout;
extern Fl_Value_Input2 *cntRigCatWait;
extern Fl_ListBox *listbox_xml_rig_baudrate;
extern Fl_Counter2 *valRigCatStopbits;
extern Fl_Button *btnInitRIGCAT;
extern Fl_Check_Button *btnRigCatEcho;
extern Fl_Round_Button *btnRigCatCMDptt;
extern Fl_Round_Button *btnRigCatRTSptt;
extern Fl_Round_Button *btnRigCatDTRptt;
extern Fl_Check_Button *btnRigCatRTSplus;
extern Fl_Check_Button *btnRigCatDTRplus;
extern Fl_Check_Button *chkRigCatRTSCTSflow;
extern Fl_Check_Button *chk_restore_tio;
#include "rigio.h"
extern Fl_Button *btnRevertRIGCAT;
extern Fl_Check_Button *chkRigCatVSP;
extern Fl_Value_Input2 *cntRigCatInitDelay;
extern Fl_Group *tabHamlib;
extern Fl_Check_Button *chkUSEHAMLIB;
extern Fl_Group *grpHamlib;
extern Fl_ListBox *cboHamlibRig;
extern Fl_ComboBox *inpRIGdev;
extern Fl_Value_Input2 *cntHamlibRetries;
extern Fl_Value_Input2 *cntHamlibTimeout;
extern Fl_Value_Input2 *cntHamlibWriteDelay;
extern Fl_Value_Input2 *cntHamlibWait;
extern Fl_ListBox *listbox_baudrate;
extern Fl_Counter2 *valHamRigStopbits;
extern Fl_Counter2 *cntHamlibTimeout0;
extern Fl_Input2 *inpHamlibConfig;
extern Fl_Button *btnInitHAMLIB;
extern Fl_Check_Button *btnHamlibCMDptt;
extern Fl_Check_Button *btnHamlibPTT_ON_DATA;
extern Fl_Check_Button *btnHamlibDTRplus;
extern Fl_Check_Button *chkHamlibRTSplus;
extern Fl_Check_Button *chkHamlibRTSCTSflow;
extern Fl_Check_Button *chkHamlibXONXOFFflow;
extern Fl_Button *btnRevertHAMLIB;
extern Fl_Check_Button *chk_hamlib_cw_is_lsb;
extern Fl_Check_Button *chk_hamlib_rtty_is_usb;
extern Fl_ListBox *listbox_sideband;
extern Fl_Counter2 *val_hamlib_mode_delay;
extern Fl_Check_Button *btnPTTrightchannel;
extern Fl_Group *grpHWPTT;
extern Fl_Round_Button *btnTTYptt;
extern Fl_ComboBox *inpTTYdev;
extern Fl_Round_Button *btnRTSptt;
extern Fl_Round_Button *btnRTSplusV;
extern Fl_Round_Button *btnDTRptt;
extern Fl_Round_Button *btnDTRplusV;
extern Fl_Button *btnInitHWPTT;
extern Fl_Round_Button *btnUsePPortPTT;
extern Fl_Round_Button *btnUseUHrouterPTT;
extern Fl_Round_Button *btnUseGPIOPTT;
extern Fl_Counter2 *inpGPIOPort;
extern Fl_Group *grpPTTdelays;
extern Fl_Counter *cntPTT_on_delay;
extern Fl_Counter *cntPTT_off_delay;
extern Fl_Group *tabXMLRPC;
extern Fl_Group *grpXMLRPC;
extern Fl_Check_Button *chkUSEXMLRPC;
extern Fl_Button *btnInitXMLRPC;
extern Fl_Counter *mbw_delay;
extern Fl_Group *tabFLRIG;
extern Fl_Check_Button *chk_flrig_keys_modem;
extern Fl_Group *tabSoundCard;
extern Fl_Tabs *tabsSoundCard;
extern Fl_Group *tabAudio;
extern Fl_Group *AudioOSS;
#include <FL/Fl_Input_Choice.H>
extern Fl_Input_Choice *menuOSSDev;
extern Fl_Group *AudioPort;
extern Fl_Choice *menuPortInDev;
extern Fl_Choice *menuPortOutDev;
extern Fl_Group *AudioPulse;
extern Fl_Input2 *inpPulseServer;
extern Fl_Group *AudioNull;
extern Fl_Round_Button *btnAudioIO[4];
extern Fl_Group *tabAudioOpt;
extern Fl_Group *grpAudioSampleRate;
extern Fl_ListBox *menuInSampleRate;
extern Fl_ListBox *menuOutSampleRate;
#include <FL/fl_ask.H>
extern Fl_ListBox *menuSampleConverter;
extern Fl_Spinner2 *cntRxRateCorr;
extern Fl_Spinner2 *cntTxRateCorr;
extern Fl_Spinner2 *cntTxOffset;
extern Fl_Group *tabAudioRightChannel;
extern Fl_Check_Button *chkAudioStereoOut;
extern Fl_Check_Button *chkReverseAudio;
extern Fl_Check_Button *btnPTTrightchannel2;
extern Fl_Check_Button *btnQSK2;
extern Fl_Check_Button *chkPseudoFSK2;
extern Fl_Check_Button *chkReverseRxAudio;
extern Fl_Group *tabWavFile;
extern Fl_ListBox *listbox_wav_samplerate;
extern Fl_Group *tabID;
extern Fl_Tabs *tabsID;
extern Fl_Group *tabRsID;
extern Fl_Check_Button *chkRSidNotifyOnly;
extern Fl_Button *bRSIDRxModes;
extern Fl_Check_Button *chkRSidWideSearch;
extern Fl_Check_Button *chkRSidMark;
extern Fl_Check_Button *chkRSidAutoDisable;
extern Fl_ListBox *listbox_rsid_errors;
extern Fl_Value_Slider2 *sldrRSIDsquelch;
extern Fl_Check_Button *chkRSidShowAlert;
extern Fl_Check_Button *chkRetainFreqLock;
extern Fl_Check_Button *chkDisableFreqChange;
extern Fl_Counter *val_pretone;
extern Fl_Button *bRSIDTxModes;
extern Fl_Check_Button *btn_post_rsid;
extern Fl_Group *tabVideoID;
extern Fl_Check_Button *btnsendid;
extern Fl_Check_Button *btnsendvideotext;
extern Fl_Input2 *valVideotext;
extern Fl_Check_Button *chkID_SMALL;
extern Fl_Value_Slider2 *sldrVideowidth;
extern Fl_Check_Button *btn_vidlimit;
extern Fl_Check_Button *btn_vidmodelimit;
extern Fl_Button *bVideoIDModes;
extern Fl_Group *tabCwID;
extern Fl_Group *sld;
extern Fl_Check_Button *btnCWID;
extern Fl_Value_Slider2 *sldrCWIDwpm;
extern Fl_Button *bCWIDModes;
extern Fl_Group *tabMisc;
extern Fl_Tabs *tabsMisc;
extern Fl_Group *tabCPUspeed;
extern Fl_Check_Button *chkSlowCpu;
extern Fl_Group *tabNBEMS;
extern Fl_Check_Button *chkAutoExtract;
extern Fl_Check_Button *chk_open_wrap_folder;
extern Fl_Check_Button *chk_open_flmsg;
extern Fl_Check_Button *chk_open_flmsg_print;
extern Fl_Input2 *txt_flmsg_pathname;
extern Fl_Button *btn_select_flmsg;
extern Fl_Value_Slider *sldr_extract_timeout;
extern Fl_Check_Button *chk_transfer__to_open_flmsg;
extern Fl_Group *tabPskmail;
extern Fl_Counter2 *cntServerCarrier;
extern Fl_Counter2 *cntServerOffset;
extern Fl_Counter2 *cntServerACQsn;
extern Fl_Counter2 *cntServerAFCrange;
extern Fl_Check_Button *btnPSKmailSweetSpot;
extern Fl_Check_Button *btn_arq_s2n_report;
extern Fl_Group *tabSpot;
extern Fl_Check_Button *btnPSKRepAuto;
extern Fl_Check_Button *btnPSKRepLog;
extern Fl_Check_Button *btnPSKRepQRG;
extern Fl_Check_Button *btn_report_when_visible;
extern Fl_Input2 *inpPSKRepHost;
extern Fl_Input2 *inpPSKRepPort;
extern Fl_Button *btnPSKRepInit;
extern Fl_Box *boxPSKRepMsg;
extern Fl_Group *tabSweetSpot;
extern Fl_Value_Input2 *valCWsweetspot;
extern Fl_Value_Input2 *valRTTYsweetspot;
extern Fl_Value_Input2 *valPSKsweetspot;
extern Fl_Check_Button *btnStartAtSweetSpot;
extern Fl_Check_Button *btnCWIsLSB;
extern Fl_Group *tabText_IO;
extern Fl_Group *grpTalker;
extern void open_talker();
extern void close_talker();
extern Fl_Light_Button *btnConnectTalker;
extern Fl_Check_Button *btn_auto_talk;
extern Fl_Check_Button *chkRxStream;
extern Fl_Group *tabDTMF;
extern Fl_Check_Button *chkDTMFdecode;
extern Fl_Group *tabWX;
extern Fl_Input *inpWXsta;
extern Fl_Check_Button *btn_wx_full;
extern Fl_Check_Button *btn_wx_station_name;
extern Fl_Check_Button *btn_wx_condx;
extern Fl_Check_Button *btn_wx_fahrenheit;
extern Fl_Check_Button *btn_wx_celsius;
extern Fl_Check_Button *btn_wx_mph;
extern Fl_Check_Button *btn_wx_kph;
extern Fl_Check_Button *btn_wx_inches;
extern Fl_Check_Button *btn_wx_mbars;
#include "weather.h"
extern Fl_Button *btn_metar_search;
extern Fl_Group *tabKML;
extern Fl_Input *btnKmlSaveDir;
extern Fl_Input *inputKmlRootFile;
extern Fl_Counter *cntKmlMergeDistance;
extern Fl_Counter *cntKmlRetentionTime;
extern Fl_Spinner2 *cntKmlRefreshInterval;
extern Fl_ListBox *listbox_kml_balloon_style;
extern Fl_Input *btnKmlCommand;
extern Fl_Button *btlTestKmlCommand;
extern Fl_Button *btnSelectKmlDestDir;
extern Fl_Button *btlPurge;
extern Fl_Check_Button *btnKmlPurgeOnStartup;
extern Fl_Check_Button *btn_kml_enabled;
extern Fl_Group *tabQRZ;
extern Fl_Tabs *tabsQRZ;
extern Fl_Round_Button *btnQRZWEBnotavailable;
extern Fl_Round_Button *btnQRZonline;
extern Fl_Round_Button *btnHAMCALLonline;
extern Fl_Round_Button *btnHamQTHonline;
extern Fl_Input2 *inp_qrzurl;
extern Fl_Input2 *inp_hamcallurl;
extern Fl_Input2 *inp_hamqthurl;
extern Fl_Round_Button *btnQRZXMLnotavailable;
extern Fl_Round_Button *btnQRZcdrom;
extern Fl_Round_Button *btnQRZsub;
extern Fl_Round_Button *btnHamcall;
extern Fl_Round_Button *btnHamQTH;
extern Fl_Round_Button *btnCALLOOK;
extern Fl_Input2 *txtQRZpathname;
extern Fl_Input2 *inpQRZusername;
extern Fl_Input2 *inpQRZuserpassword;
extern Fl_Button *btnQRZpasswordShow;
extern Fl_Check_Button *btn_notes_address;
extern Fl_Check_Button *btn_clear_notes;
extern Fl_Input2 *inpEQSL_id;
extern Fl_Input2 *inpEQSL_pwd;
extern Fl_Button *btnEQSL_pwd_show;
extern Fl_Input2 *inpEQSL_nick;
extern Fl_Check_Button *btn_send_when_logged;
extern Fl_Input2 *txt_eqsl_default_message;
extern Fl_Box *eqsl_txt1;
extern Fl_Box *eqsl_txt2;
extern Fl_Box *eqsl_txt3;
extern Fl_Check_Button *btn_send_datetime_off;
extern Fl_Group *tabAutoStart;
extern Fl_Input2 *txt_auto_flrig_pathname;
extern Fl_Button *btn_select_flrig;
extern Fl_Input2 *txt_auto_flamp_pathname;
extern Fl_Button *btn_select_auto_flamp;
extern Fl_Input2 *txt_auto_flnet_pathname;
extern Fl_Button *btn_select_auto_flnet;
extern Fl_Input2 *txt_auto_fllog_pathname;
extern Fl_Button *btn_select_fllog;
extern Fl_Input2 *txt_auto_prog1_pathname;
extern Fl_Button *btn_select_prog1;
extern Fl_Input2 *txt_auto_prog2_pathname;
extern Fl_Button *btn_select_prog2;
extern Fl_Input2 *txt_auto_prog3_pathname;
extern Fl_Button *btn_select_prog3;
extern Fl_Check_Button *btn_flrig_auto_enable;
extern Fl_Check_Button *btn_flamp_auto_enable;
extern Fl_Check_Button *btn_flnet_auto_enable;
extern Fl_Check_Button *btn_fllog_auto_enable;
extern Fl_Check_Button *btn_prog1_auto_enable;
extern Fl_Check_Button *btn_prog2_auto_enable;
extern Fl_Check_Button *btn_prog3_auto_enable;
extern Fl_Button *btn_test_flrig;
extern Fl_Button *btn_test_flamp;
extern Fl_Button *btn_test_flnet;
extern Fl_Button *btn_test_fllog;
extern Fl_Button *btn_test_prog1;
extern Fl_Button *btn_test_prog2;
extern Fl_Button *btn_test_prog3;
extern Fl_Group *tabIO;
extern Fl_Check_Button *btnDisable_p2p_io_widgets;
extern Fl_Check_Button *btnEnable_arq;
extern Fl_Check_Button *btnEnable_kiss;
extern Fl_Check_Button *btnEnable_ax25_decode;
extern Fl_Check_Button *btnEnable_csma;
extern Fl_Button *btnDefault_kiss_ip;
extern Fl_Input2 *txtKiss_ip_address;
extern Fl_Counter *cntKPSQLAttenuation;
extern Fl_Input2 *txtKiss_ip_io_port_no;
extern Fl_Counter *cntBusyChannelSeconds;
extern Fl_Check_Button *btnEnableBusyChannel;
extern Fl_Input2 *txtKiss_ip_out_port_no;
extern Fl_Check_Button *btnEnable_dual_port;
extern Fl_Button *btn_restart_kiss;
extern Fl_Button *btn_connect_kiss_io;
extern Fl_Check_Button *btnKissTCPIO;
extern Fl_Check_Button *btnKissUDPIO;
extern Fl_Check_Button *btnKissTCPListen;
extern Fl_Check_Button *btnEnable_7bit_modem_inhibit;
extern Fl_Check_Button *btnEnable_auto_connect;
extern Fl_Input2 *txtArq_ip_address;
extern Fl_Input2 *txtArq_ip_port_no;
extern Fl_Button *btnDefault_arq_ip;
extern Fl_Button *btn_restart_arq;
extern Fl_Button *btnDefault_xmlrpc_ip;
extern Fl_Input2 *txtXmlrpc_ip_address;
extern Fl_Input2 *txtXmlrpc_ip_port_no;
extern Fl_Button *btn_restart_xml;
extern Fl_Button *btnDefault_flrig_ip;
extern Fl_Input2 *txt_flrig_ip_address;
extern Fl_Input2 *txt_flrig_ip_port;
#include "rigsupport.h"
extern Fl_Button *btn_reconnect_flrig_server;
extern Fl_Input *txt_fllog_ip_address;
extern Fl_Input *txt_fllog_ip_port;
extern Fl_Button *btn_reconnect_log_server;
extern Fl_Button *btnDefault_fllog_ip;
extern Fl_Button *btnSaveConfig;
#include <FL/Fl_Return_Button.H>
extern Fl_Return_Button *btnCloseConfig;
extern Fl_Button *btnResetConfig;
Fl_Double_Window* ConfigureDialog();
void openConfig();
void closeDialog();
void createConfig();
class Fl_File_Chooser ;
void WefaxDestDirSet(Fl_File_Chooser *w, void *userdata);
void KmlDestDirSet(Fl_File_Chooser *w, void *userdata);
void make_window();
void make_window();
#endif
