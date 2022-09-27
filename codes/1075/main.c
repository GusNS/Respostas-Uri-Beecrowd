#include <stdio.h>

void restoIgualA2(int a) {
  for(int i = 1; i < 10000; i++) {
    if(i % a == 2)
      printf("%d\n", i);
  }
}

int main() {
  int x;
  scanf("%d", &x);
  restoIgualA2(x);

  return 0;
}