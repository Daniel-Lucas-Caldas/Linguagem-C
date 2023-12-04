#include <stdio.h>
#include <stdlib.H>

void cabecalho () {
	printf("\n=====================================\n");
    printf("\t Senai-Ba\n"); // (\t)funciona semelhante a um tab
    printf("\n=====================================\n");
}

void limpatela () {
	system("cls || clear");
}

int main () {
    char nome[200];
    int idade;
    
    cabecalho ();
    printf("Digite seu nome: ");
    gets(nome);
    limpatela ();
    
    cabecalho ();
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    limpatela ();

    cabecalho ();
    printf("Nome: %s \n", nome);
    print("Idade: %d \n", idade);
    
    return 0;
}
