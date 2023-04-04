/*
 * File:   matrix_mainc.c
 * Author: atila
 *
 * Created on January 28, 2023, 8:04 PM
 */


#include <xc.h>
#pragma config FOSC = XT     // Oscillator Selection bits (RC oscillator)
#pragma config WDTE = OFF        // Watchdog Timer Enable bit (WDT enabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config CP = OFF         // FLASH Program Memory Code Protection bits (Code protection off)
#pragma config BOREN = ON       // Brown-out Reset Enable bit (BOR enabled)
#pragma config LVP = ON         // Low Voltage In-Circuit Serial Programming Enable bit (RB3/PGM pin has PGM function; low-voltage programming enabled)
#pragma config CPD = OFF        // Data EE Memory Code Protection (Code Protection off)
#pragma config WRT = ON         // FLASH Program Memory Write Enable (Unprotected program memory may be written to by EECON control)

#define _XTAL_FREQ 4000000

int i, tekrar; 
int satir[]={0x03,0x3A,0x3B,0x3A,0x03};
int sutun[]={0x01,0x02,0x04,0x08,0x10};

void main(void) {
TRISB=0;
TRISC=0;
while(1)
{
    for (tekrar=0;tekrar<10;tekrar++){
        for (i=0;i<5;i++)
        {
            PORTC=sutun[i];
            PORTB=satir[i];
            __delay_ms(10);
            
        }
    }



}


}
