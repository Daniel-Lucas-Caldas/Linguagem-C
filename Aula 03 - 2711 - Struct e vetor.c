#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    struct ficha_usuario{
        char nome[200];
        int idade;
        float peso, altura;
    };

    struct ficha_usuario usuario[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite o nome do us�ario: ");
        gets(usuario[i].nome);

        printf("Digite a idade do us�ario: ");
        scanf("%d", &usuario[i].idade);

        printf("Digite o peso do us�ario: ");
        scanf("%f", &usuario[i].peso);

        printf("Digite a altura do us�ario: ");
        scanf("%f", &usuario[i].altura);
        fflush(stdin);
        system("cls");
    }

    system("cls");

    printf("\nExibindo os dados do us�ario... \n");

    for (i = 0; i < 5; i++) {
        printf("Nome do us�ario: %s \n", usuario[i].nome);
        printf("Idade do us�ario: %d \n", usuario[i].idade);
        printf("Peso do us�ario: %f \n", usuario[i].peso);
        printf("Altura do us�ario: %f \n", usuario[i].altura);
    }
     
    return 0;
 }