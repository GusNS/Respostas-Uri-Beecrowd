#include <stdio.h>

int main() {
  int Wd1, Xh1, Ym1, Zs1;
  int Wd2, Xh2, Ym2, Zs2;
  int Wd, Xh, Ym, Zs;

  scanf("Dia %d", &Wd1);
  scanf("%d : %d : %d\n", &Xh1, &Ym1, &Zs1);
  scanf("Dia %d", &Wd2);
  scanf("%d : %d : %d", &Xh2, &Ym2, &Zs2);

  Wd = Wd2 - Wd1;
  Xh = Xh2 - Xh1;
  Ym = Ym2 - Ym1;
  Zs = Zs2 - Zs1;

  if(Zs < 0) {
    Zs += 60;
    Ym--;
  }
  if(Ym < 0) {
    Ym += 60;
    Xh--;
  }
  if(Xh < 0) {
    Xh += 24;
    Wd--;
  }

  printf("%d dia(s)\n", Wd);
  printf("%d hora(s)\n", Xh);
  printf("%d minuto(s)\n", Ym);
  printf("%d segundo(s)\n", Zs);
  
  return 0;
}