#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main () {
  setlocale(LC_ALL, "portuguese");
  int numeroUsuario;
  int numeroEscolhido = 666;

  printf("BEM-VINDO AO DESAFIO, ADIVINHE O N�MERO ENTRE 0/100!!!!! \n\n");

  do{
    printf("Digite um valor qualquer at� acertar o valor pr�-definido: ");
    scanf("%d", &numeroUsuario);

    if (numeroUsuario > numeroEscolhido) {
      printf("O n�mero digitado � maior que o escolhido!!! \n\n");
      sleep(3);
      system("cls || clear");
    } else if (numeroUsuario < numeroEscolhido) {
      printf("O n�mero digitado � menor que o escolhido!!! \n\n");
      sleep(3);
      system("cls || clear");
    } else {
      printf("parab�ns, vo�e acertou!!! \n");
    }
    
    } while (numeroUsuario != numeroEscolhido);
  return 0;
}