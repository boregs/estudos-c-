#include <stdio.h>
#include <stdlib.h>

#define linhas 10
#define colunas 3
int main()
{
    // matrizes multidimensionais

    int m2[linhas][colunas];
    int contador = 1;

    for(int linha = 0; linha < linhas; linha++){
        for(int coluna = 0 ; coluna < colunas; coluna++){
            m2[linha][coluna] = contador;
            contador++;
        }
    }

    for(int linha = 0; linha < linhas; linha++){
        for(int coluna = 0; coluna < colunas; coluna++){
            printf(" %02d", m2[linha][coluna] );
            contador++;
        }
        printf("\n");
    }

}
