#include <stdio.h>

int main() {
  int sum;
  float A, B, C, D, E, F;
  scanf("%f %f %f %f %f %f", &A, &B, &C, &D, &E, &F);
  
  if(A > 0) {
    sum += 1;
  }
  if(B > 0) {
    sum += 1;
  }
  if(C > 0) {
    sum += 1;
  }
  if(D > 0) {
    sum += 1;
  }
  if(E > 0) {
    sum += 1;
  }
  if(F > 0) {
    sum += 1;
  }
  printf("%d valores positivos\n", sum);

  return 0;
}