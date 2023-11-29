#include <stdio.h>
#include <string.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "portuguese");
    int i;

    struct dados_usuarios {
        char nome[200];
        float DatadeNascimento, RG, CPF;
		};  

    struct dados_usuarios usuarios[3];
   
   printf("\nDeclare as informações dos usúarios \n");

   for (i = 0; i < 5; i++) {
        printf("Digite o nome do usúario: ");
        gets(usuarios[i].nome);

        printf("Digite a data de nascimento do usúario: ");
        scanf("%f", &usuarios[i].DatadeNascimento);
        fflush(stdin);

       printf("Digite o seu RG: \n");
       scanf("%f", &usuarios[i].RG);
       fflush(stdin);

       printf("Digite o CPF: \n");
       scanf("%f", &usuarios[i].CPF);
       fflush(stdin);
   }

   system("cls || clear");
   
   printf("\nExibindo os dados do usúario... \n");

    for (i = 0; i < 5; i++) {
        printf("Nome do usúario: %s \n", usuarios[i].nome);
        printf("Data de nascimento do usúario: %f \n", usuarios[i].DatadeNascimento);
        printf("RG do usúario: %f \n", usuarios[i].RG);
        printf("CPF do usúario: %f \n", usuarios[i].CPF);
        printf("\n\n");
    }

    return 0;
 }