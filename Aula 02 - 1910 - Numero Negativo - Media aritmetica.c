#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
   setlocale(LC_ALL,"portuguese");
   int numero, quantidade = 0;
   float soma = 0, media = 0;

   do {
      printf("Digite o %d n�mero: ", quantidade + 1);
      scanf("%d", &numero);

      if (numero > 0) {
         soma += numero;
         quantidade++;
      }
   } while (numero > 0);

   media = soma / quantidade;
   printf("M�dia: %.1f \n", media);

   return 0;
}