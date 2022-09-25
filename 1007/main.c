#include <stdio.h>

int main(void) {
  int A, B, C, D, diferenca;
  scanf("%d %d %d %d", &A, &B, &C, &D);
  diferenca = (A * B - C * D);
  printf("DIFERENCA = %d\n", diferenca);
  return 0;
}