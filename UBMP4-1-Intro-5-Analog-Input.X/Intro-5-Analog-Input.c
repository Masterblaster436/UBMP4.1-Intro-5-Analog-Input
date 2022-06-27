#include    "xc.h"              // Microchip XC8 compiler include file
#include    "stdint.h"          // Include integer definitions
#include    "stdbool.h"         // Include Boolean (true/false) definitions

#include    "UBMP410.h"         // Include UBMP4.1 constant and function definitions
#include    "Simple-Serial.h"   // Include simple serial debug function definitions
#include    "lcd.h"             // LCD Functions
#include    "time.h"            // Include time 

#define _XTAL_FREQ 8000000

// void Time()
// {
//     time_t t;   // not a primitive datatype
//     time(&t);
//     printf("\n current time is : %s",ctime(&t));
// }

int main()
{
    unsigned int a;
    //TRISD = 0x00;
    Lcd_Init();
    while(1)
    {
        Lcd_Clear();
        Lcd_Set_Cursor(1,1);
        Lcd_Write_String("Temperature:");
        Lcd_Set_Cursor(2,1);
        Lcd_Write_String("Time:");
    }
    return 0;


    // Activate bootloader if SW1 is pressed.
if(SW1 == 0)
{
    RESET();
}
}
