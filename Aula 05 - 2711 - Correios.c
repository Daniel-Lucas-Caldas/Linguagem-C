#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    struct ficha_correios{
        char nome[200], endereco[250];
        int idade; 
    };

    struct ficha_correios correios[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("Informe o seu nome: ");
        gets(correios[i].nome);

        printf("Informe a sua idade: ");
        scanf("%d", &correios[i].idade);
        
        fflush(stdin);

        printf("Informe o seu endereço: ");
        gets(correios[i].endereco);
    }

    printf("\nExibindo os dados do usúario... \n");

    for (i = 0; i < 3; i++) {
        printf("Nome do usúario: %s \n", correios[i].nome);
        printf("Idade do usúario: %d \n", correios[i].idade);
        printf("Endereço do usúario: %s \n", correios[i].endereco);
    }

    return 0;
 }