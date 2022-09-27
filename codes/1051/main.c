#include <stdio.h>

int main() {
  float renda;
  scanf("%f", &renda);

  if(renda <= 2000.00)
    printf("Isento\n");
  else if(renda >= 2000.01 && renda <= 3000.00)
    printf("R$ %.2f\n", ((renda-2000)*8)/100);
  else if(renda >= 3000.01 && renda <= 4500.00)
    printf("R$ %.2f\n", ((renda-3000)*18/100) + (1000*8)/100);
  else if(renda >= 4500.00)
    printf("R$ %.2f\n", ((renda-4500)*28)/100 + (1500*18)/100 + (1000*8)/100);

  return 0;
}