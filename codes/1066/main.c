#include <stdio.h>

int main() {
  int A, B, C, D, E, sum1 = 0, sum2 = 0, sum3 = 0,sum4 = 0;
  scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);
  
  if(A % 2 == 0) {
    sum1 += 1;
  } 
  else {
    sum2 += 1;
  }
  if(A > 0) {
    sum3 += 1;
  }
  else if(A < 0) {
    sum4 += 1;
  }
 
  if(B % 2 == 0) {
    sum1 += 1;
  }
  else {
    sum2 += 1;
  }
  if(B > 0) {
    sum3 += 1;
  }
  else if(B < 0) {
    sum4 += 1;
  }

  if(C % 2 == 0) {
    sum1 += 1;
  }
  else {
    sum2 += 1;
  }
  if(C > 0) {
    sum3 += 1;
  }
  else if(C < 0) {
    sum4 += 1;
  }

  if(D % 2 == 0) {
    sum1 += 1;
  }
  else {
    sum2 += 1;
  }
  if(D > 0) {
    sum3 += 1;
  }
  else if(D < 0) {
    sum4 += 1;
  }

  if(E % 2 == 0) {
    sum1 += 1;
  }
  else {
    sum2 += 1;
  }
  if(E > 0) {
    sum3 += 1;
  }
  else if(E < 0) {
    sum4 += 1;
  }
  printf("%d valor(es) par(es)\n", sum1);
  printf("%d valor(es) impar(es)\n", sum2);
  printf("%d valor(es) positivo(s)\n", sum3);
  printf("%d valor(es) negativo(s)\n", sum4);

  return 0;
}