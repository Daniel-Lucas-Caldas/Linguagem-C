#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Primeiranota = 0;
    float Segundanota = 0;
    float media = 0;

    // Solicitando dados do usúario.
    printf("Digite a sua primeira nota: ");
    scanf("%f", &Primeiranota);

    printf("Digite a segunda nota: ");
    scanf("%f", &Segundanota);

    // Calculando a média.
    media = (Primeiranota + Segundanota) / 2;

    System("cls || clear");

    // Exibindo dados do usúario
   if (media >= 7)
   {
    printf ("Aprovado \n");
   }
   else
   {
    printf ("Reprovado \n");
   }
   printf ("Media: %.2f", media);

    return 0;
}