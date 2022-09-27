#include <stdio.h>

int main() {
  int X, count;
  scanf("%d", &X);
  
  for(count = 1; count <= 12; count++) {
    if(X % 2 != 0) {
    printf("%d\n", X);    
    }
    ++X;
  }
  
  return 0;
}