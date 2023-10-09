#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    int opcao, desconto, parcelas;
    float valorProduto, precoFinal, valorPorParcela; 
    
    // Requisitando dados do usúario
    printf("Digite o valor do produto: \n ");
    scanf("%f",&valorProduto);

    printf("Escolha uma das opções abaixo: \n");
    printf("1 - para pagamento a vista. \n");
    printf("2 - para pagamento  prazo. \n ");
    printf("Digite a opção desejada: ");
    scanf("%d",&opcao);

    switch (opcao) {
        case 1 : 
           desconto = valorProduto * 0.1;
           precoFinal = valorProduto - desconto;

           printf("Valor do produto: R$ %.2f \n", valorProduto);
           printf("Forma de pagamento: a vista \n");
           printf("Valor do desconto: R$ %.2f \n", desconto);
           printf("Total a pagar: R$ %.2f \n", precoFinal);
           break;

        case 2 : 
          do {
           printf("Digite a quatidade de parcelas que deseja pagar: ");
           scanf("%d", &parcelas);

           if (parcelas > 6 ) {
              printf("\nO parcelamento pode ser feito em até 6 parcelas \n");
              printf("Tente novamente... \n\n");
           }
          } while (parcelas > 6);

           valorPorParcela = valorProduto / parcelas; 
           precoFinal = valorProduto - desconto;

           printf("Valor do produto: R$ %.2f \n", valorProduto);
           printf("Forma de pagamento: a prazo \n");
           printf("Quantidade de pagamento: %d \n", parcelas);
           printf("Valor por parcela: R$ %.2f \n", valorPorParcela);
           printf("Total a pagar: R$ %.2f \n", precoFinal);
           break;
    default:
           printf("Opção invalida!");
        break;
    }

  return 0;
  
}
