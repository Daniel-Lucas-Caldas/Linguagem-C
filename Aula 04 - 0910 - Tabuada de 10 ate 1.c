#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    int i,j;
  
  printf ("Tabuada de 10 \n");
    for (i = 1; i <= 10; i++) {
       printf("%d x 10 = %d  \n", i, i*10);
    }
  printf("\n");

  printf ("Tabuada de 9 \n");
    for (i = 1; i <= 10; i++) {
       printf("%d x 9 = %d  \n", i, i*9);
    }
  printf("\n");

  printf ("Tabuada de 8 \n");
    for (i = 1; i <= 10; i++) {
       printf("%d x 5 = %d  \n", i, i*8);
    }
  printf("\n");

  printf ("Tabuada de 7 \n");
    for (i = 1; i <= 10; i++) {
       printf("%d x 7 = %d  \n", i, i*7);
    }
  printf("\n");

  printf ("Tabuada de 6 \n");
    for (i = 1; i <= 10; i++) {
       printf("%d x 6 = %d  \n", i, i*6);
    }
  printf("\n");

  printf ("Tabuada de 5 \n");
    for (i = 1; i <= 10; i++) {
       printf("%d x 5 = %d  \n", i, i*5);
    }
  printf("\n");

    printf ("Tabuada de 4 \n");
    for (i = 1; i <= 10; i++) {
       printf("%d x 4 = %d  \n", i, i*4);
    }
  printf("\n");

    printf ("Tabuada de 3 \n");
    for (i = 1; i <= 10; i++) {
       printf("%d x 3 = %d  \n", i, i*3);
    }
  printf("\n");

    printf ("Tabuada de 2 \n");
    for (i = 1; i <= 10; i++) {
       printf("%d x 2 = %d  \n", i, i*2);
    }
  printf("\n");

    printf ("Tabuada de 1 \n");
    for (i = 1; i <= 10; i++) {
       printf("%d x 1 = %d  \n", i, i*1);
    }
  printf("\n");

return 0;
}