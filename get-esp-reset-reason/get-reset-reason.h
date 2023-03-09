#ifdef __cplusplus

extern "C"{
#endif // DEBUG
#ifndef _GET_ESP_RESET_REASON_H
#define _GET_ESP_RESET_REASON_H

#include <stdio.h>

#ifdef ESP_IDF_VERSION_MAJOR // IDF 4+
#if CONFIG_IDF_TARGET_ESP32  // ESP32/PICO-D4
#include "esp32/rom/rtc.h"
#elif CONFIG_IDF_TARGET_ESP32S2
#include "esp32s2/rom/rtc.h"
#elif CONFIG_IDF_TARGET_ESP32C3
#include "esp32c3/rom/rtc.h"
#elif CONFIG_IDF_TARGET_ESP32S3
#include "esp32s3/rom/rtc.h"
#else
#error Target CONFIG_IDF_TARGET is not supported
#endif
#else // ESP32 Before IDF 4.0
#include "rom/rtc.h"
#endif

#define uS_TO_S_FACTOR 1000000 /* Conversion factor for micro seconds to seconds */


void print_reset_reason(int reason);
void verbose_print_reset_reason(int reason);

// print_reset_reason(rtc_get_reset_reason(0));
// print_reset_reason(rtc_get_reset_reason(1));
// verbose_print_reset_reason(rtc_get_reset_reason(0));
// verbose_print_reset_reason(rtc_get_reset_reason(1));

#endif // !_GET_ESP_RESET_REASON_H
#ifdef __cplusplus
}

#endif // DEBUG