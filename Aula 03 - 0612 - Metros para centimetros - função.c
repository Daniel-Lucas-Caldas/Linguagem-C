#include <stdio.h>

int converter (int metros) {
    int centimetros = metros * 100;
    return centimetros;   
}

int main(){
  float metros = 0, centimetros = 0;

  printf("Digite a quantidade de metros: ");
  scanf("%f", &metros);
  
  centimetros = converter(metros);
  printf("%.1f cm", centimetros);

  return 0;
}