//-------------------------------------------------
// Count from 00 to 99 on LedDotMatrix7x60
// using LedDotMatrix7x60.h Library
// by: Anas Kuzechie
//-------------------------------------------------
#include <LedDotMatrix7x60.h>
#include "LedDotMatrix7x60_Letters.h"
#include <time.h> 
#include <Wire.h>
//-----------------------------
//DIN-bn, CS-gn, CLK-or
LedDotMatrix7x60 disp(
  
);
long times;
int num = 0;
int showTime = 1500;


//========================================================
void setup()
{
  disp.Clear();
  delay(1000);
  times = millis();



}
//========================================================
void loop()
{
  if( millis() > (times + showTime)){
    num = num + 1;
  // num = 7;
    times = millis();


  }

  switch(num)
  {
    case 1: disp.Display(n1, A, B, C, D, E, F, G, H, I, J, K); break;

    case 2: disp.Display(n2, L, M, N, O, P, Q, R, S, T, U, V); break;

    case 3: disp.Display(n3,W,X,Y,Z,AE,OE,UE,mt,A,O,U); break;

    case 4: disp.Display(n4,a,b,c,d,e,f,g,h,i,j,k); break;

    case 5: disp.Display(n5,l,m,n,o,p,q,r,s,t,u,v); break;

    case 6: disp.Display(n6,w,x,y,z,mt,T,E,S,T,mt,mt); break;

    case 7: disp.Display(n7,mt,mt,H,A,L,L,O,mt,mt,mt,mt); break;

    case 8:  disp.Clear(); break; 

    case 9: num = 1;


  }
}