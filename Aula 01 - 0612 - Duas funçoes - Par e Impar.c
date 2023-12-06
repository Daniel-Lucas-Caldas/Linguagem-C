#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void cabecalho () {
	printf("\n=====================================\n");
    printf("\t Senai-BA \n"); 
    printf("\n=====================================\n");
}

void verificarQuantidadePar (int numero[]) {
     int i, pares = 0;

  for (i = 0; i < 6; i++) {
      if (numero[i] % 2 == 0) {
            pares++;
        }
  }

   printf("\nQuantidade de n�meros pares: %d \n", pares);
}

void verificarQuantidadeImpar (int numero[]) {
    int i, impares = 0;

  for (i = 0; i < 6; i++) {
      if (numero[i] % 2 != 0) {
             impares++;
        }    
  }

   printf("\nQuantidade de n�meros impares: %d \n", impares);
}

int main () {
    setlocale(LC_ALL, "portuguese");
    int numero[6];
    int i;

    cabecalho ();
    for (i = 0; i < 6; i++) {
        printf("Digite um n�mero qualquer: ");
        scanf("%d", &numero[i]);
    }
    
    system("cls || clear");

    cabecalho ();
    verificarQuantidadePar(numero);
    verificarQuantidadeImpar(numero);

  return 0;
} 