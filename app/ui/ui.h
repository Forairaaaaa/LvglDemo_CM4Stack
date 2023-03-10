// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.2.1
// LVGL VERSION: 8.2.0
// PROJECT: SquareLine_Project

#ifndef _SQUARELINE_PROJECT_UI_H
#define _SQUARELINE_PROJECT_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
#if __has_include("lvgl.h")
#include "lvgl.h"
#elif __has_include("lvgl/lvgl.h")
#include "lvgl/lvgl.h"
#else
#include "lvgl.h"
#endif
#else
#include "lvgl.h"
#endif

void cover_pull_down_Animation(lv_obj_t * TargetObject, int delay);
void logo_popout_Animation(lv_obj_t * TargetObject, int delay);
void cover_pull_up_Animation(lv_obj_t * TargetObject, int delay);
void rotate_loop_Animation(lv_obj_t * TargetObject, int delay);
extern lv_obj_t * ui_Clock;
extern lv_obj_t * ui_PanelBG;
extern lv_obj_t * ui_InfoPanel;
extern lv_obj_t * ui_LabelSysInfos;
extern lv_obj_t * ui_CoverPanel;
extern lv_obj_t * ui_LogoC;
extern lv_obj_t * ui_LogoM;
extern lv_obj_t * ui_Logo4;
extern lv_obj_t * ui_TimeMinute;
extern lv_obj_t * ui_TimeHour;
extern lv_obj_t * ui_ImageWeather;


LV_IMG_DECLARE(ui_img_infobg_png);    // assets\InfoBG.png
LV_IMG_DECLARE(ui_img_coverbg_png);    // assets\CoverBG.png
LV_IMG_DECLARE(ui_img_sunny_png);    // assets\Sunny.png


LV_FONT_DECLARE(ui_font_HarmonyOSSansSCLight);
LV_FONT_DECLARE(ui_font_HarmonyOSSansSCMedium);
LV_FONT_DECLARE(ui_font_HarmonyOSSansSCMedium16);


void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
