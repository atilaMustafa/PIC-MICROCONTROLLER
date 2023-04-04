/*
 * File:   led_project.c
 * Author: atila
 *
 * Created on January 28, 2023, 2:43 PM
 */


#include <xc.h>
#pragma config FOSC = XT     // Oscillator Selection bits (RC oscillator)
#pragma config WDTE = ON        // Watchdog Timer (WDT enabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (Power-up Timer is disabled)
#pragma config CP = OFF         // Code Protection bit (Code protection disabled)

#define _XTAL_FREQ 4000000
void main(void) {
    TRISB= 0x00;
    TRISA= 0x01;
    
    while(1)
    {
        if (RA0==1) PORTB= 0x0F;
        if (RA0==0) PORTB= 0xF0;
    
    
    
    }
    
    
    
    
}
