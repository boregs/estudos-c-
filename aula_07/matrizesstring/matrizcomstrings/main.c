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

    s1[17] = '7';
    printf("\ns1 = %s\n", s1);
}
