#include <stdio.h>
#include <stdlib.h>
/*Enunciado : Uma f�brica utiliza uma tabela de c�digos para identificar setores de pro-
du��o. Exiba na tela uma matriz 2x2 j� preenchida com os c�digos definidos*/


int main()
{
    int cod[2][2] = {{10,20},{30,40}};

    printf("\n--- Tabela de codigos ---\n");
    printf("%d %d\n %d %d\n", cod[0][1], cod[1][0], cod[0][0], cod[1][1]);
}
