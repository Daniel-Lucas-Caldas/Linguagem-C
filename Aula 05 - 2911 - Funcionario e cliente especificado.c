#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct dados_funcionario{
    char nome[200];
    char Datadeemissao[200];
    char matricula[200];
    char endereco[200];
};

struct dados_cliente{
    char nome[200];
    char DatadeNascimento[200];
    char endereco[200];
};

int main() {
    setlocale(LC_ALL, "portuguese");
    struct dados_funcionario funcionario[3];
    struct dados_cliente cliente[3];
    int i;

    for (i = 0; i < 3; i++)  {
        printf("\nSolicitando dados funcionário... \n");
        printf("Digite o nome do funcionário: \n");
        gets(funcionario[i].nome);

        printf("Digite a data de admissão: \n");
        gets(funcionario[i].Datadeemissao);

        printf("Digite a data da sua madricula: \n");
        gets(funcionario[i].matricula);
        
        printf("Digite o seu endereço: \n");
        gets(funcionario[i].endereco);
        fflush(stdin);
	}

    for (i = 0; i < 3; i++){
        printf("\nSolicitando dados do cliente... \n");
        printf("Digite o nome do cliente: \n");
        gets(cliente[i].nome);
        
        printf("Digite a sua data de nascimento: \n");
        gets(cliente[i].DatadeNascimento);

        printf("Digite o seu endereço: \n");
        gets(cliente[i].endereco);
        fflush(stdin);
    }

    system("cls || clear");
    
    for(i = 0; i < 3; i++) {
    	printf("\nExibindo os dados do funcionário... \n");
        printf("\nNome do funcionário: %s \n", funcionario[i].nome);
        printf("Data de emissão do funcionário: %s \n", funcionario[i].Datadeemissao);
        printf("Matrícula do funcionário: %s \n", funcionario[i].matricula);
        printf("Endereço do funcionário: %s \n", funcionario[i].endereco);
    }

   for (i = 0; i < 3; i++) {
        printf("\nExibindo os dados do cliente... \n");
        printf("\nNome do cliente: %s \n", cliente[i].nome);
        printf("Data de nascimento do cliente: %s \n", cliente[i].DatadeNascimento);
        printf("Endereço do cliente: %s \n", cliente[i].endereco);        	
    }
  return 0;
}