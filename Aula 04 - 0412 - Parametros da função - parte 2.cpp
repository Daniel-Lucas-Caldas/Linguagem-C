#include <stdio.h>
#include <stdlib.H>

void cabecalho () {
	printf("\n=====================================\n");
    printf("\t Senai-Ba\n"); 
    printf("\n=====================================\n");
}



int main () {
    int primeiroNumero;
    int segundoNumero;
    int soma;
    
    cabecalho ();
    printf("Digite o primeiro numero: ");
    scanf("%d", &primeiroNumero);

    printf("Digite o segundo numero: ");
    scanf("%d". &segundoNumero);
    
    somar (primeiroNumero, segundoNumero);
    //soma = primeiroNumero + segundoNumero;

    cabecalho ();
    print("Primeiro numero: %d \n", primeiroNumero);
    print("Segundo numero: %d \n", segundoNumero);
    print("Soma: %d \n", soma);
    
    return 0;
}

