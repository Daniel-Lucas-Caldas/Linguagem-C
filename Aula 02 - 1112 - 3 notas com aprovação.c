#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

float calculoMedia(float notas[]) {
    int i; 
    float somaNotas = 0, media;
    
    for (i = 0; i < 3; i++) {
        somaNotas += notas[i];
    }

    media += somaNotas / i;
    return media;
}

char* mostrarSituacao (float media) {
	char resultado[200];
	
	if (media >= 7) {
        strcpy(resultado, "Aprovado");
    } else {
        strcpy(resultado, "Reprovado");
    }
	return resultado;
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
   printf("Resultado %s \n", mostrarSituacao(media));
  
    return 0;
}