#include <string.h>
#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "portuguese");
    float notas[3];
    int i;
    
    for(i=0; i < 3; i++) {
        printf("Digite a %dª nota: ", i + 1);
        scanf("%f", &notas[1]);
    }
    
    printf("\n Exibindo as notas: \n");

    for(i= 0; i < 3; i++) {
       printf("%dª nota: %.1f \n", i+1, notas[i]);
    }

    return 0;
}
