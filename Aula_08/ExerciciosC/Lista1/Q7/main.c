#include <stdio.h>
#include <stdlib.h>

/*Enunciado : Um supermercado organiza produtos em categorias A, B e C. Solicite ao
usu�rio a categoria e mostre o valor digitado e seu c�digo ASCII.*/

int main()
{
    char categoria;
    printf("\nCategorias: (A/B/C)\n");
    scanf("%c", &categoria);
    printf("\nA categoria escolhida: %c (Valor ASCII = %d)\n", categoria, (int)categoria);
}
