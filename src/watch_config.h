#pragma once

#define USE_GENERIC_MAIN
#undef REMOVE_LEADING_ZERO_FROM_TIME  /* 12 hour display will not have a leading "0" if this is defined */
#undef FONT_NAME
#undef FONT_SYSTEM_NAME  /* the default font system will be used */
#undef DEBUG_TIME

#if defined(PBL_HEALTH)
    #define USE_HEALTH
    //#define UPDATE_HEALTH_ON_ACTIVITY  /* If not set, only updates step count display once per minute */
#endif /* PBL_HEALTH */

//#define DRAW_BATTERY

#ifdef PBL_ROUND /* 180x180 */
/*TODO center/move right*/
    #define CLOCK_POS GRect(0, 52, 180, 180) /* probably taller than really needed */
    #define HEALTH_POS GRect(0, 40, 180, 180)
    #define BT_POS GRect(0, 100, 180, 180) /* probably taller than really needed */

    #define DATE_ALIGN GTextAlignmentCenter
    #define DATE_POS GRect(0, 120, 180, 180) /* probably taller than really needed */

    #define BAT_ALIGN GTextAlignmentCenter
    #define BAT_POS GRect(0, 140, 180, 180) /* probably taller than really needed */
#else /* PBL_RECT 144x168*/
    #define CLOCK_POS GRect(0, 52, 144, 168) /* probably taller than really needed */
    #define HEALTH_POS GRect(0, 40, 144, 168)
    #define BT_POS GRect(0, 120, 144, 168) /* probably taller than really needed */
    #define DATE_POS GRect(0, 140, 144, 168) /* probably taller than really needed */
    #define BAT_POS GRect(0, 140, 144, 168) /* probably taller than really needed */
#endif /* end of Round or rectangle */

/* for screen shots and font testing
#define DEBUG_TIME
#define DEBUG_TIME_SCREENSHOT
 */
