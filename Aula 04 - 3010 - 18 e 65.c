#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "portuguese");
    int ano = 0;
    float Idadeideal = 0;

    printf("Digite o seu ano de nascimento: ");
    scanf("%d", &ano);

    // calculo de idade
    Idadeideal = 2023 - ano;

    if (Idadeideal >= 18 && Idadeideal < 65) {
        printf("O individuo pode votar");
    } else if (Idadeideal < 18 && Idadeideal >= 65) {
        printf("O individuo não pode votar");
    }

    return 0;
    }