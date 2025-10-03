#include <stdio.h>
#include <stdlib.h>

/*Enunciado : Um cinema permite a entrada apenas de maiores de 18 anos em uma sessão.
Leia a idade informada e exiba se o cliente pode ou não assistir ao filme.*/

int main()
{
    int idade;
    printf("\nZe: ou ou ou, nao pode entrar se for menor de 18, qual sua idade\n");
    scanf("%d", &idade);
    printf("\nVoce: tenho %d\n", idade);
    if (idade < 18){
        printf("\nZe: vai entrar nao malandro\n");
    } else{
        printf("\nZe: Pode seguir viagem chefia\n");
        }

}
