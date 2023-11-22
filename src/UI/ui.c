// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.3
// LVGL version: 8.3.6
// Project name: WohnUhrUI

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////


// SCREEN: ui_TimeWindow
void ui_TimeWindow_screen_init(void);
lv_obj_t *ui_TimeWindow;
lv_obj_t *ui_MainPanel;
lv_obj_t *ui_TimePanel;
lv_obj_t *ui_Time;
lv_obj_t *ui_OutTemp;
lv_obj_t *ui_pnOutLbl;
lv_obj_t *ui_lblOutTemp;
lv_obj_t *ui_pnOutImgL;
lv_obj_t *ui_OutTempScale;
lv_obj_t *ui_pnOutImgR;
lv_obj_t *ui_imgOutdor;
lv_obj_t *ui_InTemp;
lv_obj_t *ui_pnInLbl;
lv_obj_t *ui_lblInTemp;
lv_obj_t *ui_pnInImgL;
lv_obj_t *ui_imginTempSchle;
lv_obj_t *ui_pnInImgR;
lv_obj_t *ui_imginTempHome;
lv_obj_t *ui_InHumi;
lv_obj_t *ui_pnLblHum;
lv_obj_t *ui_lblInHumi;
lv_obj_t *ui_bnHumImgL;
lv_obj_t *ui_imgHumi;
lv_obj_t *ui_pnHumImgR;
lv_obj_t *ui_imgInHumi;
lv_obj_t *ui_BrTime;
lv_obj_t *ui_pnLblBr;
lv_obj_t *ui_LblBrTime;
lv_obj_t *ui_pmImgBr;
lv_obj_t *ui_BRMap;
lv_obj_t *ui____initial_actions0;
const lv_img_dsc_t *ui_imgset_brasil[1] = {&ui_img_brasil48_png};
const lv_img_dsc_t *ui_imgset_feuchte[2] = {&ui_img_feuchte48_png, &ui_img_feuchte64_png};
const lv_img_dsc_t *ui_imgset_haus[1] = {&ui_img_haus48_png};
const lv_img_dsc_t *ui_imgset_outdoor[1] = {&ui_img_outdoor48_png};
const lv_img_dsc_t *ui_imgset_temperatur[2] = {&ui_img_temperatur128_png, &ui_img_temperatur64_png};

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////

///////////////////// SCREENS ////////////////////

void ui_init( void )
{
lv_disp_t *dispp = lv_disp_get_default();
lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), false, LV_FONT_DEFAULT);
lv_disp_set_theme(dispp, theme);
ui_TimeWindow_screen_init();
ui____initial_actions0 = lv_obj_create(NULL);
lv_disp_load_scr( ui_TimeWindow);
}
