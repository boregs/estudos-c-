#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100];
    char s2[100];

    printf("\n S1 antes da alocacao = %s\n", s1);
    strcpy(s1, "Luan Gameplays");
    printf("\n S! depois da alocacao =  %s\n", s1);

}
