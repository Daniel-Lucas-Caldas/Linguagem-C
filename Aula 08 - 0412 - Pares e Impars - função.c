#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define Quanti 6


void cabecalho () {
	printf("\n=====================================\n");
    printf("\t Senai-BA \n"); 
    printf("\n=====================================\n");
}

void verificarQuantidadePar (int numero[]) {
     int i, pares = 0;

  for (i = 0; i < Quanti; i++) {
      if (numero[i] % 2 == 0) {
            pares++;
        }
  }

   printf("\nQuantidade de números pares: %d \n", pares);
}

void verificarQuantidadeImpar (int numero[]) {
    int i, impares = 0;

  for (i = 0; i < Quanti; i++) {
      if (numero[i] % 2 != 0) {
            impares++;
        }    
  }

   printf("\nQuantidade de números impares: %d \n", impares);
}

int main () {
    setlocale(LC_ALL, "portuguese");
    int numero[Quanti];
    int i;

    cabecalho ();
    for (i = 0; i < Quanti; i++) {
        printf("Digite um número qualquer: ");
        scanf("%d", &numero[i]);
    }
    
    system("cls || clear");

    cabecalho ();
    verificarQuantidadePar(numero);
    verificarQuantidadeImpar(numero);

  return 0;
} 
