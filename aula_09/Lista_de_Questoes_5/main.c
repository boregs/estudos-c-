#include <stdio.h>
#include <stdlib.h>

/*V4. Custos de Produção: Dado vetor int de custos, conte quantos valores são múltiplos
de 3 e quantos de 5.*/


int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for(int i; i<n;i++){
        scanf("%d", &array[i]);
    }
    int m3, m5 = 0;
    for(int i = 0; i<n; i++){
        if(array[i]%3==0){
            m3++;
        } else if(array[i]%5==0){
            m5++;
        }

    }
    printf("Quatidade de numeros divisiveis por 3 e 5: %d e %d", m3, m5);
}
