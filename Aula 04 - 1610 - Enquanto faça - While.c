#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    float nota;
   
   printf("Digite a nota do aluno: ");
   scanf("%f", &nota);

   // Laço de repetição / While
   while (nota < 0 || nota > 10) {
    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);
   }
   
   // Laço de repetição resumido / Do - While 
   do {
    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);
   } while (nota < 0 || nota > 10);
   

   printf("Nota: %.1f \n", nota);
  return 0;
} 