#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    int i;
    float nota, soma = 0, media; 
   
    for (i = 0; i < 2; i++) {
       do {
          printf("Digite a %d nota do aluno: ", i+1);
          scanf("%f", &nota);

         if (nota < 0 || nota > 10) {
            printf("Nota invalida! \n");
         }

        } while (nota < 0 || nota > 10);

      soma += nota;
    }

   media = soma / 2;
   printf("Sua média foi: %.1f \n", media);

  return 0;
} 
