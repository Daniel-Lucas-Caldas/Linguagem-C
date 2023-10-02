#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "portuquese");
    int codigo, ano, tempot, idade;
    char resultado [250]; //String

    // Requisitando dados do usúario
    printf("Informe o seu codigo de funcionario: ");
    scanf("%d", &codigo);

    printf("Informe o seu ano de nascimento: ");
    scanf("%d", &ano);

    printf("Informe o seu tempo de trabalho: ");
    scanf("%d", &tempot);

    //Calculando.
    idade = 2023 - ano;

     if (idade >= 65 || tempot >= 20) {
        strcpy(resultado,"Requerer aposentadoria!"); 
        } else {
        strcpy(resultado,"Não requerer aposentadoria!");
        }

    //Exibindo dados do usúario
    printf("Codigo do funcionario: %d \n", codigo); 
    printf("Idade do funcionario: %d \n", idade);
    printf("Tempo de serviço: %d \n", tempot);
    printf("Resultado da consulta: %s", resultado);

    return 0;

}

