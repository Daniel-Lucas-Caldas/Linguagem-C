#include <stdio.h>
#include <string.h>
#include <locale.h>

void cabecalho () {
	printf("\n=====================================\n");
    printf("\t Senai-Ba\n"); 
    printf("\n=====================================\n");
}

void verificarParOuImpar (int numero) {
    int i;

      if (numero %2 == 0) {
          printf("\n%d -> par. \n", numero);
        } else {
          printf("\n%d -> impar. \n", numero);
        }     
}

int main () {
    setlocale(LC_ALL, "portuguese");
    int numero;

    cabecalho ();
    printf("Digite um número qualquer: ");
    scanf("%d", &numero);
    
    cabecalho ();
    verificarParOuImpar (numero);

  return 0;
} 