#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Matrizes

    int m1[10], i; /*variavel "m1" representa a matriz.
                  Ela pode conter at� 10 numeros(0-9)*/

// For loop para adicionar um valor nas posi�oes da matriz
// "Com o i = 0; enquanto i for menor que 10; adicione 1 pro valor de i" | codigo "traduzido"
    for(i = 0; i<10; i++){
        m1[i] = i;
    }

// quando ele sai do loop, retorna ao valor 0
    i = 0;

// While loop para printar o valor de cada posi��o dentro da matriz
// o "i++" vai servir para quebrar o loop quando todas as posi�oes da matriz sao printadas
// j� que ele vai ser incrementado em 1 a cada vez que a mensagem � printada
    while(i<10){
        printf("Valor na posicao %d : %d\n",i,m1[i]);
        i++;
    }
    return 0;
}
