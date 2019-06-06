#ifndef _MENU_H
#define _MENU_H
/*
+++   Nima Askari
+++   www.github.com/NimaLTD
+++   www.instagram.com/github.NimaLTD 
+++   Version: 1.0.0
*/

#include "lcd.h"
//####################################################################################################
typedef enum
{
  Menu_Key_None=0,
  Menu_Key_Up=1,
  Menu_Key_Down=2,
  Menu_Key_Back=4,
  Menu_Key_Select=8  
  
}Menu_Key_t;

typedef enum
{
  Menu_CurrentMode_None,
  Menu_CurrentMode_StaticText,
  Menu_CurrentMode_VolatileText,
  Menu_CurrentMode_ScrollingVertical,  
  
}Menu_CurrentMode_t;
//####################################################################################################
void  Menu_Init(void);
void  Menu_Loop(void);
//####################################################################################################
void  Menu_DeleteCurrent(void);
void  Menu_CreateStaticText(void callback(Menu_Key_t Menu_key),const char *text);
void  Menu_CreateVolatileText(void callback(Menu_Key_t),char *text);
void  Menu_CreateScrollingVertical(void callback(Menu_Key_t),uint8_t ItemsCnt,...);
//####################################################################################################
#endif
