#include <stdio.h>
#include <stdlib.h>

/*V8. S�ries Num�ricas: Dado um vetor de int, calcule a soma apenas dos n�meros pares
e a soma apenas dos �mpares.*/

int main()
{
   int n; scanf("%d",&n);
   int v[n];
   for(int i; i<n;i++){
        scanf("%d", &v[i]);
   }
   long sp=0,si=0;
   for(int i = 0; i<n; i++){
        if(v[i]%2==0){
            sp += v[i];
        } else {
            si += v[i];
        }
   }
   printf ( "\nSoma par = %ld Soma impar = %ld \n ", sp, si);
   return 0;
}
