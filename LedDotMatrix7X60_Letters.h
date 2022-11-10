//----------------------------------------------------
// Bytevalues for Rows
// ---------------------------------------------------
byte R0 = 0b00000000;
byte R1 = 0b00000100;
byte R2 = 0b00000001;
byte R3 = 0b00000010;
byte R4 = 0b00100000;
byte R5 = 0b00001000;
byte R6 = 0b01000000;
byte R7 = 0b00010000;
byte RF = 0b11111111;

//----------------------------------------------------
// Letters from A to Z
// ---------------------------------------------------
byte A[5] ={
        R2+R3+R4+R5+R6+R7, R1+R4, R1+R4, R1+R4, R2+R3+R4+R5+R6+R7
    };
byte B[5] ={
        R1+R7, RF, R1+R4+R7, R1+R4+R7, R2+R3+R5+R6
    };
byte C[5] ={
        R2+R3+R4+R5+R6, R1+R7, R1+R7, R1+R7, R2+R6
    };
byte D[5] ={
        R1+R7, RF, R1+R7, R1+R7, R2+R3+R4+R5+R6
    };
byte E[5] ={
        RF, R1+R4+R7, R1+R4+R7, R1+R4+R7, R1+R7 
    };
byte F[5] ={
        RF, R1+R4, R1+R4 ,R1+R4, R1         
    };
byte G[5] ={
        R2+R3+R4+R5+R6, R1+R7, R1+R7, R1+R4+R7, R2+R4+R5+R6+R7 
    };
byte H[5] ={
        RF, R4, R4, R4, RF
    };
byte I[5] ={
        R0, R1+R7, RF, R1+R7, R0
    };
byte J[5] ={
       R6, R7, R1+R7, R1+R2+R3+R4+R5+R6, R1
    };
byte K[5] ={
       RF, R4, R3+R5, R2+R6, R1+R7
    };
byte L[5] ={
        RF, R7, R7, R7, R0
    };
byte M[5] ={
        RF, R2, R3+R4, R2, RF
    };
byte N[5] ={
        RF, R3, R4, R5, RF
    };
byte O[5] ={
        R2+R3+R4+R5+R6, R1+R7, R1+R7, R1+R7, R2+R3+R4+R5+R6
    };
byte P[5] ={
        RF, R1+R4, R1+R4, R1+R4, R2+R3
    };
byte Q[5] ={
        R2+R3+R4+R5+R6, R1+R7, R1+R5+R7, R1+R6, R2+R3+R4+R5+R7
    };
byte R[5] ={
        RF, R1+R4, R1+R4+R5, R1+R4+R6, R2+R3+R7
    };
byte S[5] ={
        R2+R3+R6, R1+R4+R7, R1+R4+R7, R1+R4+R7, R2+R5+R6
    };
byte T[5] ={
        R1, R1, RF, R1, R1
    };
byte U[5] ={
        R1+R2+R3+R4+R5+R6, R7, R7, R7, R1+R2+R3+R4+R5+R6
    };
byte V[5] ={
        R1+R2+R3+R4+R5, R6, R7, R6, R1+R2+R3+R4+R5
    };
byte W[5] ={
        R1+R2+R3+R4+R5+R6, R7, R4+R5+R6, R7, R1+R2+R3+R4+R5+R6
    };
byte X[5] ={
       R1+R2+R6+R7, R3+R5, R4, R3+R5, R1+R2+R6+R7
    };
byte Y[5] ={
        R1+R2+R3, R4, R5+R6+R7, R4, R1+R2+R3
    };
byte Z[5] ={
        R1+R6+R7, R1+R5+R7, R1+R4+R7, R1+R3+R7, R1+R2+R7
    };
byte AE[5] ={
        R4+R5+R6+R7, R1+R3+R5, R3+R5, R1+R3+R5, R4+R5+R6+R7
    };
byte OE[5] ={
        R4+R5+R6, R1+R3+R7, R3+R7, R1+R3+R7, R4+R5+R6
    };
byte UE[5] ={
        R3+R4+R5+R6, R1+R7, R7, R1+R7, R3+R4+R5+R6
    };

