#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float numero = 0;
    
// Requisitando dados do usúario 
    printf("Digite o valor: ");
    scanf("%f", &numero);

// Logica do programa 
    if (numero == 10)
    {
        printf("E igual a 10!");
    }
    else if (numero > 10)
    {
        printf("E maior que 10!");
    }
    else if (numero > 5)
    {
        printf("E maior que 5!");
    }
    else if (numero > 3)
    {
        printf("E maior que 3!");
    }
    else
    {
        printf("Não é maior que 3!");
    }
    return 0;
}