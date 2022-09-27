#include <stdio.h>

int main(void){
  char nome;
  double salarioFixo, vendas, total;

  scanf("%s %lf %lf", &nome, &salarioFixo, &vendas);
  total = salarioFixo + vendas * 0.15;
  
  printf("TOTAL = R$ %.2lf\n", total);
  return 0;
}