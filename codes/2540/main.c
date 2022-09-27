#include <stdio.h>

int main() {
  int N;
  int V;

  while (scanf("%d", &N) != EOF) {
    int i;
    int nV = 0;

    for (i = 1; i <= N; i++) {
      scanf("%d", &V);
      nV += V;
    }

    if(nV >= N * (2/3.0)) {
      printf("Impeachment\n");
    }
    else{
      printf("acusacao arquivada\n");
    }
  }

  return 0;
}