#include <stdio.h>
#include <stdlib.h>

int main()
{
    int True = 1;
    int contador = 1;
    int limite = 10;

    do //executa o codigo primeiro, depois testa se a condição é favoravel para loopar
    {
        printf("Hello World!\n");
        contador += 1;
    }while(contador >= limite);
    return 0;
}
