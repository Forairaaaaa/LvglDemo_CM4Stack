// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.2.1
// LVGL VERSION: 8.2.0
// PROJECT: SquareLine_Project

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
void cover_pull_down_Animation(lv_obj_t * TargetObject, int delay);
void logo_popout_Animation(lv_obj_t * TargetObject, int delay);
void cover_pull_up_Animation(lv_obj_t * TargetObject, int delay);
void rotate_loop_Animation(lv_obj_t * TargetObject, int delay);
lv_obj_t * ui_Clock;
lv_obj_t * ui_PanelBG;
lv_obj_t * ui_InfoPanel;
lv_obj_t * ui_LabelSysInfos;
lv_obj_t * ui_CoverPanel;
lv_obj_t * ui_LogoC;
lv_obj_t * ui_LogoM;
lv_obj_t * ui_Logo4;
lv_obj_t * ui_TimeMinute;
lv_obj_t * ui_TimeHour;
lv_obj_t * ui_ImageWeather;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////
void cover_pull_down_Animation(lv_obj_t * TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 600);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_0, 0, 117);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_ease_out);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_y);
    lv_anim_start(&PropertyAnimation_0);

}
void logo_popout_Animation(lv_obj_t * TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 500);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_0, 0, 105);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_overshoot);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_y);
    lv_anim_start(&PropertyAnimation_0);

}
void cover_pull_up_Animation(lv_obj_t * TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 500);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_0, 0, -117);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_overshoot);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_y);
    lv_anim_start(&PropertyAnimation_0);

}
void rotate_loop_Animation(lv_obj_t * TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 10000);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_image_angle);
    lv_anim_set_values(&PropertyAnimation_0, 0, 3600);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, LV_ANIM_REPEAT_INFINITE);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_image_angle);
    lv_anim_start(&PropertyAnimation_0);

}

///////////////////// FUNCTIONS ////////////////////

///////////////////// SCREENS ////////////////////
void ui_Clock_screen_init(void)
{
    ui_Clock = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Clock, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_PanelBG = lv_obj_create(ui_Clock);
    lv_obj_set_width(ui_PanelBG, lv_pct(150));
    lv_obj_set_height(ui_PanelBG, lv_pct(150));
    lv_obj_set_align(ui_PanelBG, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_PanelBG, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_PanelBG, lv_color_hex(0xDFDFDF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_PanelBG, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_InfoPanel = lv_img_create(ui_Clock);
    lv_img_set_src(ui_InfoPanel, &ui_img_infobg_png);
    lv_obj_set_width(ui_InfoPanel, LV_SIZE_CONTENT);   /// 240
    lv_obj_set_height(ui_InfoPanel, LV_SIZE_CONTENT);    /// 140
    lv_obj_set_x(ui_InfoPanel, 0);
    lv_obj_set_y(ui_InfoPanel, 70);
    lv_obj_set_align(ui_InfoPanel, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_InfoPanel, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_InfoPanel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_LabelSysInfos = lv_label_create(ui_InfoPanel);
    lv_obj_set_width(ui_LabelSysInfos, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelSysInfos, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelSysInfos, -22);
    lv_obj_set_y(ui_LabelSysInfos, 12);
    lv_obj_set_align(ui_LabelSysInfos, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelSysInfos, "> hostname: cm4stack\n> ip: 192.168.233.233\n> cpu: 0.00\n> ram: 00%");
    lv_obj_set_style_text_color(ui_LabelSysInfos, lv_color_hex(0x929292), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelSysInfos, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelSysInfos, &ui_font_HarmonyOSSansSCMedium16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_CoverPanel = lv_img_create(ui_Clock);
    lv_img_set_src(ui_CoverPanel, &ui_img_coverbg_png);
    lv_obj_set_width(ui_CoverPanel, LV_SIZE_CONTENT);   /// 260
    lv_obj_set_height(ui_CoverPanel, LV_SIZE_CONTENT);    /// 334
    lv_obj_set_x(ui_CoverPanel, 0);
    lv_obj_set_y(ui_CoverPanel, -134);
    lv_obj_set_align(ui_CoverPanel, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_CoverPanel, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_CoverPanel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_LogoC = lv_label_create(ui_CoverPanel);
    lv_obj_set_width(ui_LogoC, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LogoC, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LogoC, -73);
    lv_obj_set_y(ui_LogoC, -175);
    lv_obj_set_align(ui_LogoC, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LogoC, "C");
    lv_obj_set_style_text_color(ui_LogoC, lv_color_hex(0x929292), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LogoC, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LogoC, &ui_font_HarmonyOSSansSCMedium, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LogoM = lv_label_create(ui_CoverPanel);
    lv_obj_set_width(ui_LogoM, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LogoM, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LogoM, 1);
    lv_obj_set_y(ui_LogoM, -175);
    lv_obj_set_align(ui_LogoM, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LogoM, "M");
    lv_obj_set_style_text_color(ui_LogoM, lv_color_hex(0x929292), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LogoM, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LogoM, &ui_font_HarmonyOSSansSCMedium, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Logo4 = lv_label_create(ui_CoverPanel);
    lv_obj_set_width(ui_Logo4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Logo4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Logo4, 72);
    lv_obj_set_y(ui_Logo4, -175);
    lv_obj_set_align(ui_Logo4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Logo4, "4");
    lv_obj_set_style_text_color(ui_Logo4, lv_color_hex(0x929292), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Logo4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Logo4, &ui_font_HarmonyOSSansSCMedium, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TimeMinute = lv_label_create(ui_CoverPanel);
    lv_obj_set_width(ui_TimeMinute, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TimeMinute, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TimeMinute, -60);
    lv_obj_set_y(ui_TimeMinute, 109);
    lv_obj_set_align(ui_TimeMinute, LV_ALIGN_CENTER);
    lv_label_set_text(ui_TimeMinute, "45");
    lv_obj_set_style_text_color(ui_TimeMinute, lv_color_hex(0x8D8D8D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TimeMinute, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_TimeMinute, &ui_font_HarmonyOSSansSCLight, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TimeHour = lv_label_create(ui_CoverPanel);
    lv_obj_set_width(ui_TimeHour, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TimeHour, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TimeHour, -61);
    lv_obj_set_y(ui_TimeHour, 33);
    lv_obj_set_align(ui_TimeHour, LV_ALIGN_CENTER);
    lv_label_set_text(ui_TimeHour, "11");
    lv_obj_set_style_text_color(ui_TimeHour, lv_color_hex(0x8D8D8D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TimeHour, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_TimeHour, &ui_font_HarmonyOSSansSCLight, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ImageWeather = lv_img_create(ui_CoverPanel);
    lv_img_set_src(ui_ImageWeather, &ui_img_sunny_png);
    lv_obj_set_width(ui_ImageWeather, LV_SIZE_CONTENT);   /// 108
    lv_obj_set_height(ui_ImageWeather, LV_SIZE_CONTENT);    /// 108
    lv_obj_set_x(ui_ImageWeather, 50);
    lv_obj_set_y(ui_ImageWeather, 64);
    lv_obj_set_align(ui_ImageWeather, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ImageWeather, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_ImageWeather, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Clock_screen_init();
    lv_disp_load_scr(ui_Clock);
}
