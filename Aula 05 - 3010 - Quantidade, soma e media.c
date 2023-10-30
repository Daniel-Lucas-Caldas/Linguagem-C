#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "portuguese");
    int numero, quantidade = 0, soma;
    float media = 0;

    do {
    printf("Digite um n�mero qualquer: ");
    scanf("%d", &numero);
    if (numero >= 10) {
         quantidade++;
         soma += numero;
    } else if (numero >= 0) {
        quantidade++;
        soma += numero;
    }

    media = soma / quantidade;

    } while (numero != -1);

    printf("Quantidade de numeros: %d \n", quantidade);
    printf("Soma dos n�meros: %d \n", soma);
    printf("M�dia dos n�meros: %.1f \n", media);

    return 0;
}