#include <stdio.h>
#include <locale.h>
#include <string.h>

int main () {
    setlocale(LC_ALL, "portuguese");
    int i, nota, soma = 0;
    float media = 0;

    for (i = 0; i < 5; i++) {
     printf("Digite sua nota: ");
     scanf("%d", &nota);

     soma += nota;
     media = soma / 5;
     }

       if (media >= 7) {
        printf("Media do aluno: %.1f \n", media);
        printf("Aluno está aprovado");
     } else {
        printf("Media do aluno: %.1f \n", media);
        printf("Aluno está reprovado");
     }  

    return 0;
}