#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade = 20;    // inteiro
    float peso = 80.2; // real
    char sexo = 'f';   // caracter
    char nome[250] = "Marta";

    //int -> inteiros
    //float -> números reais
    //char -> apenas um caracter

    //char nome_variavel [Quantidade de caracteres]
    //Cadeia de caracteres

    // printf("Idade: %d anos, meu peso: %.2f", idade, peso);
    printf("Nome: %s \n", nome);
    printf("Idade: %d \n", idade);
    printf("Peso: %.2f \n", peso);
    printf("Sexo: %c \n", sexo);

    return 0;
}