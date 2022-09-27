#include <stdio.h>

int main() {
  int A, B, C, D, E, F, sum = 0;
  scanf("%d %d %d %d %d %d", &A, &B, &C, &D, &E, &F);

  if(A % 2 == 0) {
    sum += 1;  
  }
  if(B % 2 == 0) {
    sum += 1;
  }
  if(C % 2 == 0) {
    sum += 1;
  }
  if(D % 2 == 0) {
    sum += 1;
  }
  if(E % 2 == 0) {
    sum += 1;
  }
  if(F % 2 == 0) {
    sum += 1;
  }
  printf("%d valores pares\n", sum);

  return 0;
}