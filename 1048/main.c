#include <stdio.h>

int main() {
  float x;
  scanf("%f", &x);

  if(x >= 0 && x <= 400.00) {
    printf("Novo salario: %.2f\n", ((x*15)/100)+x);
    printf("Reajuste ganho : %.2f\n", (x*15)/100);
    printf("Em percentual: 15 %%\n");
  }
  else if(x >= 400.01 && x <= 800.00) {
    printf("Novo salario: %.2f\n", ((x*12)/100)+x);
    printf("Reajuste ganho : %.2f\n", (x*12)/100);
    printf("Em percentual: 12 %%\n");
  }
  else if(x >= 800.01 && x <= 1200.00) {
    printf("Novo salario: %.2f\n", ((x*10)/100)+x);
    printf("Reajuste ganho : %.2f\n", (x*10)/100);
    printf("Em percentual: 10 %%\n");
  }
  else if(x >= 1200.01 && x <= 2000.00) {
    printf("Novo salario: %.2f\n", ((x*7)/100)+x);
    printf("Reajuste ganho : %.2f\n", (x*7)/100);
    printf("Em percentual: 7 %%\n");
  }
  else if(x >= 2000.01) {
    printf("Novo salario: %.2f\n", ((x*4)/100)+x);
    printf("Reajuste ganho : %.2f\n", (x*4)/100);
    printf("Em percentual: 4 %%\n");
  }

  return 0;
}