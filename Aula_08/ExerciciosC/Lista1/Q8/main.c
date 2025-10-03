#include <stdio.h>
#include <stdlib.h>
/*Um engenheiro deseja digitar dois valores do tipo double e visualizar os
valores digitados e sua soma*/

int main()
{
    double n1;
    double n2;

    printf("\n--- Digite um numero ---\n");
    scanf("%lf", &n1);

    printf("\n--- Digite outro numero ---\n");
    scanf("%lf", &n2);

    printf("\nOs numeros digitados foram: %lf e %lf\n", n1,n2);
    printf("\nSua soma é %.3lf\n", n1 + n2);


}
