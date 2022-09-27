#include <stdio.h>

int main() {
  int D1, H1, M1, S1;
  int D2, H2, M2, S2;
  int D3, H3, M3;
  int Df, Hf, Mf, Sf;

  scanf("%d %d %d %d %d %d %d %d", &D1, &H1, &M1, &S1, &D2, &H2, &M2, &S2);

  D1 *= 86400;
  D2 *= 86400;
  H1 *= 3600;
  H2 *= 3600;
  M1 *= 60;
  M2 *= 60;

  D3 = D2 - D1;
  H3 = H2 - H1;
  M3 = M2 - M1;
  Sf = S2 - S1;

  Df = D3/86400;
  Hf = H3/3600;
  Mf = M3/60;

  if(Hf < 0) {
    Hf += 24;
    Df--;
  }
  if(Mf < 0) {
    Mf += 60;
    Hf--;
  }
  if(Sf < 0) {
    Sf += 60;
    Mf--;
  }
  printf("%d dia(s)\n", Df);
  printf("%d hora(s)\n", Hf);
  printf("%d minuto(s)\n", Mf);
  printf("%d segundo(s)\n", Sf);
  
  return 0;
}