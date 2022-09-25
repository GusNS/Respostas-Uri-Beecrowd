#include <stdio.h>

int main(void){
  int cod1, num1, cod2, num2;
  float val1, val2, valFinal;
  scanf("%d %d %f", &cod1, &num1, &val1);
  scanf("%d %d %f", &cod2, &num2, &val2);
  valFinal = num1 * val1 + num2 * val2;
  printf("VALOR A PAGAR: R$ %.2f\n", valFinal); 
  return 0;
}