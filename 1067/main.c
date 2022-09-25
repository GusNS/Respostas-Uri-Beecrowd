#include <stdio.h>

int main() {
  int X, N = 1;
  scanf("%d", &X);

  while(N <= X) {
    if(N % 2 != 0) {
      printf("%d\n", N);
    }
    ++N;
  }

  return 0;
}