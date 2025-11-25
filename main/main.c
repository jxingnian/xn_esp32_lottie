/*
 * @Author: 星年 jixingnian@gmail.com
 * @Date: 2025-11-22 13:43:50
 * @LastEditors: xingnian jixingnian@gmail.com
 * @LastEditTime: 2025-11-25 15:12:17
 * @FilePath: \xn_esp32_lottie\main\main.c
 * @Description: esp32 lottie动画播放 By.星年
 */

#include <stdio.h>
#include <inttypes.h>
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "xn_lottie_manager.h"
#include "xn_wifi_manage.h"

void app_main(void)
{
    printf("esp32 lottie动画播放 By.星年\n");
    // 初始化 Lottie 应用（内部完成 SPIFFS / LVGL / 屏幕等初始化）
    esp_err_t ret_lottie = xn_lottie_app_init(NULL);
    (void)ret_lottie;

    // 初始化 WiFi 管理
    esp_err_t ret = wifi_manage_init(NULL);
    (void)ret; 
}
