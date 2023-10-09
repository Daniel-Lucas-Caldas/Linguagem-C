#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    int numero, i,j;

    printf("Digite de 1 até 10 a tabuada que deseja: \n");
    scanf("%i", &numero);

    printf ("Tabuada de %i \n", numero);
    for (i = 1; i <= 10; i++) {
       printf("%d x %d = %d  \n", i, numero, i*numero);
    }
  printf("\n");

  return 0;
  
} 