#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100];
    char s2[100];
    int size = 0;

    printf("\n S1 antes da alocacao = %s\n", s1);
    strcpy(s1, "Giannis Antetokoumnpo");
    printf("\n S1 depois da alocacao =  %s\n", s1);

    size = strlen(s1);
    printf("\nTamanho da string: %d", size);

    s1[17] = '\0'; // transforma a posi��o no '\0', fazendo o print da string ir ate aquela posi��o
    // s1[17] = '7'; | substitui a letra na posi��o da string e permite que leia a string inteira (ate achar o '\0')
    printf("\ns1 = %s\n", s1);
}
