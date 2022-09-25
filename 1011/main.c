#include <stdio.h>
#include <math.h>

int main(void){
  double volum, pi, R;
  pi = 3.14159;
  scanf("%lf", &R);
  volum = (4.0/3) * pi * pow(R, 3);
  printf("VOLUME = %.3lf\n", volum);
  return 0;
}