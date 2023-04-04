/*
 * File:   timer1.c
 * Author: atila
 *
 * Created on March 13, 2023, 7:57 AM
 */


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
    if (TMR1IF){
        sayac++;
        if(sayac==20){
            sayac=0;
            RB0=RB0 ^1; 
            
        
        }
    
    }
    TMR1IF=0;
    TMR1=15536;
}
void main(void) {
    sayac=0;
    GIE=1;
    PEIE=1;
    TMR1IE=1;
    T1CKPS1=0;
    T1CKPS0=0;
    TMR1CS=0;
    TMR1ON=1;
    TMR1=15536;
    TRISB=0;
    PORTB=0;
    
    while(1){
    
    
    
    }
}
