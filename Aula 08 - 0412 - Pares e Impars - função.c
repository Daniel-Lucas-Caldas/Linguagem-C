#include <stdio.h>
#include <string.h>
#include <locale.h>

void cabecalho () {
	printf("\n=====================================\n");
    printf("\t Senai-BA \n"); 
    printf("\n=====================================\n");
}

void verificarQuantidadeParOuImpar (int numero[]) {
    int i, pares = 0, impares = 0;
  
  for (i = 0; i < 6; i++) {
      if (numero[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }    
  }

   printf("\nQuantidade de números pares: %d \n", pares);
   printf("\nQuantidade de números impares: %d \n", impares);
}

int main () {
    setlocale(LC_ALL, "portuguese");
    int numero[6];
    int i;

    cabecalho ();
    for (i = 0; i < 6; i++) {
        printf("Digite um número qualquer: ");
        scanf("%d", &numero[i]);
    }
    
    cabecalho ();
    verificarQuantidadeParOuImpar(numero);

  return 0;
} 