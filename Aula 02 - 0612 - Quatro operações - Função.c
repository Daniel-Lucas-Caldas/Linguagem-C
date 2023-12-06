#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int somar(int n1, int n2) {
    int i, soma = 0;
    soma = n1 + n2;
    
    printf("Resultado da soma: %d \n", soma);
    return soma;   
}

int subtrair(int n1, int n2) {
    int subtracao = n1 - n2;
    return subtracao;
}

int multiplicar(int n1, int n2) {
    intmultiplicacao = n1 * n2;
    return multiplicacao;
}

float dividir(int n1, int n2) {
    float divisao = n1 / (float) n2;
    return divisao;
}

int main () {
    setlocale(LC_ALL, "portuguese");
    int numero1;
    int numero2;
    int soma, subtracao, multiplicacao;
    float divisao;

    printf("Digite o primeiro valor: ");
    scanf("%d", &numero1);
    
    printf("Digite o segundo valor: ");
    scanf("%d", &numero2);
    
    system("cls || clear");
    
    soma = somar(numero1, numero2);
    subtracao = subtrair(numero1, numero2);
    multiplicacao = multiplicar(numero1, numero2);
    divisao = dividir(numero1, numero2);
    
    printf("Primeiro valor: %d \n", numero1);
    printf("Segundo valor: %d \n\n", numero2);
    printf("valor da adição: %d \n", soma);
    printf("valor da subtração: %d \n", subtracao);
    printf("valor da multiplicação: %d \n", multiplicacao);
    printf("valor da divisão: %f \n", divisao);

  return 0;
} 