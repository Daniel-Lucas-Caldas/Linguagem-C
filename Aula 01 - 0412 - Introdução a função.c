#include <stdio.h>
#include <stdlib.H>

int main () {
    char nome[200];
    int idade;
    
    printf("\n=====================================\n");
    printf("\t Senai\n"); // (\t)funciona semelhante a um tab
    printf("\n=====================================\n");
    
    printf("Digite seu nome: ");
    gets(nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    system("cls || clear");

    printf("\n=====================================\n");
    printf("\t Senai\n");
    printf("\n=====================================\n");
    printf("Nome: %s \n", nome);
    print("Idade: %d \n", idade);
    
    return 0;
}