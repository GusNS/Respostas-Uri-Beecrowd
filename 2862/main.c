#include <stdio.h>

int main() {
  int c, n;
  scanf("%d", &c);

  for(int i = 1; i <= c; i++) {
    scanf("%d", &n);

    if(n <= 8000)
      printf("Inseto!\n");
    else if(n > 8000)
      printf("Mais de 8000!\n");
  }

  return 0;
}