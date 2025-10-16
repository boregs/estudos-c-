#include <stdio.h>
#include <stdlib.h>

/*V10. Busca e Contagem: Dado um vetor int e um alvo x, conte quantas ocorrências de
x existem e imprima suas posições.*/

int main()
{
    int n = 10; scanf("%d", &n);
    int arr[n];
    for ( int i =0; i < n ; i ++){
        scanf("%d", &arr[i]);
    }
    int x;
    printf("\nEscolha o numero alvo\n");
    scanf("%d", &x);
    int x_count = 0;
    for(int i =0;i<n;i++){
        if(arr[i] == x){
            printf("%d", i);
            x_count++;
        }
    }
    if (x_count==0){
            printf ( " -1 " );
            }
    printf("\nTotal = %d \n", x_count);
    return 0;
}
