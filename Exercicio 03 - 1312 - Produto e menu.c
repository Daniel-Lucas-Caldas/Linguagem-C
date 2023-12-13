#include <stdio.h>
#include <string.h>
#include <locale.h>

const int ESTOQUE = 100;

int main() {
    setlocale(LC_ALL, "portuguese");
     struct ficha_produto {
		char nomeDoProduto[200];
		char precoUnitario[200];
		int quantidade[200];
    };

    struct conta_bancaria produto;

    char nome[10][100], numero[10][100];
    int opcao, i, counter = 0;
	
	printf("|--------------Opções---------|\n");
    printf("|codigo | alternatinas        |\n");
    printf("|1      | Realizar uma compra |\n");
    printf("|2      | Consultar estoque   |\n");
    printf("|3      | Sair do programa    |\n");
    printf("|---------------Fim-----------|\n");
    
	do{
		printf("opção: ");
		scanf("%i", &opcao);
		
		if(opcao == 1){	
          printf("Digite o nome do produto: ");
		  gets(produto.nomeDoProduto);
		  fflush(stdin);

		  printf("Digite o preço do produto: ");
		  gets(produto.precoUnitario);
		  fflush(stdin);

		  printf("Digite a quantidade desejada: ");
		  gets(produto.quantidade);
		  fflush(stdin);

		  compraRealizada(precoUnitario, quantidade);

		} else if (opcao == 2) {
			printf("Estoque do produto principal: %d \n", ESTOQUE);
		} else break;

	} while (opcao == 3);
	

    return 0;
}
