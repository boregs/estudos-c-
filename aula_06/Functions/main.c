#include <stdio.h>
#include <stdlib.h>
//precisa delacrar um "prototipo da fun��o" | "antes de usar, precisa declarar"
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

/* definindo a fun��o de adi��o
int add(int a, int b) {
    int sum = a + b;
    return sum;
}*/

