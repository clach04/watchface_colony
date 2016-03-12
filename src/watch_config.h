#pragma once

#define BG_IMAGE RESOURCE_ID_COLONY_LOGO
#define IMAGE_RES_X 132  /* NOTE if image res changes - this needs to change too! */
#define IMAGE_RES_Y 132  /* NOTE if image res changes - this needs to change too! */

//DEFAULT_BACKGROUND_COLOR GColorRed

#define USE_GENERIC_MAIN
#undef REMOVE_LEADING_ZERO_FROM_TIME  /* 12 hour display will not have a leading "0" if this is defined */
#undef FONT_NAME
#undef FONT_SYSTEM_NAME  /* the default font system will be used */
#undef DEBUG_TIME

#if defined(PBL_HEALTH)
    #define USE_HEALTH
    #undef USE_HEALTH
    #define HEALTH_POS GRect(0, 40, 144, 168)  // RECT
    //#define UPDATE_HEALTH_ON_ACTIVITY  // If not set, only updates step count display once per minute
#endif /* PBL_HEALTH */

#define DATE_FMT_STR "%a\n%b\n%d"  /* TODO review %d for day */
#define MAX_DATE_STR "Thu\n00\nAug"  /* if custom version of DATE_FMT_STR is set, MAX_DATE_STR  needs to be updated too */

#define DRAW_BATTERY
//#define DRAW_SMALL_BATTERY
#define NO_DATE

#ifdef PBL_COLOR
    #define DEFAULT_BACKGROUND_COLOR GColorRed
#endif /* PBL_COLOR */

#ifdef PBL_ROUND /* 180x180 */
    /* TODO */
#else /* PBL_RECT 144x168*/
    /* Image at top of screen, centered horizontally */
    #define BG_IMAGE_GRECT GRect((144 - IMAGE_RES_X) / 2, 0,  IMAGE_RES_X, IMAGE_RES_Y)  // use same size as image. On Aplite can determine this at runtime but not Basalt

    //#define CLOCK_POS GRect(0, 136, 144, 168) /* bottom of screen for FONT_KEY_BITHAM_30_BLACK */
    #define CLOCK_POS GRect(0, 118, 144, 168) /* bottom of screen for FONT_KEY_ROBOTO_BOLD_SUBSET_49 with one pixel border on bottom */

    //#define BT_DISCONNECT_IMAGE_GRECT GRect(144 - 20, 138, 20, 30)
    #define BT_DISCONNECT_IMAGE_GRECT GRect(144 - 20, 168 - (2 * 30 + 4), 20, 30)

    #define BT_POS GRect(0, 120, 144, 168) /* probably taller than really needed */
    #define DATE_POS GRect(0, 0, 144, 168) /* probably taller than really needed */
    #ifdef DRAW_BATTERY
        #define BAT_POS GRect(3, 3, 144, 168)
    #else
        #define BAT_POS GRect(0, 0, 144, 168) /* probably taller than really needed */
    #endif /* DRAW_BATTERY */
#endif /* end of Round or rectangle */

/* for screen shots and font testing
#define DEBUG_TIME
#define DEBUG_TIME_SCREENSHOT
 */
