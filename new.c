#include <stdio.h>
#include "lodepng.h"
#include <stdlib.h>

int main(){
  unsigned char *image;
  unsigned int w,h;

  lodepng_decode32_file(&image,&w,&h,"nw.png");
  for (int i = 0; i < w*h*4; i+=4)
  {
    if(image[i]==100){
      image[i]=image[i]+450;
    }
  }
  
  lodepng_encode32_file("new.png",image,w,h);
} 

