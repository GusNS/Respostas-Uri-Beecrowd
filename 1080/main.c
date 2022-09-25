#include <stdio.h>

int main() {
  int x, X = 0, y;

  for(int i = 1; i <= 5; i++) {
    scanf("%d", &x);
    if(X < x) {
      X = x;
      y = i;
    }
  }
  printf("%d\n", X);
  printf("%d\n", y);
  
  return 0;
}