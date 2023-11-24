#include<math.h>
#include "colorUtils.h"

double rgbIntToFloat(int c) {
  return (c / 255.0);
}

int max(int x, int y, int z) {
  int m = x > y ? x : y;
  m = m > z ? m : z;
  return m;
}
int min(int x, int y, int z){
  int m = x < y ? x : y;
  m = m < z ? m : z;
}

int toGrayScaleAverage(int r, int g, int b) {
  //TODO: test this, it may be wrong!
  return (r + g + b) / 3;
}
//lightness technique
int toGrayScaleLightness(int r, int g, int b){
  int max = 0, min = 0;
  if(r>g && r>b){
    max = r;
  }
  else if (g>r && g>b){
    max = g;  
  }
  else{
    max = b;
  }
  if(r<g && r<b){
    min = r;
  }
  else if(g<r && g<b){
    min = g;
  }
  else{
    min = b;
  }
  return (max + min)/2;
 
}
 //luminosity technique
 int toGrayScaleLuminosity(int r, int g, int b){
  return round(0.21 * r + 0.72 * g + 0.07 * b + 0.5);
}
// sepia filter
int toSepiaRed(int r, int g, int b){
  int read = round(0.393 * r + 0.769 * g + 0.189 * b);
  if(read>255){
    return 255;
  }
  else{
    return read;
  }
}
int toSepiaGreen(int r, int g, int b){
  int green = round(0.349 * r + 0.686 * g + 0.168 * b);
  if(green>255){
    return 255;
  }
  else{
    return green;
  }
}
int toSepiaBlue(int r, int g, int b){
  int blue = round(0.272 * r + 0.534 * g + 0.131 * b);
  if(blue>255){
    return 255;
  }
  else{
    return blue;
  }
}







