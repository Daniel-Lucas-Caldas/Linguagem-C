#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main () {
  setlocale(LC_ALL, "portuguese");
  int numeroUsuario;
  int numeroEscolhido = 666;

  printf("BEM-VINDO AO DESAFIO, ADIVINHE O NÚMERO ENTRE 0/100!!!!! \n\n");

  do{
    printf("Digite um valor qualquer até acertar o valor pré-definido: ");
    scanf("%d", &numeroUsuario);

    if (numeroUsuario > numeroEscolhido) {
      printf("O número digitado é maior que o escolhido!!! \n\n");
      sleep(3);
      system("cls || clear");
    } else if (numeroUsuario < numeroEscolhido) {
      printf("O número digitado é menor que o escolhido!!! \n\n");
      sleep(3);
      system("cls || clear");
    } else {
      printf("parabéns, voçe acertou!!! \n");
    }
    
    } while (numeroUsuario != numeroEscolhido);
  return 0;
}