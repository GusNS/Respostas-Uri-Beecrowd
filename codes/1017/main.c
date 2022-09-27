#include <stdio.h>

int main(void){
  float A, B, C, gasto;
  C = 12;
  scanf("%f %f", &A, &B);
  gasto = (A * B)/C;
  printf("%.3f\n", gasto);
  return 0;
}