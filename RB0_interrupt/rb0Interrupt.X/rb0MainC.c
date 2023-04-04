/*
 * File:   rb0MainC.c
 * Author: atila
 *
 * Created on January 28, 2023, 10:45 PM
 */


#include <xc.h>
#pragma config FOSC = XT     // Oscillator Selection bits (RC oscillator)
#pragma config WDTE = ON        // Watchdog Timer (WDT enabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (Power-up Timer is disabled)
#pragma config CP = OFF         // Code Protection bit (Code protection disabled)

#define _XTAL_FREQ 4000000

void __interrupt() KESME(void)
{

    if (INTF)
    {
        PORTA=1;
        __delay_ms(1000);
        PORTA=0;
        __delay_ms(1000);

    }
    INTF=0;


}
int i;
void main(void) {
    GIE=1;
    INTE=1;
    TRISB=1;
    TRISA=0;
    PORTA=0;
    while(1)
    {
        PORTB=0b01111110; 
        __delay_ms(1000);
        PORTB=0b00000000; 
        __delay_ms(2000);
    
    
    }
    
}
