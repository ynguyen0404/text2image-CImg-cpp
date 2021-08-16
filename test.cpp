#include <iostream>
//#include <stdlib.h> //declared in C
#include <cstdlib>
#define cimg_display 0
#include "CImg.h"

using namespace cimg_library;

int main() {
   // Create 640x480 image
   //CImg<unsigned char> image(640,480,1,3);
   CImg<unsigned char> image(480,320,1,3);

   // Fill with magenta, background: white (255, 255, 255)
   cimg_forXY(image,x,y) {
      image(x,y,0,0)=255;
      //image(x,y,0,1)=0;
      image(x,y,0,1)=255;
      image(x,y,0,2)=255;
   }

   // Make some colours
   unsigned char cyan[]    = {0,   255, 255 };
   unsigned char black[]   = {0,   0,   0   };
   unsigned char yellow[]  = {255, 255, 0   };
   unsigned char white[]   = {255, 255, 255};

   // Draw black text on cyan
   //image.draw_text(80,200,"Nguyen Van Huynh Y",black,yellow,1,60); //(x, y, text, text color, background color, opacity, font)
   //image.draw_text(80,200,"Nguyen Van Huynh Y",black,white,1,60); 
   image.draw_text(40,120,"Nguyen Van Huynh Y",black,white,1,50); 


   // Save result image as BMP - no libraries required
   image.save_bmp("result.bmp");
}
