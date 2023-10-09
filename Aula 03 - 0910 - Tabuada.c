#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    int i,j;
  
  printf ("Tabuada de 3 \n");
    for (i = 1; i <= 10; i++) {
       printf("%d x 3 = %d  \n", i, i*3);
    }
  printf("\n");

  printf ("Tabuada de 5 \n");
    for (i = 1; i <= 10; i++) {
       printf("%d x 5 = %d  \n", i, i*5);
    }
  printf("\n");

  printf ("Tabuada de 7 \n");
    for (i = 1; i <= 10; i++) {
       printf("%d x 7 = %d  \n", i, i*7);
    }
  printf("\n");
  
  //Os tres em um unico laço
  for (j = 3; j <= 7; j+=2) {
    for (i = 1; i <= 10; i++) {
      printf("%d x %d = %d \n", j, i, i*j);
  }
  printf ("\n");
}

return 0;
}