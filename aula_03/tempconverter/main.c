#include <stdio.h>
#include <stdlib.h>

//funçăo para converter uma temperatura em Celsius para Farenheit
float CelsiusToFarenheit(float celsius) {
    return (celsius * 9.0/5.0) + 32.0;
}

int main()
{
    float celsius;

    printf("Digite a temperatura em Celsius: \n");
    scanf("%f",&celsius);

    float farenheit = CelsiusToFarenheit(celsius);
    printf("temperatura em Farenheit: %2.f", farenheit);

}
