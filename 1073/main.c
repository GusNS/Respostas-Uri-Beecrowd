#include <stdio.h>
#include <math.h>

int main() {
  int x;
  scanf("%d", &x);
  
  for(int i = 1; i <= x; i++) {
    if(i % 2 == 0)
      printf("%d^2 = %.0f\n", i, pow(i, 2));
  }
  return 0;
}