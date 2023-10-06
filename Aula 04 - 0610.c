#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    int dia;

    printf("Digite um dia da semana: ");
    scanf("%d", &dia);

    switch (dia) {
    case 1 :
       printf("Domingo, final de semana \n");
       break;
    case 2 :
       printf("segunda, dia util \n");
       break;
    case 3 :
       printf("terça-feira, dia util \n");
       break;
    case 4 :
       printf("quarta-feira, dia util \n");
       break;
    case 5 : 
       printf("quinta-feira, dia util \n");
       break;
    case 6 :
       printf("sexta-feira, dia util \n");
       break;
    case 7 : 
       printf("sabado, final de semana \n");
       break;
    default:
        printf("Opção invalida");
        break;
    }

   return 0;
}