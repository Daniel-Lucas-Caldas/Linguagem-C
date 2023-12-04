#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void cabecalho () {
	printf("\n=====================================\n");
    printf("\t Senai-Ba\n"); 
    printf("\n=====================================\n");
}

void mostrarTabuada (int numero) {
    int i;

    for (i = 0; i <= 10; i++) {
        printf("%d x %d = %d  \n", numero, i, numero * i);
    }
}

int main() {
    setlocale(LC_ALL, "portuguese");
    int numero;
    
    cabecalho ();
    printf("Digite de 1 até 10 a tabuada que deseja: \n");
    scanf("%i", &numero);
    
    cabecalho ();
    printf("Tabuada de %d \n", numero);
    mostrarTabuada(numero);

    return 0;
}