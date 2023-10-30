#include <stdio.h>
#include <string.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "portuguese");
    int i, numero, par = 0, impar = 0;
   
   for (i = 1; i <= 5; i++) {
        printf("Digite o %d n?mero: ", i);
        scanf("%d", &numero);

        if (numero%2 == 0) {
            par += 1;
        } else {
            impar += 1;
        }      
   }
   printf("N?meros pares: %d \n", par);
   printf("N?meros impares: %d \n", impar);

  return 0;
} 