#include <stdio.h>
#include <stdlib.h>
// printar cada letra da palavra separadamente
int main()
{

    char m1[] = "pneumoultramicroscopicossilicovulcanoconiose";
    int i = 0, size = 44; // variavel tamanho tem o tamanho da string

// "i sendo 0; enquanto i seja menor que o tamanho da frase; adicione 1 ao i"
    for (i = 0; i < size; i++){
        printf("%c\n", m1[i]);
    }
    return 0;
}
