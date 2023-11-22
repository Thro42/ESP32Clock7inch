SET(SOURCES screens/ui_TimeWindow.c
    ui.c
    components/ui_comp_hook.c
    ui_helpers.c
    images/ui_img_temperatur64_png.c
    images/ui_img_outdoor48gruen_png.c
    images/ui_img_haus48_png.c
    images/ui_img_feuchte48_png.c
    images/ui_img_brasil48_png.c
    images/ui_img_feuchte64_png.c
    images/ui_img_outdoor48_png.c
    images/ui_img_temperatur128_png.c
    fonts/ui_font_Temp68.c
    fonts/ui_font_Temp72.c
    fonts/ui_font_Time128.c
    fonts/ui_font_Temp65.c)

add_library(ui ${SOURCES})
