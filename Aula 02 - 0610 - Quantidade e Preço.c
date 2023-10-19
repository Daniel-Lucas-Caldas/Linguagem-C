#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuquese");
    int quantidade; 
    float precoUnitario;
    float precoFinal;

    printf("Digite a quantidade de macas: ");
    scanf("%d", &quantidade)

   // Operação Ternaria 
   //precoUnitario = quantidade < 12 ? 1.30 : 1.0;
   //precoFinal = quantidade * precoUnitario;

   if (quantidade < 12) {
    precoUnitario = 1.30;
   } else {
    precoUnitario = 1.0;
   }

  printf("Quantidade de macas: %d \n", quantidade);
  printf("Preço unitario: R$ %.2f \n", precoUnitario);
  printf("Preço final: R$ %.2f \n", precoFinal);

    return 0;
  } 
