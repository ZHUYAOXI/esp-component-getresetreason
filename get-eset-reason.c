#include "get-reset-reason.h"

void print_reset_reason(int reason)
{
    switch (reason)
    {
    case 1:
        printf("POWERON_RESET\r\n");
        break; /**<1,  Vbat power on reset*/
    case 3:
        printf("SW_RESET\r\n");
        break; /**<3,  Software reset digital core*/
    case 4:
        printf("OWDT_RESET\r\n");
        break; /**<4,  Legacy watch dog reset digital core*/
    case 5:
        printf("DEEPSLEEP_RESET\r\n");
        break; /**<5,  Deep Sleep reset digital core*/
    case 6:
        printf("SDIO_RESET\r\n");
        break; /**<6,  Reset by SLC module, reset digital core*/
    case 7:
        printf("TG0WDT_SYS_RESET\r\n");
        break; /**<7,  Timer Group0 Watch dog reset digital core*/
    case 8:
        printf("TG1WDT_SYS_RESET\r\n");
        break; /**<8,  Timer Group1 Watch dog reset digital core*/
    case 9:
        printf("RTCWDT_SYS_RESET\r\n");
        break; /**<9,  RTC Watch dog Reset digital core*/
    case 10:
        printf("INTRUSION_RESET\r\n");
        break; /**<10, Instrusion tested to reset CPU*/
    case 11:
        printf("TGWDT_CPU_RESET\r\n");
        break; /**<11, Time Group reset CPU*/
    case 12:
        printf("SW_CPU_RESET\r\n");
        break; /**<12, Software reset CPU*/
    case 13:
        printf("RTCWDT_CPU_RESET\r\n");
        break; /**<13, RTC Watch dog Reset CPU*/
    case 14:
        printf("EXT_CPU_RESET\r\n");
        break; /**<14, for APP CPU, reseted by PRO CPU*/
    case 15:
        printf("RTCWDT_BROWN_OUT_RESET\r\n");
        break; /**<15, Reset when the vdd voltage is not stable*/
    case 16:
        printf("RTCWDT_RTC_RESET\r\n");
        break; /**<16, RTC Watch dog reset digital core and rtc module*/
    default:
        printf("NO_MEAN\r\n");
    }
}

void verbose_print_reset_reason(int reason)
{
    switch (reason)
    {
    case 1:
        printf("Vbat power on reset\r\n");
        break;
    case 3:
        printf("Software reset digital core\r\n");
        break;
    case 4:
        printf("Legacy watch dog reset digital core\r\n");
        break;
    case 5:
        printf("Deep Sleep reset digital core\r\n");
        break;
    case 6:
        printf("Reset by SLC module, reset digital core\r\n");
        break;
    case 7:
        printf("Timer Group0 Watch dog reset digital core\r\n");
        break;
    case 8:
        printf("Timer Group1 Watch dog reset digital core\r\n");
        break;
    case 9:
        printf("RTC Watch dog Reset digital core\r\n");
        break;
    case 10:
        printf("Instrusion tested to reset CPU\r\n");
        break;
    case 11:
        printf("Time Group reset CPU\r\n");
        break;
    case 12:
        printf("Software reset CPU\r\n");
        break;
    case 13:
        printf("RTC Watch dog Reset CPU\r\n");
        break;
    case 14:
        printf("for APP CPU, reseted by PRO CPU\r\n");
        break;
    case 15:
        printf("Reset when the vdd voltage is not stable\r\n");
        break;
    case 16:
        printf("RTC Watch dog reset digital core and rtc module\r\n");
        break;
    default:
        printf("NO_MEAN\r\n");
    }
}
