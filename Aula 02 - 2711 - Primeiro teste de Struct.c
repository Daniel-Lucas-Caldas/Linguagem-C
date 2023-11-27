#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    struct ficha_usuario {
        char nome[200];
        int idade;
        float peso, altura;
    };

    struct ficha_usuario usuario;

    printf("Digite o nome do usúario: ");
    gets(usuario.nome);

    printf("Digite a idade do usúario: ");
    scanf("%d", &usuario.idade);

    printf("Digite o peso do usúario: ");
    scanf("%f", &usuario.peso);

    printf("Sigite a altura do usúario: ");
    scanf("%f", &usuario.altura);

    printf("\nExibindo os dados do usúario... \n");
    
    printf("Nome do usúario: %s \n", usuario.nome);
    printf("Idade do usúario: %d \n", usuario.idade);
    printf("Peso do usúario: %f \n", usuario.peso);
    printf("Altura do usúario: %f \n", usuario.altura);
    
    return 0;
 }