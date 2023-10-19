#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuquese");

    char nome[250];
    int idade = 0;
    float Primeiranota = 0;
    float Segundanota = 0;
    float Terceiranota = 0;
    float media = 0;

    // Requisitando dados do usúario
    printf("Digite seu nome: ");
    gets(nome);

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("Digite a sua primeira nota: ");
    scanf("%f", &Primeiranota);

    printf("Digite a segunda nota: ");
    scanf("%f", &Segundanota);

    printf("Digite a sua terceira nota: ");
    scanf("%f", &Terceiranota);

    system ("cls || clear");

    // Calculando a média.
    media = (Primeiranota + Segundanota + Terceiranota) / 3;

    // Exibindo dados do usúario
    printf("Nome: %s \n", nome);
    printf("Idade: %d \n", idade);
    printf("Media: %.2f \n", media);

    // Logica do programa
    if (media < 7)
    {
        printf("Aluno Reprovado");
    }
    else
    {
        printf("Aluno aprovado");
    }

    return 0;
}
