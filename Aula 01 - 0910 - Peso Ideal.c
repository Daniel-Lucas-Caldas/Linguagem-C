#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    char sexo;
    float alturaUsuario, pesoUsuario, pesoIdeal; 
    
    // Requisitando dados do usúario
    printf("Codigo dos generos: \n M - Masculino \n F - Feminino \n");
    
    printf("Digite o seu genero:");
    scanf("%c", &sexo);

    printf("Digite a sua altura: ");
    scanf("%f", &alturaUsuario);

    printf("Digite o seu peso: ");  
    scanf("%f", &pesoUsuario);

    //Convertendo o caracter em maisculo.
    sexo = toupper(sexo);

    switch (sexo) {
       case 'M' : 
       pesoIdeal = (pesoUsuario * alturaUsuario) - 58;
       printf ("O peso ideal para o usúario é: %.2f \n", pesoIdeal);
       break;

       case 'F' : 
       pesoIdeal = (pesoUsuario * alturaUsuario) - 44.7;
       printf ("O peso ideal para o usúario é: %.2f \n", pesoIdeal);
       break;

       default:
       printf("Opção invalida!");
       break;

    }

  return 0;
}
