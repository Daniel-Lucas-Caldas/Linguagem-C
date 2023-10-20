#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <time.h> // esperar alguns segundos e executa o comando seguinte

int main () {
    setlocale(LC_ALL, "portuguese");

    int idade;
    int maiorIdade;
    int menorIdade = 999;
    int mulheres5k = 0;
    int contadorSalario;
    int opcao;

    float salario;
    float somaSalario = 0;
    float mediaSalario;

    char sexo;

    do {
    printf("\n-----------Selecione uma das alternativas---------\n");
    printf(" codigo | Descrição                |  \n");
    printf(" 1      | Adicionar pessoa           |  \n");
    printf(" 2      | Sair e exibir resultados   |  \n");
    printf("\n--------------Fim--------------\n");
    printf("\n");
    
    switch(opcao){
    case 1 :
     printf("\nDigite sua idade: ");
     scanf("%d", &idade);

     printf("Digite o salario: ");
     scanf("%f", &salario);

     fflush(stdin);
     printf("Digite o seu sexo - M ou F: ");
     scanf("%c", &sexo);

     sexo = toupper(sexo);

     contadorSalario++;
     somaSalario += salario;

     maiorIdade = maiorIdade > idade ? maiorIdade : idade;
     menorIdade = menorIdade < idade ? menorIdade : idade;

     if(sexo == 'F' && salario >= 5000)
        mulheres5k++;
    
      system("cls || clear");

     break;
    case 2 :
      system("cls || clear");

      mediaSalario = somaSalario / contadorSalario;

     printf("Alternativa desejada \n\n");
     printf("\n");
     printf("A media de salario do grupo %.2f \n", mediaSalario);
     printf("Maior idade do grupo: %d \n ", maiorIdade);
     printf("Menor idade do grupo: %d \n ", menorIdade);
     printf("Quantidade de mulheres com salario acime de R$5.000,00: %d \n ", mulheres5k);
      break;

      default:
        printf("Opção invalida!");
        sleep(3);
        system("cls || clear");
    }

  }while (opcao != 2);
  return 0;
}