//-------------------------------------------------------------
// LedDotMatrix7x60.h - Header File
//-------------------------------------------------------------
//header guards
#ifndef LedDotMatrix7x60_h
#define LedDotMatrix7x60_h
//--------------------------------------------------------
//class definition
class LedDotMatrix7x60
{
    public:
        //constructor
        LedDotMatrix7x60(int DIN, int CS, int CLK);
        //methods
        void Clear();
        void Display(byte dspl_1[],byte dspl_2[],byte dspl_3[],byte dspl_4[],byte dspl_5[],byte dspl_6[],
                         byte dspl_7[],byte dspl_8[],byte dspl_9[],byte dspl_10[],byte dspl_11[],byte dspl_12[]);
 
    private:
        int _DIN;
        int _CS;
        int _CLK;
        void Write(byte c, byte d1, byte d2, byte d3, byte d4, byte d5, 
                    byte d6, byte d7, byte d8, byte d9, byte d10, byte d11, byte d12);
        void SPI_send(byte data);
};
//--------------------------------------------------------
#endif