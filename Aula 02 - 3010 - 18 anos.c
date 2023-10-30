#include <stdio.h>
#include <string.h>
#include <locale.h>


    char nome[250];
    char sexo;
    int ano;
    int Idadeideal = 0; 

    printf("Digite o seu nome: ");
    gets(nome);

    printf("Digite o seu gen�ro: M - Masculino ou F - Feminino: ");
    scanf("%c", &sexo);

    printf("Digite o seu ano de nascimento: ");
    scanf("%d", &ano);

    // calculo de idade
    Idadeideal = 2023 - ano;

    if (Idadeideal >= 18) {
        printf("O candidado pode se candidatar");
    } else {
        printf("O candidado n�o pode se candidatar");
    }

    return 0;
    }