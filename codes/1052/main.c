#include <stdio.h>

char mesNome(int a) {
  char* mes[] = {"null","January","February","March","April","May","June","July","August","September","October","November","December"};

  if(a > 0 && a <= 12)
    printf("%s\n", mes[a]);
  else
    printf("mes invalido\n");

  return 0;
}

int main() {
  int x;
  scanf("%d", &x);
  mesNome(x);

  return 0;
}