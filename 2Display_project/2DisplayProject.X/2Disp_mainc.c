/*
 * File:   2Disp_mainc.c
 * Author: atila
 *
 * Created on January 28, 2023, 4:51 PM
 */


#include <xc.h>
#pragma config FOSC = XT     // Oscillator Selection bits (RC oscillator)
#pragma config WDTE = OFF        // Watchdog Timer (WDT enabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (Power-up Timer is disabled)
#pragma config CP = OFF         // Code Protection bit (Code protection disabled)

#define _XTAL_FREQ 4000000
int birler,onlar,sayi, dizi[10]= {0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7C,0x07,0x7F,0x6F};
void main(void) {
    TRISA=0;
    TRISB=0;
    while(1)
    {
        for(onlar=0;onlar<10;onlar++)
        {
            for (birler=0;birler<10;birler++)
            {
                for(sayi=0;sayi<5;sayi++)
                {
                    RA0=0;
                    RA1=1;
                    PORTB=dizi[birler];
                    __delay_ms(10);
                    
                    RA0=1;
                    RA1=0;
                    PORTB=dizi[onlar];
                    __delay_ms(10);
                
                }
            }
        
        
       
        }
    
    
    
    
    }
    
    
}
