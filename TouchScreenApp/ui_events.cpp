// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "ui.h"
#include "Arduino.h"

void startStopButtonClicked(lv_event_t * e)
{
	// Your code here
}

void turnOnOffHeatingElement(lv_event_t * e)
{
	lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t * obj = lv_event_get_target(e);
	int i = lv_dropdown_get_selected(ui_currentSetV);
	Serial.print("current selected V level id = ");
	Serial.print(i);

	if (lv_obj_has_state(obj, LV_STATE_CHECKED))
		Serial.println(" , heating is ON");
	else
		Serial.println(" , heating is OFF");
/*
	lv_obj_add_state(cb, LV_STATE_CHECKED);
	lv_obj_remove_state(cb, LV_STATE_CHECKED);
	lv_obj_add_state(cb, LV_STATE_CHECKED | LV_STATE_DISABLED);
*/
}

void setVibrationLevel(lv_event_t * e)
{
	// Your code here
}

void saveV_Levels(lv_event_t * e)
{
	// Your code here
}

void loadV_Levels(lv_event_t * e)
{
	// Your code here
}

void saveFanMaxLevel(lv_event_t * e)
{
	// Your code here
}

void loadFanMaxLevel(lv_event_t * e)
{
	// Your code here
}

void turnOnOffCoolingFan(lv_event_t * e)
{
	// Your code here
}

void reset_btn_clicked(lv_event_t * e)
{
	// Your code here
}
