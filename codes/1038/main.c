#include <stdio.h>

int main (void) {
  int cod, qntd;
  float preco, sum;
  scanf("%d %d", &cod, &qntd);

  if (cod == 1) {
    preco = 4;
    sum = preco * qntd;
    printf("Total: R$ %.2f\n", sum);
  }
  else if (cod == 2){
    preco = 4.5;
    sum = preco * qntd;
    printf("Total: R$ %.2f\n", sum);
  }
  else if (cod == 3){
    preco = 5;
    sum = preco * qntd;
    printf("Total: R$ %.2f\n", sum);
  }
  else if (cod == 4){
    preco = 2;
    sum = preco * qntd;
    printf("Total: R$ %.2f\n", sum);
  }
  else if (cod == 5){
    preco = 1.5;
    sum = preco * qntd;
    printf("Total: R$ %.2f\n", sum);
  }
  else {
    printf("Produto inexistente\n");
  }
  
  return 0;
}