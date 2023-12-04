#include <stdio.h>
#include <stdlib.h>

void cabecalho () {
	printf("\n=====================================\n");
    printf("\t Senai-Ba\n"); 
    printf("\n=====================================\n");
}

float calcularMedia (int a, int b) {
	float media;
    media = (a + n) / float 2;
	return media;
}

int main () {
    int primeiroNumero;
    int segundoNumero;
    
    cabecalho ();
    printf("Digite o primeiro numero: ");
    scanf("%d", &primeiroNumero);

    printf("Digite o segundo numero: ");
    scanf("%d", &segundoNumero);

    cabecalho ();
    printf("Primeiro numero: %d \n", primeiroNumero);
    printf("Segundo numero: %d \n", segundoNumero);
    printf("Media: %.2f \n", calcularMedia(primeiroNumero, segundoNumero));
    
    return 0;
}