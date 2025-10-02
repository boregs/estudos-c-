#include <stdio.h>
#include <stdlib.h>

/*Enunciado : Um programa deve registrar a idade (short) e a altura (float) de um
aluno e imprimir essas informações formatadas.*/

int main()
{
    short idade;
    float altura;

    printf("\nDigite sua altura\n");
    scanf("%f", &altura);
    printf("\nDigite sua idade\n");
    scanf("%hd", &idade);
    printf("\nVoce tem %hd anos e %.2f metros de altura\n", idade, altura);

}
