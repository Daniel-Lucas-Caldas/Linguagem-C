#include <stdio.h>
#include <stdlib.H>

void cabecalho () {
	printf("\n=====================================\n");
    printf("\t Senai-Ba\n"); 
    printf("\n=====================================\n");
}

int somar (int a, int b) {
	int somaNumeros;
	somaNumeros = a + b;
	return somaNumeros;
}


int main () {
    int primeiroNumero;
    int segundoNumero;
    int soma;
    
    cabecalho ();
    printf("Digite o primeiro numero: ");
    scanf("%d", &primeiroNumero);

    printf("Digite o segundo numero: ");
    scanf("%d", &segundoNumero);
    
    soma = somar (primeiroNumero, segundoNumero);
    //soma = primeiroNumero + segundoNumero;

    cabecalho ();
    printf("Primeiro numero: %d \n", primeiroNumero);
    printf("Segundo numero: %d \n", segundoNumero);
    printf("Soma: %d \n", soma);
    
    return 0;
}

