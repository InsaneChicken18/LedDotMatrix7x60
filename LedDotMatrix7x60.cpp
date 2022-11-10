//----------------------------------------------------------------
// LedDotMatrix7x60.cpp - Source File
// Library for Displaying Characters on MAX7219 Dot Matrix Display
// by: Anas Kuzechie (May 20, 2022)
//----------------------------------------------------------------
#include <Arduino.h>
#include <LedDotMatrix7x60.h>
#include "LedDotMatrix7x60_data_bytes.h"
byte colls[5] ={
  0b11011111, 0b11111011, 0b111110111, 0b01111111, 0b11111110
};
//========================================================================
// Constructor
//========================================================================
LedDotMatrix7x60::LedDotMatrix7x60(int DIN, int CS, int CLK)
{
  pinMode(DIN, OUTPUT); _DIN = DIN;
  pinMode(CS, OUTPUT); _CS = CS;
  pinMode(CLK, OUTPUT); _CLK = CLK;
}
//========================================================================
// Function Prototypes
//========================================================================
void Write(byte, byte, byte, byte, byte, byte, byte, byte, byte, byte, byte, byte, byte);
void SPI_send(byte);
//========================================================================
// Methods
//========================================================================
//========================================================================
void LedDotMatrix7x60::Clear()
{
  for(byte i=0; i<5; i++) Write(colls[i],0,0,0,0,0,0,0,0,0,0,0,0);
}
//========================================================================
void LedDotMatrix7x60::Display(byte dspl_1[],byte dspl_2[],byte dspl_3[],byte dspl_4[],byte dspl_5[],byte dspl_6[],
                                byte dspl_7[],byte dspl_8[],byte dspl_9[],byte dspl_10[],byte dspl_11[],byte dspl_12[])
{

  for(byte i=0; i<5; i++)
    Write(colls[i],dspl_1[i],dspl_2[i],dspl_3[i],dspl_4[i],dspl_5[i],dspl_6[i],
            dspl_7[i],dspl_8[i],dspl_9[i],dspl_10[i],dspl_11[i],dspl_12[i]);

}
//========================================================================
//========================================================================

//========================================================================
void LedDotMatrix7x60::Write(byte c, byte d1, byte d2, byte d3, 
           byte d4, byte d5, byte d6, byte d7, byte d8, byte d9, 
           byte d10, byte d11, byte d12)
{

  digitalWrite(_CS, LOW);
  //PORTD &= ~(1<<PD3);                   //CS low
  //-----------------------------------------------------------------
  SPI_send(d12);            //command & data for digit 12
  SPI_send(d11);            //command & data for digit 11
  SPI_send(d10);            //command & data for digit 10
  SPI_send(d9);             //command & data for digit 9
  SPI_send(d8);             //command & data for digit 8
  SPI_send(d7);             //command & data for digit 7
  SPI_send(d6);             //command & data for digit 6
  SPI_send(d5);             //command & data for digit 5
  SPI_send(d4);             //command & data for digit 4
  SPI_send(d3);             //command & data for digit 3
  SPI_send(d2);             //command & data for digit 2
  SPI_send(d1);             //command & data for digit 1
  SPI_send(c);              //collumn
  //-----------------------------------------------------------------
  //PORTD |= (1<<PD3);                    //CS high
  digitalWrite(_CS, HIGH);
}
//========================================================================
void LedDotMatrix7x60::SPI_send(byte data)
{
  for(byte i=0; i<8; i++)
  {
    digitalWrite(_CLK, LOW);
     //PORTD &= ~(1<<PD4);                 //CLK low
    //----------------------------------------------------------------
    if(data & 0x80) digitalWrite(_DIN, HIGH);//low if MSB = 1
    else digitalWrite(_DIN, LOW);//low if MSB = 0
    //----------------------------------------------------------------
    //PORTD |= (1<<PD4);                  //CLK high
    digitalWrite(_CLK, HIGH);
      data = data << 1;                   //shift data left one bit
  }  
}
//========================================================================