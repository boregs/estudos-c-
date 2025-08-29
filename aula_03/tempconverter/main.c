#include <stdio.h>
#include <stdlib.h>

//função para converter uma temperatura em Celsius para Farenheit
float CelsiusToFarenheit(float celsius) {
    return (celsius * 9.0/5.0) + 32.0;
}

int main()
{
    float celsius;

    printf("Digite a temperatura em Celsius: \n");
    scanf("%f",&celsius);

    float farenheit = CelsiusToFarenheit(celsius);
    printf("Temperatura em Farenheit: %.2f\n", farenheit);

}
