/* definitions / defines file */
#define DEFS_H

#define SW_VERSION        13   /* i.e. major.minor software version nbr. */

#ifndef NULL
#define NULL  0
#endif
        
// logix ...
#define TRUE    1
#define FALSE    0 
#define DUMMY    0

#define wdogtrig()            #asm("wdr") // call often if Watchdog timer enabled

#define CR                0x0D
#define LF                0x0A  


// LEDs

#define X1 PORTA.0
#define X2 PORTA.1
#define X3 PORTA.2
#define X4 PORTA.3
#define X5 PORTA.4
#define X6 PORTA.5
#define X7 PORTA.6
#define X8 PORTA.7
#define X9 PORTC.7

#define O1 PORTC.6
#define O2 PORTC.5
#define O3 PORTC.4
#define O4 PORTC.3
#define O5 PORTC.2
#define O6 PORTC.1
#define O7 PORTC.0
#define O8 PORTD.7
#define O9 PORTD.4

                          


// Keypad

#define but_sw PINB.0
#define but_ok PINB.1


#define LED1 PORTD.6        // PORTx is used for output
#define SW1 PIND.5          // PINx is used for input
#define TESTP PORTD.4       // test bit durations



