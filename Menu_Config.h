#ifndef _MENU_CONFIG_H
#define _MENU_CONFIG_H

#define   _MENU_MAX_ITEMS             20 

//  Active by GPIO_PIN_SET
#define   _MENU_BEEP_ENABLE           1
#define   _MENU_BEEP_GPIO             BUZZ_GPIO_Port
#define   _MENU_BEEP_PIN              BUZZ_Pin


//  Active by GPIO_PIN_RESET , Use Pullup reseistor
#define   _MENU_KEY_UP_GPIO           KEY_UP_GPIO_Port
#define   _MENU_KEY_UP_PIN            KEY_UP_Pin

#define   _MENU_KEY_DOWN_GPIO         KEY_DOWN_GPIO_Port
#define   _MENU_KEY_DOWN_PIN          KEY_DOWN_Pin

#define   _MENU_KEY_BACK_GPIO         KEY_BACK_GPIO_Port
#define   _MENU_KEY_BACK_PIN          KEY_BACK_Pin

#define   _MENU_KEY_SELECT_GPIO       KEY_SELECT_GPIO_Port
#define   _MENU_KEY_SELECT_PIN        KEY_SELECT_Pin


#endif
