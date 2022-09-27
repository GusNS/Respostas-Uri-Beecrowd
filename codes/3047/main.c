#include <stdio.h>

int main() {
  int M, A, B, C;
  scanf("%d %d %d", &M, &A, &B);
  C = M - A - B;
  
  if(C > A && C > B){
    printf("%d\n",C);
  }
  else if(A > C && A > B){
    printf("%d\n",A);
  }
  else if(B > C && B > A){
    printf("%d\n", B);
  }
  
return 0;
}