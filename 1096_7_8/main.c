#include <stdio.h>

int main() {
  float x = 0, j = 1, y = 1;

  while(x <= 2.1) {
    if(y == 1) {
      for(int i = 1; i <= 3; i++)
        printf("I=%.0f J=%.0f\n", x, j++);
    }
    else {
      for(int i = 1; i <= 3; i++)
        printf("I=%.1f J=%.1f\n", x, j++);
    }
    y++;

    if(y == 6)
      y = 1;

    j-=2.8;
    x+=0.2;
  }

  return 0;
}