#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade = 0;
    float peso = 0;
    char sexo;
    char nome[250];

    // Solicitando dados do usúario
    printf("Digite seu idade: ");
    scanf("%d", &idade);

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    fflush(stdin); // Limpa o cache de imput.

    printf("Digite o seu sexo: ");
    scanf("%c", &sexo);

    //printf("Digite seu nome: ");
    //scanf("%s", &nome);
    
    fflush(stdin);

    printf ("Informe seu nome: ");
    //scanf("%s", nome);
    //gets (nome);
    fgets (nome, 250, stdin);
    nome[strcspn(nome, "\n")] = 0;

    System("cls || clear") // Limpa a tela (Limpa o terminal).

    // Exibindo dados do usúario
    printf("Idade: %d \n", idade);
    printf("peso %.2f \n", peso);
    printf("Sexo: %c \n", sexo);
    printf("Nome: %s \n", nome);

    return 0;
}