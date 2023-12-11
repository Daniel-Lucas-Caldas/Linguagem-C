#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calculoMedia(float notas[]) {
    int i; 
    float somaNotas = 0, media;
    for (i = 0; i < 3; i++) {
        somaNotas += notas[i];
    }

    media += somaNotas / i;
    return media;
}

int main () {
    setlocale(LC_ALL, "");
    float notas[3], media;
    int i;

   for (i = 0; i < 3; i++) {
     printf("Digite a %dª nota do aluno: ", i + 1);
     scanf("%f", &notas[i]);
   }

   media = calculoMedia(notas);
  
   printf("\nMedia do aluno: %f \n", media);
 
    return 0;
}