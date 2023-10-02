#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() { 
    setlocale(LC_ALL, "portuquese");
     int idade; 

    // Requisitando dados do usúario
     printf("Informe a sua idade: ");
     scanf("%d", &idade);

    // Logica do programa.
    if (idade >= 18 && idade <= 65) {
    printf ("O individuo pode votar");
    } else {
    printf ("O individuo não pode votar"); }

return 0;
}