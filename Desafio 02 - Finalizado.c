#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    float alturaUsuario, pesoUsuario, quadrado, operacao; 
    
    printf("Descubra sua condição \n\n");

    printf("Digite o seu peso: ");  
    scanf("%f", &pesoUsuario);

    printf("Digite a sua altura: ");
    scanf("%f", &alturaUsuario);

    quadrado = alturaUsuario * alturaUsuario; 
    operacao = pesoUsuario / quadrado;

    printf("imc: %.1f \n", operacao);
    
    if (operacao < 18.5) {
      printf("Voçe está abaixo do peso");
    } else if (operacao >= 18.6 && operacao <= 24.9) {
      printf("peso ideal, meus parabéns");
    } else if (operacao >= 25.0 && operacao <= 29.9) {
      printf("levemente acima do peso");
    } else if (operacao >= 30.0 && operacao <= 34.9) {
      printf("obesidade grau I");
    } else if (operacao >= 35.0 && operacao <= 39.9) {
      printf("obesidade grau II (severa)");
    } else if (operacao >= 40.0) {
      printf("obesidade grau III (mórbida)");
    }
    
  return 0;
}