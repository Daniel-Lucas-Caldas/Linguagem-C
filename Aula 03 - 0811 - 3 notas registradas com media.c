#include <string.h>
#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "portuguese");
    float notas[3];
	float soma = 0;
	float media; 
	int i; 
    
    for(i = 0; i < 3; i++) {
        printf("Digite a %dª nota: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    
    media = soma / i; // A variavel i, sairá do laço com o valor 3.

    printf("\n Exibindo as notas: \n");

    for(i= 0; i < 3; i++) {
       printf("%dª nota: %.1f \n", i+1, notas[i]);
    }
    
    printf("\nMedia dos valores: %.1f \n", media);

    return 0;
}
