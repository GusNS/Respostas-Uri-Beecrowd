#include <stdio.h>

int main() {
  int x;
  float y, m = 0;

  for(int i = 1; i <= 6; i++) {
    scanf("%f", &y);
    if(y > 0) {
      x++;
      m += y;
    }
  }
  printf("%d valores positivos\n", x);
  printf("%.1f\n", m/x);

  return 0;
}