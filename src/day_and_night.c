#include "global.h"
#include "day_and_night.h"
#include "rtc.h"

/* End hours for each of the timelapses */
#define NIGHTFALL_END_HOUR        19
#define DAWN_END_HOUR              7       

bool8 IsDayTime()
{
    if (gLocalTime.hours >= DAWN_END_HOUR && gLocalTime.hours < NIGHTFALL_END_HOUR)
        return TRUE;
    return FALSE;
}

bool8 IsNightTime()
{
    return !IsDayTime();
}