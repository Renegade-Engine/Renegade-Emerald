#include "global.h"
#include "day_and_night.h"
#include "rtc.h"

/* End hours for each of the timelapses */
#define DAY_END_HOUR        19      //08 - 19
#define NIGHT_END_HOUR      0       //21 - 00

bool8 IsDayTime()
{
    if (gLocalTime.hours >= NIGHT_END_HOUR && gLocalTime.hours < DAY_END_HOUR)
        return TRUE;
    return FALSE;
}

bool8 IsNightTime()
{
    return !IsDayTime();
}