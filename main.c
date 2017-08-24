/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC24 / dsPIC33 / PIC32MM MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC24 / dsPIC33 / PIC32MM MCUs - pic24-dspic-pic32mm : v1.35
        Device            :  PIC24FJ128GA010
    The generated drivers are tested against the following:
        Compiler          :  XC16 1.31
        MPLAB             :  MPLAB X 3.60
*/

/*
    (c) 2016 Microchip Technology Inc. and its subsidiaries. You may use this
    software and any derivatives exclusively with Microchip products.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
    WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
    TERMS.
*/


/*
 * FileName: main.c
 * 
 * Name: Lab1, PIC24 Oscillator configuration and GitHu with MPLABX IDE
 * 
 * Description: The following is a little program 
 * which includes coding with my lab 1. 
 * 
 * This is a MPLAB file using FRC PLL mode and JTAG OFF.
 * 
 * This consist of a simple toggle of an LED (RA4) by using XOR.
 * 
 * I added two symbolic constants just to test with other LED's:
 * One with all Zeroes to set all LEDs as OUTPUT or LOW (ZEROES). 
 * One with all Ones to set all LEDs as INPUT or HIGH (ONES).
 * 
 * I also added a macro named "delay" to show the toggling of the light
 * to the naked eye.
 * 
 * Using the following code, I am able to make a connection with the Bartek3
 * to gather some information with another connection to the oscilloscope.
 * 
 * Revision History:
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * Author      Date             Comments on this revision
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * BC          8/24/2017        v1.0.0
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 */



//Symbolic Constants & Macros
#define ONES            0b11111111                            // Sym Constant
#define ZEROES          0b00000000                            // Sym Constant
#define delay           for( x=0; x < 1000000;  x++);         // MACRO
long x = 0;                                                   // initialize X

//Libraries
#include "mcc_generated_files/mcc.h"
#include <stdio.h>
#include <stdlib.h>
#include <xc.h>

//Code
int main(void)
{
    // initialize the device
    SYSTEM_Initialize(); 
    while (1)
    {   
      _TRISA7 = 0;                                            // OUTPUT
         //delay;                                             // DELAY
      _LATA7 = _LATA7^1;                                      // TOGGLE WITH XOR
    }

}
/**
 End of File
*/