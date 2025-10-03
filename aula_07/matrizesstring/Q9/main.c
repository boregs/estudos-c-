#include <stdio.h>
#include <stdlib.h>

/*Enunciado : Um cinema permite a entrada apenas de maiores de 18 anos em uma sessão.
Leia a idade informada e exiba se o cliente pode ou não assistir ao filme.*/

int main()
{
    int idade;
    printf("\nAtendente do cinema: Ei, ei, ei, voce ai, nao pode entrar se for menor de 18, qual sua idade?\n");
    scanf("%d", &idade);
    printf("\nVoce: tenho %d\n", idade);
    if (idade < 18){
        printf("\nAtendente do cinema: Ok, esta liberado\n");
    } else{
        printf("\nAtendente do cinema: Nao vai entrar!!!!!\n");
        }

}
