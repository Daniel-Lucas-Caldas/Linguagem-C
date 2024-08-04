#include <stdio.h>
#include <string.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "portuguese");
    float notas[4];
	float soma = 0;
	float media; 
	int i; 
    
    for(i = 0; i < 4; i++) {
        printf("Digite a %dª nota: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    
    printf("\n Exibindo as notas: \n");

    for(i= 0; i < 4; i++) {
       printf("%dª nota: %.1f \n", i+1, notas[i]);
    }

    media = soma / i; 
    printf("\nMedia dos valores: %.1f \n", media);
    
    if (media >= 7) {
       printf("Aprovado");
    } else if (media >= 5) {
       printf("Recuperação");
    } else if (media <= 5) {
       printf("Reprovado");
    }

    return 0;
}
