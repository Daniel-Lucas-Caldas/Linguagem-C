#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int i;

    // para i de 1 ate 10 faca / Versão 01 / vai na ordem
    for (i = 1; i <= 10; i++) {
       printf("%d \n", i);
    }

    // Versão 02 / Vai ir de dois em dois 
     for (i = 1; i <= 10; i=i+2) {
       printf("%d \n", i);
    }

    // para i de 10 ate 1 passo -1 faca
      for (i = 1; i >= 10; i--) {
       printf("%d \n", i);
    }

    return 0;
}
    