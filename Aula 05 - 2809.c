#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
     setlocale(LC_ALL, "portuquese");

     char loginsalvo[200] = "Daniel";
     char senhasalva[200] = "007";
     char login [200];
     char senha [200];

     // Requisitando dados do usúario
     printf("Digite seu login: ");
     gets(login);

     printf("Digite a sua senha: ");
     gets(senha);

     // logica do programa //Strcmp
     if (strcmp(login, loginsalvo) == 0 && strcmp(senha, senhasalva) == 0) {
               printf("Acesso concedido");
          } else {
               printf("Login ou senha incorretos");
          }

return 0;

}

     // Anotaçoes
     // or - ou - ||
     // and - e - &&
     // igual ==
     // diferente !=