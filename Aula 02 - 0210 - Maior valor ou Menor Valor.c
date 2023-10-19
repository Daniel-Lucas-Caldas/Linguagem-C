#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() { 
    setlocale(LC_ALL, "portuquese");
    int valorum, valordois, valortres, maior, menor;

    // Requisitando dados do usúario
    printf("Informe o primeiro valor: ");
    scanf("%d", &valorum);

    printf("Informe o segundo valor: ");
    scanf("%d", &valordois);

    printf("Informe o terceiro valor: ");
    scanf("%d", &valortres);

    if ((valorum > valordois) && (valorum > valortres)) {
        maior = valorum;
        if (valordois > valortres) {
            menor = valortres;
        } else {
            menor = valordois;
        }
    }

    if ((valordois > valorum) && (valordois > valortres)) {
        maior = valordois;
        if (valorum > valortres) {
            menor = valortres;
        } else {
            menor = valorum;
        }
    }

    if ((valortres > valorum) && (valortres > valordois)) {
        maior = valortres;
        if (valorum > valordois) {
            menor = valordois;
        } else {
            menor = valorum;
        }
    }

    // Exibindo dados do usúario
    printf("Maior valor: %d \n", maior);
    printf("Menor valor: %d \n", menor);

    return 0;

    }

    //
