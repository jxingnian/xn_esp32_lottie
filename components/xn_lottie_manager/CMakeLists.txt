idf_component_register(
    SRCS
        "src/xn_lottie_app.c"
        "src/xn_lottie_lvgl.c"
        "src/xn_lottie_panel_spd2010.c"
        "src/xn_lottie_touch_spd2010.c"
    INCLUDE_DIRS
        "include"
    REQUIRES
        lvgl
        spiffs
        esp_lcd
        esp_timer
        driver
        freertos
)

# Create SPIFFS partition image for Lottie animation resources
spiffs_create_partition_image(lottie_spiffs lottie_spiffs FLASH_IN_PROJECT)
