#include <stdio.h>

int main(void){
  int N, H, M, S;
  scanf("%d", &N);

  H = N/3600;
  M = (N -(3600 * H))/60;
  S = (N -(3600 * H) -(M * 60));

  printf("%d:%d:%d\n", H, M, S);
  return 0;
}