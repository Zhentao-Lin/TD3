/*
 * @Date: 2024-04-07 23:49:04
 * @LastEditors: AaronChu
 * @LastEditTime: 2024-04-19 23:33:53
 */


#ifndef MESSAGE_H
#define MESSAGE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

    // 定义所有的消息类型
#define MSG_WIFI_IS_CONNECTED     1
#define MSG_WIFI_NOT_CONNECTED     2
#define MSG_TIME_SET    3
#define MSG_CHARGE_SET 4
#define MSG_BAT_SET 5
#define MSG_SDCARD_MOUNT 6

#define MSG_BAT1_SET 7
#define MSG_BAT2_SET 8
#define MSG_BAT3_SET 9

#define MSG_MAC_SET 10

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif 