//----------------------------------------------------
// Letters from a to z
// ---------------------------------------------------
byte a[5] = {
        R6, R3+R5+R7, R3+R5+R7, R3+R5+R7, R4+R5+R6+R7 
        };
byte b[5] = {
        RF, R4+R7, R3+R7, R3+R7, R4+R5+R6
        };
byte c[5] = {
        R4+R5+R6, R3+R7, R3+R7, R3+R7, R6
        };
byte d[5] = {
        R4+R5+R6, R4+R7, R3+R7, R3+R7, RF
        };
byte e[5] = {
        R4+R5+R6, R3+R5+R7, R3+R5+R7, R3+R5+R7, R4+R5
        };
byte f[5] = {
        R4, R2+R3+R4+R5+R6+R7, R1+R4, R1, R2
        };
byte g[5] = {
        R4, R3+R5+R7, R3+R5+R7, R3+R5+R7, R3+R4+R5+R6
        };
byte h[5] = {
        RF, R4, R3, R3, R4+R5+R6+R7
               };
byte i[5] = {
        
        };
byte j[5] = {
        
        };
byte k[5] = {
        
        };
byte l[5] = {
        
        };
byte m[5] = {
        
        };
byte n[5] = {
        
        };
byte o[5] = {
        
        };
byte p[5] = {
        
        };
byte q[5] = {
        
        };
byte r[5] = {
        
        };
byte s[5] = {
        
        };
byte t[5] = {
        
        };
byte u[5] = {
        
        };
byte v[5] = {
        
        };
byte w[5] = {
        
        };
byte x[5] = {
        
        };
byte y[5] = {
        
        };
byte z[5] = {
        
        };
//----------------------------------------------------
// Numbers from 0 to 9
// ---------------------------------------------------
byte n0[5 ] = {
        R2+R3+R4+R5+R6, R1+R5+R7, R1+R4+R7, R1+R3+R7, R2+R3+R4+R5+R6
        };
byte n1[5] = {
        R0,R2+R7,RF,R7,R0
        };
byte n2[5] = {
        R2+R6+R7, R1+R5+R7, R1+R4+R7, R1+R4+R7, R2+R3+R7
        };
byte n3[5] = {
        R2+R6, R1+R7, R1+R4+R7, R1+R4+R7, R2+R3+R5+R6         
        };
byte n4[5] = {
        R4+R5, R3+R5, R2+R5, RF, R5
        };
byte n5[5] = {
        R1+R2+R3+R6, R1+R3+R7, R1+R3+R7, R1+R3+R7, R1+R4+R5+R6
        };
byte n6[5] = {
        R3+R4+R5+R6, R2+R4+R7, R1+R4+R7, R1+R4+R7, R5+R6
        };
byte n7[5] = {
        R1, R1+R5+R6+R7, R1+R4, R1+R3, R1+R2
        };
byte n8[5] = {
        R2+R3+R5+R6, R1+R4+R7, R1+R4+R7, R1+R4+R7, R2+R3+R5+R6
        };
byte n9[5] = {
        R2+R3, R1+R4+R7, R1+R4+R7, R1+R4+R6, R2+R3+R4+R5
        };
//----------------------------------------------------
// Miscellaneous shapes
// ---------------------------------------------------
byte dc[8] = {
        0b01100000,0b10010000,0b01101110,0b00010001,
        0b00010000,0b00010000,0b00010001,0b00001110}; //°C
byte df[8] = {
        0b01100000,0b10010000,0b01100000,0b00001111,
        0b00001000,0b00001110,0b00001000,0b00001000}; //°F
byte mt[5] ={
    R0, R0, R0, R0, R0
};
byte fl[5] ={
    RF, RF, RF, RF, RF
};
byte C1[5] ={
        R0, R1, R1, R1, R0
    };
byte C2[5] ={
        R0, R2, R2, R2, R0
    };
byte C3[5] ={
        R0, R3, R3, R3, R0
    };
byte C4[5] ={
        R0, R4, R4, R4, R0
    };
byte C5[5] ={
        R0, R5, R5, R5, R0
    };
byte C6[5] ={
        R0, R6, R6, R6, R0
    };
byte C7[5] ={
        R0, R7, R7, R7, R0
    };