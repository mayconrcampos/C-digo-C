#include <stdio.h>
#include <stdlib.h>

void aloca()
{
 int *ptr;
 ptr = (int *) malloc(100);
}

int main(void)
{
 while(1)
  aloca();

 return 0;
}

// Programa que faz o PC morrer aos poucos... Ele vai
// Alocando memória repetidamente até terminar toda a memória do PC.