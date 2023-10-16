#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    int i, numero, par = 0, impar = 0;
   
   for (i = 1; i <= 5; i++) {
        printf("Digite o %d número: ", i);
        scanf("%d", &numero);

        if (numero%2 == 0) {
            par += 1;
        } else {
            impar += 1;
        }      
   }
   printf("Números pares: %d \n", par);
   printf("Números impares: %d \n", impar);

  return 0;
} 
