// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "ui.h"


// COMPONENT Panel1

lv_obj_t * ui_Panel1_create(lv_obj_t * comp_parent)
{

    lv_obj_t * cui_Panel1;
    cui_Panel1 = lv_obj_create(comp_parent);
    lv_obj_set_width(cui_Panel1, 671);
    lv_obj_set_height(cui_Panel1, 136);
    lv_obj_set_x(cui_Panel1, -5);
    lv_obj_set_y(cui_Panel1, 166);
    lv_obj_set_align(cui_Panel1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(cui_Panel1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(cui_Panel1, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(cui_Panel1, lv_color_hex(0xA8E690), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(cui_Panel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * cui_Label12;
    cui_Label12 = lv_label_create(cui_Panel1);
    lv_obj_set_width(cui_Label12, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_Label12, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(cui_Label12, -262);
    lv_obj_set_y(cui_Label12, 132);
    lv_obj_set_align(cui_Label12, LV_ALIGN_CENTER);

    lv_obj_t ** children = lv_mem_alloc(sizeof(lv_obj_t *) * _UI_COMP_PANEL1_NUM);
    children[UI_COMP_PANEL1_PANEL1] = cui_Panel1;
    children[UI_COMP_PANEL1_LABEL12] = cui_Label12;
    lv_obj_add_event_cb(cui_Panel1, get_component_child_event_cb, LV_EVENT_GET_COMP_CHILD, children);
    lv_obj_add_event_cb(cui_Panel1, del_component_child_event_cb, LV_EVENT_DELETE, children);
    ui_comp_Panel1_create_hook(cui_Panel1);
    return cui_Panel1;
}
