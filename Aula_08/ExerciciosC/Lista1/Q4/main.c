#include <stdio.h>
#include <stdlib.h>
/*Enunciado : Uma fábrica utiliza uma tabela de códigos para identificar setores de pro-
dução. Exiba na tela uma matriz 2x2 já preenchida com os códigos definidos*/


int main()
{
    int cod[2][2] = {{10,20},{30,40}};

    printf("\n--- Tabela de codigos ---\n");
    printf("%d %d\n %d %d\n", cod[0][1], cod[1][0], cod[0][0], cod[1][1]);
}
