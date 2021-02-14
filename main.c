#include <xc.h>

#pragma config FEXTOSC = OFF
#pragma config RSTOSC = HFINT32
#pragma config CLKOUTEN = OFF
#pragma config CSWEN = ON
#pragma config FCMEN = OFF
#pragma config WDTE = OFF
#pragma config PWRTE = OFF
#pragma config CP = OFF
#define _XTAL_FREQ 32000000

void main(void) {
    TRISBbits.TRISB7 = 0;
    ANSELB = 0b00000000;
    while(1) {
        PORTBbits.RB7 = 1;
        __delay_ms(1000);
        PORTBbits.RB7 = 0;
        __delay_ms(1000);
    }
    return;
}
