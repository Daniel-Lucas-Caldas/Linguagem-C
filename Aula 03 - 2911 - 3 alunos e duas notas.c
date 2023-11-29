#include <stdio.h>
#include <string.h>
#include <locale.h>

   struct dados_aluno {
        char nome[200];
        int idade;
        float notas[2]; // Duas notas.
        float media; 
    };  
    
int main () {
    setlocale(LC_ALL, "portuguese");
    float somaNotas = 0;
    int i,j;

   struct dados_aluno aluno[3];
   
   printf("\nDeclare as informações dos usúarios \n");

   for (i = 0; i < 3; i++) {
        printf("Digite o nome do usúario: ");
        gets(aluno[i].nome);

        printf("Digite a sua idade: ");
        scanf("%d", &aluno[i].idade);

        for (j = 0; j < 2; j++) {
            printf("Digite a %dª nota: \n", j + 1);
            scanf("%f", &aluno[i].notas[j]);
            somaNotas += aluno[i].notas[j];
        }
        
        aluno[i].media = somaNotas / j;
        somaNotas = 0;
        
        fflush(stdin);
   }

   printf("\nExibindo os dados do usúario... \n");

    for (i = 0; i < 3; i++) {
        printf("Nome do aluno: %s \n", aluno[i].nome);
        printf("Idade do aluno: %d \n", aluno[i].idade);

        for (j = 0; j < 2; j++) {
            printf("\n%dª nota do aluno: %.2f \n", j + 1, aluno[i].notas[j]);
        }
        printf("Média do aluno: %.2f \n", aluno[i].media);
    }

    return 0;
 }