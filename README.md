# 4 Pins LCD-Character Library for STM32 HAL
#### Converted https://github.com/MaJerle library to HAL
<br />
 I use Stm32f103c8 and Keil Compiler and Stm32CubeMX wizard.
<br />
Please Do This ...
<br />
<br />
1)  Select "General peripheral Initalizion as a pair of '.c/.h' file per peripheral" on project settings.
<br />
2) Config your LCD Pins on CubeMX.
<br />
3) Config your LCD pins on "LCD_Config.h".
<br />
4) Call LCD_Init() and Enjoy!!

```
#include "LCD.h"
.
.
.
int main()
{
  .
  .
  LCD_Init(); 
  LCD_Puts(0,0,"TEST");
  .
  .
}
```
