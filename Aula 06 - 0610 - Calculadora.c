#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    int valorum, valordois, resultado;
    char opcao;

    printf("Digite o primeiro valor: ");
    scanf("%i",&valorum);

    printf("Digite o segundo valor: ");
    scanf("%i",&valordois);
    
    fflush(stdin);

    printf("Digite a operação: ");
    scanf("%c",&opcao);

    switch(opcao) {
    case '+' :
       resultado = valorum + valordois;
       break;
    case '-' :
       resultado = valorum - valordois;
       break;
    case '*' :
       resultado = valorum * valordois;
       break;
    case '/' :
       resultado = valorum / valordois;
       break;
    default:
        printf("Opção invalida!");
        break;
    }

    printf("Valor da operação: %i \n", resultado);

return 0;
}
