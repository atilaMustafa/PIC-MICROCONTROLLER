/*
 * File:   stepMotor.c
 * Author: atila
 *
 * Created on March 25, 2023, 6:42 PM
 */


#include <xc.h>
#pragma config FOSC = XT     // Oscillator Selection bits (RC oscillator)
#pragma config WDTE = OFF        // Watchdog Timer (WDT enabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (Power-up Timer is disabled)
#pragma config CP = OFF         // Code Protection bit (Code protection disabled)
#define _XTAL_FREQ 4000000 

int i , dizi[8]={1,3,2,6,4,12,8,9};

void main(void) {

    TRISA=1;
    TRISB=0;
    i=0;
    while(1)
    {
        PORTB=dizi[i];
        __delay_ms(2000);
        if(RA0==0){
            if (i==7){
                i=-1;
            }
            i++;
                
            
        }    
        else {
            if(i==0){i=8;}
            i--;
        }
        
     
    
    
    
    
    }


}
