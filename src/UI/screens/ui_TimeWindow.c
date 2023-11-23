// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.3
// LVGL version: 8.3.6
// Project name: ESP32Clock7inchUI

#include "../ui.h"

void ui_TimeWindow_screen_init(void)
{
ui_TimeWindow = lv_obj_create(NULL);
lv_obj_clear_flag( ui_TimeWindow, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM );    /// Flags
lv_obj_set_scrollbar_mode(ui_TimeWindow, LV_SCROLLBAR_MODE_OFF);
lv_obj_set_flex_flow(ui_TimeWindow,LV_FLEX_FLOW_ROW);
lv_obj_set_flex_align(ui_TimeWindow, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
lv_obj_set_style_radius(ui_TimeWindow, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_TimeWindow, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_TimeWindow, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_set_style_bg_grad_color(ui_TimeWindow, lv_color_hex(0x000000), LV_PART_SCROLLBAR | LV_STATE_DEFAULT );

ui_MainPanel = lv_obj_create(ui_TimeWindow);
lv_obj_set_width( ui_MainPanel, lv_pct(100));
lv_obj_set_height( ui_MainPanel, lv_pct(100));
lv_obj_set_align( ui_MainPanel, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_MainPanel, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN );    /// Flags
lv_obj_set_style_radius(ui_MainPanel, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_MainPanel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_MainPanel, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_MainPanel, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_side(ui_MainPanel, LV_BORDER_SIDE_NONE, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_left(ui_MainPanel, 2, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_MainPanel, 2, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_MainPanel, 2, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_MainPanel, 2, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_TimePanel = lv_obj_create(ui_MainPanel);
lv_obj_set_width( ui_TimePanel, lv_pct(100));
lv_obj_set_height( ui_TimePanel, lv_pct(40));
lv_obj_set_align( ui_TimePanel, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_TimePanel, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_TimePanel, lv_color_hex(0x0C012B), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_TimePanel, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_TimePanel, lv_color_hex(0x525375), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_TimePanel, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Time = lv_label_create(ui_TimePanel);
lv_obj_set_width( ui_Time, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Time, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Time, LV_ALIGN_CENTER );
lv_label_set_long_mode(ui_Time,LV_LABEL_LONG_CLIP);
lv_label_set_text(ui_Time,"00:00");
lv_obj_add_state( ui_Time, LV_STATE_USER_1 );     /// States
lv_obj_set_style_text_color(ui_Time, lv_color_hex(0xA7AAEF), LV_PART_MAIN | LV_STATE_USER_1 );
lv_obj_set_style_text_opa(ui_Time, 255, LV_PART_MAIN| LV_STATE_USER_1);
lv_obj_set_style_text_font(ui_Time, &ui_font_Time150, LV_PART_MAIN| LV_STATE_USER_1);

ui_OutTemp = lv_obj_create(ui_MainPanel);
lv_obj_set_width( ui_OutTemp, lv_pct(50));
lv_obj_set_height( ui_OutTemp, lv_pct(27));
lv_obj_clear_flag( ui_OutTemp, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN );    /// Flags
lv_obj_set_style_bg_color(ui_OutTemp, lv_color_hex(0x0C012B), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_OutTemp, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_OutTemp, lv_color_hex(0x525375), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_OutTemp, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_left(ui_OutTemp, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_OutTemp, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_OutTemp, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_OutTemp, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_pnOutLbl = lv_obj_create(ui_OutTemp);
lv_obj_set_width( ui_pnOutLbl, lv_pct(76));
lv_obj_set_height( ui_pnOutLbl, lv_pct(100));
lv_obj_set_align( ui_pnOutLbl, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_pnOutLbl, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN );    /// Flags
lv_obj_set_style_radius(ui_pnOutLbl, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_pnOutLbl, lv_color_hex(0x0C012B), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_pnOutLbl, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_pnOutLbl, lv_color_hex(0x0C012B), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_pnOutLbl, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_pnOutLbl, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_left(ui_pnOutLbl, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_pnOutLbl, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_pnOutLbl, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_pnOutLbl, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_lblOutTemp = lv_label_create(ui_pnOutLbl);
lv_obj_set_width( ui_lblOutTemp, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_lblOutTemp, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_lblOutTemp, LV_ALIGN_CENTER );
lv_label_set_text(ui_lblOutTemp,"20.5");
lv_obj_set_style_text_color(ui_lblOutTemp, lv_color_hex(0xA7AAEF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_lblOutTemp, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_lblOutTemp, &ui_font_Temp65, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_pnOutImgL = lv_obj_create(ui_OutTemp);
lv_obj_set_width( ui_pnOutImgL, lv_pct(12));
lv_obj_set_height( ui_pnOutImgL, lv_pct(100));
lv_obj_set_align( ui_pnOutImgL, LV_ALIGN_LEFT_MID );
lv_obj_clear_flag( ui_pnOutImgL, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN );    /// Flags
lv_obj_set_style_radius(ui_pnOutImgL, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_pnOutImgL, lv_color_hex(0x0C012B), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_pnOutImgL, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_pnOutImgL, lv_color_hex(0x0C012B), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_pnOutImgL, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_pnOutImgL, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_left(ui_pnOutImgL, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_pnOutImgL, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_pnOutImgL, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_pnOutImgL, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_OutTempScale = lv_img_create(ui_pnOutImgL);
lv_img_set_src(ui_OutTempScale, &ui_img_temperatur64_png);
lv_obj_set_width( ui_OutTempScale, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_OutTempScale, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_OutTempScale, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_OutTempScale, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_OutTempScale, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_pnOutImgR = lv_obj_create(ui_OutTemp);
lv_obj_set_width( ui_pnOutImgR, lv_pct(12));
lv_obj_set_height( ui_pnOutImgR, lv_pct(100));
lv_obj_set_align( ui_pnOutImgR, LV_ALIGN_RIGHT_MID );
lv_obj_clear_flag( ui_pnOutImgR, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN );    /// Flags
lv_obj_set_style_radius(ui_pnOutImgR, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_pnOutImgR, lv_color_hex(0x0C012B), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_pnOutImgR, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_pnOutImgR, lv_color_hex(0x0C012B), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_pnOutImgR, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_pnOutImgR, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_left(ui_pnOutImgR, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_pnOutImgR, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_pnOutImgR, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_pnOutImgR, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_imgOutdor = lv_img_create(ui_pnOutImgR);
lv_img_set_src(ui_imgOutdor, &ui_img_outdoor48gruen_png);
lv_obj_set_width( ui_imgOutdor, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_imgOutdor, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_imgOutdor, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_imgOutdor, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_imgOutdor, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_InTemp = lv_obj_create(ui_MainPanel);
lv_obj_set_width( ui_InTemp, lv_pct(50));
lv_obj_set_height( ui_InTemp, lv_pct(27));
lv_obj_set_align( ui_InTemp, LV_ALIGN_TOP_RIGHT );
lv_obj_clear_flag( ui_InTemp, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_InTemp, lv_color_hex(0x0C012B), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_InTemp, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_InTemp, lv_color_hex(0x525375), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_InTemp, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_left(ui_InTemp, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_InTemp, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_InTemp, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_InTemp, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_pnInLbl = lv_obj_create(ui_InTemp);
lv_obj_set_width( ui_pnInLbl, lv_pct(76));
lv_obj_set_height( ui_pnInLbl, lv_pct(100));
lv_obj_set_align( ui_pnInLbl, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_pnInLbl, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_pnInLbl, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_pnInLbl, lv_color_hex(0x0C012B), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_pnInLbl, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_pnInLbl, lv_color_hex(0x0C012B), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_pnInLbl, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_pnInLbl, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_left(ui_pnInLbl, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_pnInLbl, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_pnInLbl, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_pnInLbl, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_lblInTemp = lv_label_create(ui_pnInLbl);
lv_obj_set_width( ui_lblInTemp, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_lblInTemp, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_lblInTemp, LV_ALIGN_CENTER );
lv_label_set_text(ui_lblInTemp,"20.5");
lv_obj_set_style_text_color(ui_lblInTemp, lv_color_hex(0xA7AAEF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_lblInTemp, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_lblInTemp, &ui_font_Temp65, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_pnInImgL = lv_obj_create(ui_InTemp);
lv_obj_set_width( ui_pnInImgL, lv_pct(12));
lv_obj_set_height( ui_pnInImgL, lv_pct(100));
lv_obj_set_align( ui_pnInImgL, LV_ALIGN_LEFT_MID );
lv_obj_clear_flag( ui_pnInImgL, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_pnInImgL, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_pnInImgL, lv_color_hex(0x0C012B), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_pnInImgL, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_pnInImgL, lv_color_hex(0x0C012B), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_pnInImgL, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_pnInImgL, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_left(ui_pnInImgL, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_pnInImgL, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_pnInImgL, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_pnInImgL, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_imginTempSchle = lv_img_create(ui_pnInImgL);
lv_img_set_src(ui_imginTempSchle, &ui_img_temperatur64_png);
lv_obj_set_width( ui_imginTempSchle, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_imginTempSchle, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_imginTempSchle, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_imginTempSchle, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_imginTempSchle, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_pnInImgR = lv_obj_create(ui_InTemp);
lv_obj_set_width( ui_pnInImgR, lv_pct(12));
lv_obj_set_height( ui_pnInImgR, lv_pct(100));
lv_obj_set_align( ui_pnInImgR, LV_ALIGN_RIGHT_MID );
lv_obj_clear_flag( ui_pnInImgR, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_pnInImgR, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_pnInImgR, lv_color_hex(0x0C012B), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_pnInImgR, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_pnInImgR, lv_color_hex(0x0C012B), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_pnInImgR, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_pnInImgR, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_left(ui_pnInImgR, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_pnInImgR, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_pnInImgR, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_pnInImgR, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_imginTempHome = lv_img_create(ui_pnInImgR);
lv_img_set_src(ui_imginTempHome, &ui_img_haus48_png);
lv_obj_set_width( ui_imginTempHome, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_imginTempHome, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_imginTempHome, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_imginTempHome, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_imginTempHome, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_InHumi = lv_obj_create(ui_MainPanel);
lv_obj_set_width( ui_InHumi, lv_pct(50));
lv_obj_set_height( ui_InHumi, lv_pct(27));
lv_obj_set_align( ui_InHumi, LV_ALIGN_BOTTOM_LEFT );
lv_obj_clear_flag( ui_InHumi, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_InHumi, lv_color_hex(0x0C012B), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_InHumi, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_InHumi, lv_color_hex(0x525375), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_InHumi, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_left(ui_InHumi, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_InHumi, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_InHumi, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_InHumi, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_pnLblHum = lv_obj_create(ui_InHumi);
lv_obj_set_width( ui_pnLblHum, lv_pct(76));
lv_obj_set_height( ui_pnLblHum, lv_pct(100));
lv_obj_set_align( ui_pnLblHum, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_pnLblHum, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN );    /// Flags
lv_obj_set_style_radius(ui_pnLblHum, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_pnLblHum, lv_color_hex(0x0C012B), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_pnLblHum, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_pnLblHum, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_pnLblHum, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_pnLblHum, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_left(ui_pnLblHum, 5, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_pnLblHum, 5, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_pnLblHum, 5, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_pnLblHum, 5, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_lblInHumi = lv_label_create(ui_pnLblHum);
lv_obj_set_width( ui_lblInHumi, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_lblInHumi, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_lblInHumi, LV_ALIGN_CENTER );
lv_label_set_text(ui_lblInHumi,"50%");
lv_obj_clear_flag( ui_lblInHumi, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN );    /// Flags
lv_obj_set_style_text_color(ui_lblInHumi, lv_color_hex(0xA7AAEF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_lblInHumi, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_lblInHumi, &ui_font_Temp65, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_bnHumImgL = lv_obj_create(ui_InHumi);
lv_obj_set_width( ui_bnHumImgL, lv_pct(12));
lv_obj_set_height( ui_bnHumImgL, lv_pct(100));
lv_obj_set_align( ui_bnHumImgL, LV_ALIGN_LEFT_MID );
lv_obj_clear_flag( ui_bnHumImgL, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN );    /// Flags
lv_obj_set_style_radius(ui_bnHumImgL, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_bnHumImgL, lv_color_hex(0x0C012B), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_bnHumImgL, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_bnHumImgL, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_bnHumImgL, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_bnHumImgL, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_left(ui_bnHumImgL, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_bnHumImgL, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_bnHumImgL, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_bnHumImgL, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_imgHumi = lv_img_create(ui_bnHumImgL);
lv_img_set_src(ui_imgHumi, &ui_img_feuchte48_png);
lv_obj_set_width( ui_imgHumi, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_imgHumi, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_imgHumi, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_imgHumi, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_imgHumi, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_pnHumImgR = lv_obj_create(ui_InHumi);
lv_obj_set_width( ui_pnHumImgR, lv_pct(12));
lv_obj_set_height( ui_pnHumImgR, lv_pct(100));
lv_obj_set_align( ui_pnHumImgR, LV_ALIGN_RIGHT_MID );
lv_obj_clear_flag( ui_pnHumImgR, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_pnHumImgR, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_pnHumImgR, lv_color_hex(0x0C012B), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_pnHumImgR, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_pnHumImgR, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_pnHumImgR, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_left(ui_pnHumImgR, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_pnHumImgR, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_pnHumImgR, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_pnHumImgR, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_imgInHumi = lv_img_create(ui_pnHumImgR);
lv_img_set_src(ui_imgInHumi, &ui_img_haus48_png);
lv_obj_set_width( ui_imgInHumi, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_imgInHumi, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_imgInHumi, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_imgInHumi, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_imgInHumi, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_BrTime = lv_obj_create(ui_MainPanel);
lv_obj_set_width( ui_BrTime, lv_pct(50));
lv_obj_set_height( ui_BrTime, lv_pct(27));
lv_obj_set_align( ui_BrTime, LV_ALIGN_BOTTOM_RIGHT );
lv_obj_clear_flag( ui_BrTime, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_BrTime, lv_color_hex(0x0C012B), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_BrTime, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_BrTime, lv_color_hex(0x525375), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_BrTime, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_left(ui_BrTime, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_BrTime, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_BrTime, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_BrTime, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_pnLblBr = lv_obj_create(ui_BrTime);
lv_obj_set_width( ui_pnLblBr, lv_pct(87));
lv_obj_set_height( ui_pnLblBr, lv_pct(100));
lv_obj_set_align( ui_pnLblBr, LV_ALIGN_LEFT_MID );
lv_obj_clear_flag( ui_pnLblBr, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN );    /// Flags
lv_obj_set_style_radius(ui_pnLblBr, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_pnLblBr, lv_color_hex(0x0C012B), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_pnLblBr, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_pnLblBr, lv_color_hex(0x0C012B), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_pnLblBr, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_pnLblBr, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_left(ui_pnLblBr, 2, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_pnLblBr, 2, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_pnLblBr, 2, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_pnLblBr, 2, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_LblBrTime = lv_label_create(ui_pnLblBr);
lv_obj_set_width( ui_LblBrTime, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_LblBrTime, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_LblBrTime, LV_ALIGN_CENTER );
lv_label_set_text(ui_LblBrTime,"22:22");
lv_obj_clear_flag( ui_LblBrTime, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN );    /// Flags
lv_obj_set_style_text_color(ui_LblBrTime, lv_color_hex(0xA7AAEF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_LblBrTime, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_LblBrTime, &ui_font_Temp65, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_pmImgBr = lv_obj_create(ui_BrTime);
lv_obj_set_width( ui_pmImgBr, lv_pct(13));
lv_obj_set_height( ui_pmImgBr, lv_pct(100));
lv_obj_set_align( ui_pmImgBr, LV_ALIGN_RIGHT_MID );
lv_obj_clear_flag( ui_pmImgBr, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN );    /// Flags
lv_obj_set_style_radius(ui_pmImgBr, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_pmImgBr, lv_color_hex(0x0C012B), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_pmImgBr, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_pmImgBr, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_pmImgBr, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_pmImgBr, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_left(ui_pmImgBr, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_pmImgBr, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_pmImgBr, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_pmImgBr, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_BRMap = lv_img_create(ui_pmImgBr);
lv_img_set_src(ui_BRMap, &ui_img_brasil48_png);
lv_obj_set_width( ui_BRMap, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_BRMap, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_BRMap, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_BRMap, LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN );    /// Flags

}
