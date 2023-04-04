/*
 * File:   pwm_project.c
 * Author: atila
 *
 * Created on March 25, 2023, 12:32 AM
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
    
    TRISC= 0;
    CCP1M3=1;
    CCP1M2=1;
    PR2=249;
    CCPR1L=125;
    T2CKPS1=0;
    T2CKPS0=1;
    TMR2ON=1;
    while(1){}
}
