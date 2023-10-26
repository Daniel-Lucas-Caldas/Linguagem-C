#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <time.h>

int main () {
    setlocale(LC_ALL, "portuguese");
    int opcao, idade, contadorHomens = 0, contadorMulheres = 0, maiorIdade, menorIdade = 999, mulheres5mil, contadorSalario;
    float salario, somaSalario = 0, mediaSalario;
    char sexo;

    do {
    printf("\n-----------Selecione uma das alternativas---------\n");
    printf(" codigo | Descrição                  |  \n");
    printf(" 1      | Adicionar pessoa           |  \n");
    printf(" 2      | Sair e exibir resultados   |  \n");
    printf("\n--------------Fim--------------\n");
    printf("\n");

    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);
    
    switch(opcao) {
    case 1 :
     printf("\nDigite sua idade: ");
     scanf("%d", &idade);

     printf("Digite o salario: ");
     scanf("%f", &salario);

     fflush(stdin);
     printf("Digite o seu sexo - M ou F: ");
     scanf("%c", &sexo);

     sexo = toupper(sexo);

     if (sexo == 'M') {
         contadorHomens++;
     } else if (sexo == 'F') {
         contadorMulheres++;
     }
     
     contadorSalario++;
     somaSalario += salario;

     maiorIdade = maiorIdade > idade ? maiorIdade : idade;
     menorIdade = menorIdade < idade ? menorIdade : idade;

     if(sexo == 'F' && salario >= 5000)
        mulheres5mil++;
    
     system("cls || clear");
     break;

     case 2 :
     system("cls || clear");

     mediaSalario = somaSalario / contadorSalario;

     printf("Alternativa desejada \n");
     printf("\n");
     printf("Maior idade do grupo: %d \n ", maiorIdade);
     printf("Menor idade do grupo: %d \n ", menorIdade);
     printf("Quantidade de homens: %d \n", contadorHomens);
     printf("Quantidade de mulheres: %d \n", contadorMulheres);
     printf("Quantidade de mulheres com salario acima de R$5.000,00: %d \n ", mulheres5mil);
     printf("A media de salario do grupo: %.2f \n", mediaSalario);

     break;

      default:
        printf("Opção invalida!");
        sleep(3);
        system("cls || clear");
    }

  }while (opcao != 2);
  return 0;
}