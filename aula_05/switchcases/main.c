#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* O switch na linguagem C � uma estrutura de controle de fluxo
    que executa blocos de c�digo espec�ficos com base no valor de uma vari�vel.
    � uma alternativa mais limpa e eficiente para cadeias de instru��es if-else if-else.
    */

    int x = 3;

    switch (x){
    case 1:
        printf("um");
        break;
    case 2:
        printf("dois");
        break;
    case 3:
        printf("tres");
        break;

    }
}
