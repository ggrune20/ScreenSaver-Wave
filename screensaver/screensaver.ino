/*
  screensaver.ino
  Gunnar Grune
 
 Example file using the The Meggy Jr Simplified Library (MJSL)
  from the Meggy Jr RGB library for Arduino
   
 Blink a damned LED.
   
   
 
 Version 1.25 - 12/2/2008
 Copyright (c) 2008 Windell H. Oskay.  All right reserved.
 http://www.evilmadscientist.com/
 
 This library is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 This library is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this library.  If not, see <http://www.gnu.org/licenses/>.
 	  
 */

 
 
 
 

/*
 * Adapted from "Blink,"  The basic Arduino example.  
 * http://www.arduino.cc/en/Tutorial/Blink
 */

#include <MeggyJrSimple.h>    // Required code, line 1 of 2.

int color;

void setup()                    // run once, when the sketch starts
{
  color = 1;
  MeggyJrSimpleSetup();      // Required code, line 2 of 2.
}

void loop()
{
  NiceSky();            //makes ocean, sky, and sun. 
    DisplaySlate();
    delay(1000);
  NiceSky();
  Wave1();             //wave starts to form.
    DisplaySlate();
    delay(500);
  Wave2();             //still forming.
    DisplaySlate();
    delay(500);
  Wave3();           
    DisplaySlate();
    delay(500);
    ClearSlate();
  NiceSky();
  Wave4();          //wave begins to crash. 
    DisplaySlate();
    delay(500);
    ClearSlate();
  NiceSky();
  Wave5();         //wave crashes. 
    DisplaySlate();
    delay(500);
    ClearSlate();
  NiceSky();
  Wave6();           //wave fades out. 
    DisplaySlate();
    delay(500);
    ClearSlate();
  NiceSky();
  Wave7();
    DisplaySlate();
    delay(500);
    ClearSlate();
  NiceSky();
  Wave8();          //wave is gone. 
    DisplaySlate();
    delay(500);
    ClearSlate();
}


void NiceSky()
{
  for(int i= 0; i<8; i++)
  for(int m= 0; m<8; m++)
   DrawPx(i, m, White);
  for(int o=0; o<8; o++)
   DrawPx(o, 1, Blue);
  for(int s=0; s<8; s++)
   DrawPx(s, 0, Blue);
   DrawPx(1, 5, Yellow);
   DrawPx(1, 6, Yellow);
   DrawPx(2, 5, Yellow);
   DrawPx(2, 6, Yellow);
}


void Wave1()
{
  DrawPx(0, 2, Blue);
}


void Wave2()
{
  DrawPx(0, 2, Blue);
  DrawPx(1, 2, Blue);
  DrawPx(1, 3, Blue);
}


void Wave3()
{
  for(int i=2; i<5; i++)
  DrawPx(2, i, Blue);
  DrawPx(0, 2, Blue);
  DrawPx(1, 2, Blue);
  DrawPx(1, 3, Blue);
  DrawPx(3, 2, Blue);
}


void Wave4()
{
  for(int i=1; i<5; i++)
  DrawPx(i, 2, Blue);
  DrawPx(2, 3, Blue);
  DrawPx(3, 3, Blue);
  DrawPx(3, 4, Blue);
  DrawPx(4, 4, Blue);
}


void Wave5()
{
  for(int i=2; i<6; i++)
  DrawPx(i, 2, Blue);
  DrawPx(3, 3, Blue);
  DrawPx(4, 3, Blue);
  DrawPx(4, 4, Blue);
  DrawPx(5, 4, Blue);
  DrawPx(6, 4, Blue);
  DrawPx(6, 3, Blue);
}


void Wave6()
{
  for(int i=4; i<8; i++)
  DrawPx(i, 2, Blue);
  DrawPx(5, 3, Blue);
  DrawPx(6, 3, Blue);
}


void Wave7()
{
  for(int i=6; i<8; i++)
  DrawPx(i, 2, Blue);
  DrawPx(7, 3, Blue);
}


void Wave8()
{
  DrawPx(7, 2, Blue);
}
