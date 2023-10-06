#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    int valor, parcela, opcao, resultado;

    printf("Digite o valor do produto: ");
    scanf("%i",&valor);

    fflush(stdin);

    printf("Digite a forma de pagamento: 1 - A vista ou 2 - a prazo: ");
    scanf("%i",&opcao);

    switch (opcao) {
        case 1 : 
           resultado = valor - 90/100;
           break;
        case 2 : 
           printf("Digite a quatidade de parcelas que deseja pagar: ");
           scanf("%f", &parcela);
           resultado = valor / parcela;
           break;
    default:
           printf("Opção invalida!");
        break;
    }

    if (opcao = 1) {
        printf("Valor do produto: R$ %i \n", valor);
        printf("Forma de pagamento: %i \n", opcao);
        printf("Valor do desconto: não teve desconto \n");
        printf("Total a pagar: %i \n", resultado);
      } else {
        printf("Valor do produto: R$ %i \n", valor);
        printf("Forma de pagamento: %i \n", opcao);
        printf("Quantidade de pagamento: %i \n", parcela);
        printf("Valor por parcela: %i \n", resultado);
        printf("Total a pagar: %i \n", valor);
    }

  return 0;
  
}