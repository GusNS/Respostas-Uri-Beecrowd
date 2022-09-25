#include <stdio.h>

int main() {
  int key, x;
  
  while(x != 2002) {
    scanf("%d", &key);
    if(key == 2002) 
      printf("Acesso Permitido\n");    
    else
      printf("Senha Invalida\n");
    x = key;
  }
  
  return 0;
}
