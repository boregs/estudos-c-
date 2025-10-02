#include <stdio.h>
#include <stdlib.h>
/*Enunciado : Um sistema de cadastro deve solicitar o nome completo de um usuário e
exibi-lo de volta como mensagem de boas-vindas*/

int main()
{
   char nome[50];
   printf("\n---- Digite seu nome completo ----\n");
   fgets(nome, sizeof(nome),stdin);
   printf("\nSeu nome - %s\n", nome);
}
