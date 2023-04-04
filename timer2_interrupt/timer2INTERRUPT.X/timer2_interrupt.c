/*
 * File:   timer2_interrupt.c
 * Author: atila
 *
 * Created on March 13, 2023, 8:31 AM
 */


#include <xc.h>
#include <xc.h>
#pragma config FOSC = XT     // Oscillator Selection bits (RC oscillator)
#pragma config WDTE = OFF        // Watchdog Timer Enable bit (WDT enabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config BOREN = ON       // Brown-out Reset Enable bit (BOR enabled)
#pragma config LVP = ON         // Low-Voltage (Single-Supply) In-Circuit Serial Programming Enable bit (RB3/PGM pin has PGM function; low-voltage programming enabled)
#pragma config CPD = OFF        // Data EEPROM Memory Code Protection bit (Data EEPROM code protection off)
#pragma config WRT = OFF        // Flash Program Memory Write Enable bits (Write protection off; all program memory may be written to by EECON control)
#pragma config CP = OFF         // Flash Program Memory Code Protection bit (Code protection off)

#define _XTAL_FREQ 4000000
int sayac;

void __interrupt() KESME(void){
    if (TMR2IF){
        sayac++;
        if(sayac==10){
            sayac=0;
            RB0=RB0 ^1; 
            
        
        }
    
    }
    TMR2IF=0;
    TMR2=0;
}

void main(void) {
    GIE=1;
    PEIE=1;
    TMR2IE=1;
    T2CKPS1=1;
    T2CKPS0=1;
    TOUTPS3=1;
    TOUTPS2=1;
    TOUTPS1=1;
    TOUTPS0=1;
    TMR2=0;
    TRISB=0;
    PORTB=0;
    PR2=255;
    TMR2ON=1;
    while(1){}
    
    
}
