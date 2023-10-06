#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    int opcao;
    int prato;
    int preco;

    printf("\n--------------Menu--------------\n");
    printf(" codigo | prato          | valor \n");
    printf(" 1      | Picanha        | 25,00 \n");
    printf(" 2      | Lasanha        | 20,00 \n");
    printf(" 3      | Strogonoff     | 18,00 \n");
    printf(" 4      | Bife Acebolado | 15,00 \n");
    printf(" 5      | Pão com ovo   | 5,00     ");
    printf("\n--------------Fim--------------\n");

    printf("Digite o prato desejado: ");
    scanf("%d", &opcao);

    system("cls || clear");

    switch (opcao) {
    case 1 :
       //printf("picanha \nValor: R$25,00");
       printf("Codigo: 01 \n");
       printf("Prato: Picanha \n");
       printf("Preço: R$25,00 \n");
       break;
    case 2 :
       printf("Lasanha \nValor: R$20,00");
       break;
    case 3 :
       printf("Strogonoff \nValor: R$18,00");
       break;
    case 4 :
       printf("Bife Acebolado \nValor: R$15,00");
       break;
    case 5 : 
       strcpy(prato, "Pão com ovo");
       preco = 5,00;
       //printf("Pão com ovo \nValor: R$5,00");
       break;
    default:
        printf("Opção invalida");
        break;
    }

   printf("Codigo: " );
   printf("Prato );
   printf("Preço):

return 0;
}