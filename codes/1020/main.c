#include <stdio.h>

int main() {
  int Id, A, M, D, resto;
  scanf("%d", &Id);

  A = Id / 365;
  resto = Id % 365;
  M = resto / 30;
  D = resto % 30;

  printf("%d ano(s)\n", A);
  printf("%d mes(es)\n", M);
  printf("%d dia(s)\n", D);

  return 0;
}