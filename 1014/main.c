#include <stdio.h>

int main(void){
  int X;
  float Y, kmL;
  scanf("%d %f", &X, &Y);
  kmL = X / Y;
  printf("%.3f km/l\n", kmL);
  return 0;
}