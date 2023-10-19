#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
     setlocale(LC_ALL, "portuquese");

int  n1, n2, soma, produto, maior, menor; 
float media = 0;

// Requisitando dados do usúario
printf("Digite o primeiro valor: ");
scanf("%d", &n1);

printf("Digite o segundo valor: ");
scanf("%d", &n2);

 system ("cls || clear");

// Calculando.
media = (n1 + n2) / 2;
soma = (n1 + n2);
produto = (n1 * n2);

// Operação Ternária
//maior = n1 > n2 ? n1 : n2;
//menor = n1 < n2 ? n1 : n2;

// Logica do programa.
if (n1 > n2) {
    maior = n1;
    menor = n2;
} else {
    maior = n2;
    menor = n1;
}

// Exibindo dados do usúario
printf("Primeiro valor: %d \n", n1);
printf("Segundo valor: %d \n", n2);
printf("Media: %.2f \n", media);
printf("Maior: %d \n", maior);
printf("Menor: %d \n", menor);
printf("Resultado da soma: %d \n", soma);
printf("Resultado do produto: %d \n", produto);

    return 0;

}
