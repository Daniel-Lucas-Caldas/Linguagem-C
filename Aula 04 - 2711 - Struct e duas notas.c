#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    struct ficha_aluno {
        char nome[200];
        int idade;
        float nota[2];
    };

    struct ficha_aluno aluno[3];
    int i, j;

    for (i = 0; i < 3; i++) {
        printf("Informe o seu nome: \n");
        gets(aluno[i].nome);
        fflush(stdin);

        printf("Informe a sua idade: \n");
        scanf("%d", &aluno[i].idade);

        for (j = 0; j < 2; j++) {
            printf("Digite a %d nota: ", j + 1);
            scanf("%f", &aluno[i].nota[j]);
            fflush(stdin);
        }
    }

    system("cls || clear");

    printf("\nExibindo os dados do usúario... \n");

    for (i = 0; i < 3; i++) {
        printf("Nome do usúario: %s \n", aluno[i].nome);
        printf("Idade do usúario: %d \n", aluno[i].idade);

        for (j = 0; j < 2; j++) {
            printf("%dª nota: %.1f \n", j + 1, aluno[i].nota[j]);
        }
    }
    return 0;
}