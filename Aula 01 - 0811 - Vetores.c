#include <string.h>
#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "portuguese");
    int vetor[5];
    int i;

    printf("Digite os elementos dos vetores:\n");
    for(i = 0; i < 5; i++) {
    printf("Elemento %d:", i + 1);
    scanf("%d", &vetor[i]);
    }

    system("cls || clear");

    for(i= 0; i < 5; i++) {
       printf("Elemento %d: %d\n", i+1, vetor[i]);
    }

    return 0;
}
 
