#include <stdio.h>

int main(void){
  int N, val200, val100, val50, val20, val10, val5, val2, val1;
  scanf("%d", &N);
  if (N > 0){
    printf("%d\n", N);

    val200 = N/200;
    printf("%d nota(s) de R$ 200,00\n", val200);
    N = N % 200;

    val100 = N/100;
    printf("%d nota(s) de R$ 100,00\n", val100);
    N = N % 100;

    val50 = N/50;
    printf("%d nota(s) de R$ 50,00\n", val50);
    N = N % 50;

    val20 = N/20;
    printf("%d nota(s) de R$ 20,00\n", val20);
    N = N % 20;
    
    val10 = N/10;
    printf("%d nota(s) de R$ 10,00\n", val10);
    N = N % 10;
    
    val5 = N/5;
    printf("%d nota(s) de R$ 5,00\n", val5);
    N = N % 5;

    val2 = N/2;
    printf("%d nota(s) de R$ 2,00\n", val2);
    N = N % 2;

    val1 = N/1;
    printf("%d nota(s) de R$ 1,00\n", val1);
    N = N % 1;
  }
  return 0;
}