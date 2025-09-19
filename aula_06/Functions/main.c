#include <stdio.h>
#include <stdlib.h>
//precisa delacrar um "prototipo da função" | "antes de usar, precisa declarar"
int add(int a, int b);
int main()
{
    int a = 10;
    int b = 20;
    int resultado;

    resultado = add(a, b);
    printf("o resutado de %d + %d = %d", a,b,resultado);
    return 0;
}

/* definindo a função de adição
int add(int a, int b) {
    int sum = a + b;
    return sum;
}*/

