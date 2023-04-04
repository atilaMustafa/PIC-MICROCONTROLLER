/*
 * File:   motor.c
 * Author: atila
 *
 * Created on March 25, 2023, 1:36 AM
 */


#include <xc.h>
#pragma config FOSC = XT    // Oscillator Selection bits (RC oscillator)
#pragma config WDTE = ON        // Watchdog Timer Enable bit (WDT enabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config BOREN = ON       // Brown-out Reset Enable bit (BOR enabled)
#pragma config LVP = ON         // Low-Voltage (Single-Supply) In-Circuit Serial Programming Enable bit (RB3/PGM pin has PGM function; low-voltage programming enabled)
#pragma config CPD = OFF        // Data EEPROM Memory Code Protection bit (Data EEPROM code protection off)
#pragma config WRT = OFF        // Flash Program Memory Write Enable bits (Write protection off; all program memory may be written to by EECON control)
#pragma config CP = OFF // Flash Program Memory Code Protection bit (Code protection off)
#define _XTAL_FREQ 4000000
void main(void) {
    TRISB=0x07;
    TRISD=0;
    PORTD=0;
    while(1){
        if(RB0)
        {
            PORTD=5;
        }
            
        if(RB1)
        {
            PORTD=10;
        }
        if(RB2)
        {
            PORTD=0;
        }
        }
    
    }

