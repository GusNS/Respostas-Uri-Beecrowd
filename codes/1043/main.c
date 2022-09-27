#include <stdio.h>

int main() {
  float A, B, C, perimetro, area;
  scanf("%f %f %f", &A, &B, &C);
  area = ((A + B) * C)/2;
  perimetro = A + B + C;

  if((A < B + C) && (B < A + C) && (C < A + B)) {
    printf("Perimetro = %.1f\n", perimetro);
  }
  else {
    printf("Area = %.1f\n", area);
  }

  return 0;
}