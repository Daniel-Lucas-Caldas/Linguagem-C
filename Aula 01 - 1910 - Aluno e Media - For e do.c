#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuquese");
    int i;
    float nota = 0, soma = 0, media = 0;
    char resultado [250];

    for (i = 0; i < 3; i++) {
        do {
            printf("Digite a %d nota: ", i+1);
            scanf("%f", &nota);
        } while (nota < 0 || nota > 10);
       soma += nota;
    }
   
    media = soma  / 3;
    if (media >= 7) {
        strcpy(resultado, "Aprovado");
    } else if (media >= 5) {
        strcpy(resultado, "Recuperação!");
    } else {
        strcpy(resultado,"Reprovado!");
    }

   printf("Media: %.1f \n", media);
   printf("Resultado: %s \n", resultado);
    
    return 0;
}

   // if (media >= 7) {
        // printf("Aluno aprovado");
    // } else if (media >= 5) {
       // printf("Aluno em recuperação");
    // } else {
       // printf("Aluno reprovado");
    // }
    