/*
 Rainbowduino v3.0 Library examples:

 Print Shapes on 2D plane (8x8 matrix)

*/
#include <Rainbowduino.h>
#define DEBUG_ENABLED  1


void setup()
{
  Serial.begin(9600);
  //pinMode(RxD, INPUT);
  //pinMode(TxD, OUTPUT);
  Rb.init();
}

unsigned char x,y,z;

void loop()
{
/*
 * Rb.setPixelXY(unsigned char x, unsigned char y, 
 * unsigned char colorR, unsigned char colorG, unsigned char colorB) #separate rgb values
 * 
 * Rb.setPixelXY(unsigned char x, unsigned char y, unit32_t colorRGB) #hex rgb
 */
   if(Serial.available()){//check if there's any data sent from the local serial terminal, you can add the other applications here
      char recvChar;
      recvChar  = Serial.read();
      if(recvChar == 0x01){
        Rb.blankDisplay();
        Rb.setPixelXY(1, 1, 0xFF0000);
        Rb.setPixelXY(1, 2, 0xFF0000);
        Rb.setPixelXY(1, 5, 0xFF0000);
        Rb.setPixelXY(1, 6, 0xFF0000);

        Rb.setPixelXY(2, 0, 0xFF0000);
        Rb.setPixelXY(2, 1, 0xFF0000);
        Rb.setPixelXY(2, 2, 0xFF0000);
        Rb.setPixelXY(2, 3, 0xFF0000);
        Rb.setPixelXY(2, 4, 0xFF0000);
        Rb.setPixelXY(2, 5, 0xFF0000);
        Rb.setPixelXY(2, 6, 0xFF0000);
        Rb.setPixelXY(2, 7, 0xFF0000);

        Rb.setPixelXY(3, 0, 0xFF0000);
        Rb.setPixelXY(3, 1, 0xFF0000);
        Rb.setPixelXY(3, 2, 0xFF0000);
        Rb.setPixelXY(3, 3, 0xFF0000);
        Rb.setPixelXY(3, 4, 0xFF0000);
        Rb.setPixelXY(3, 5, 0xFF0000);
        Rb.setPixelXY(3, 6, 0xFF0000);
        Rb.setPixelXY(3, 7, 0xFF0000);
        
        Rb.setPixelXY(4, 1, 0xFF0000);
        Rb.setPixelXY(4, 2, 0xFF0000);
        Rb.setPixelXY(4, 3, 0xFF0000);
        Rb.setPixelXY(4, 4, 0xFF0000);
        Rb.setPixelXY(4, 5, 0xFF0000);
        Rb.setPixelXY(4, 6, 0xFF0000);
        
        Rb.setPixelXY(5, 2, 0xFF0000);
        Rb.setPixelXY(5, 3, 0xFF0000);
        Rb.setPixelXY(5, 4, 0xFF0000);
        Rb.setPixelXY(5, 5, 0xFF0000);

        Rb.setPixelXY(6, 3, 0xFF0000);
        Rb.setPixelXY(6, 4, 0xFF0000);
      }
      if(recvChar == 0x02){
        Rb.blankDisplay();
        Rb.setPixelXY(0, 2, 0x00FF00);
        Rb.setPixelXY(0, 5, 0x00FF00);

        Rb.setPixelXY(1, 2, 0x00FF00);
        Rb.setPixelXY(1, 5, 0x00FF00);

        Rb.setPixelXY(2, 1, 0x00FF00);
        Rb.setPixelXY(2, 2, 0x00FF00);
        Rb.setPixelXY(2, 3, 0x00FF00);
        Rb.setPixelXY(2, 4, 0x00FF00);
        Rb.setPixelXY(2, 5, 0x00FF00);
        Rb.setPixelXY(2, 6, 0x00FF00);

        Rb.setPixelXY(3, 0, 0x00FF00);
        Rb.setPixelXY(3, 1, 0x00FF00);
        Rb.setPixelXY(3, 3, 0x00FF00);
        Rb.setPixelXY(3, 4, 0x00FF00);
        Rb.setPixelXY(3, 6, 0x00FF00);
        Rb.setPixelXY(3, 7, 0x00FF00);

        Rb.setPixelXY(4, 0, 0x00FF00);
        Rb.setPixelXY(4, 1, 0x00FF00);
        Rb.setPixelXY(4, 2, 0x00FF00);
        Rb.setPixelXY(4, 3, 0x00FF00);
        Rb.setPixelXY(4, 4, 0x00FF00);
        Rb.setPixelXY(4, 5, 0x00FF00);
        Rb.setPixelXY(4, 6, 0x00FF00);
        Rb.setPixelXY(4, 7, 0x00FF00);

        Rb.setPixelXY(5, 0, 0x00FF00);
        Rb.setPixelXY(5, 1, 0x00FF00);
        Rb.setPixelXY(5, 2, 0x00FF00);
        Rb.setPixelXY(5, 3, 0x00FF00);
        Rb.setPixelXY(5, 4, 0x00FF00);
        Rb.setPixelXY(5, 5, 0x00FF00);
        Rb.setPixelXY(5, 6, 0x00FF00);
        Rb.setPixelXY(5, 7, 0x00FF00);

        Rb.setPixelXY(6, 0, 0x00FF00);
        Rb.setPixelXY(6, 2, 0x00FF00);
        Rb.setPixelXY(6, 5, 0x00FF00);
        Rb.setPixelXY(6, 7, 0x00FF00);

        Rb.setPixelXY(7, 2, 0x00FF00);
        Rb.setPixelXY(7, 5, 0x00FF00);
                
        
      }
      if(recvChar == 0x03){
        Rb.blankDisplay();
        Rb.drawRectangle(0, 0, 8, 8, 0xFA055F);
        Rb.drawRectangle(1, 1, 6, 6, 0xD74474);
        Rb.drawRectangle(2, 2, 4, 4, 0x90C19E);
        Rb.drawRectangle(3, 3, 2, 2, 0x6DFFB3);
      }
   }
}
