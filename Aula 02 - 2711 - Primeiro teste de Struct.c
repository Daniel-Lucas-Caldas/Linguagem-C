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

    printf("Digite o nome do us�ario: ");
    gets(usuario.nome);

    printf("Digite a idade do us�ario: ");
    scanf("%d", &usuario.idade);

    printf("Digite o peso do us�ario: ");
    scanf("%f", &usuario.peso);

    printf("Sigite a altura do us�ario: ");
    scanf("%f", &usuario.altura);

    printf("\nExibindo os dados do us�ario... \n");
    
    printf("Nome do us�ario: %s \n", usuario.nome);
    printf("Idade do us�ario: %d \n", usuario.idade);
    printf("Peso do us�ario: %f \n", usuario.peso);
    printf("Altura do us�ario: %f \n", usuario.altura);
    
    return 0;
 }