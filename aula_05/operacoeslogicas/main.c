#include <stdio.h>
#include <stdlib.h>

int main()
{
    #include <stdio.h>
#include <stdbool.h> // Para usar os tipos de dados 'true' e 'false'

int main() {
    // Declaração de variáveis
    int num1, num2;

    // Solicita e lê o primeiro número
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    // Solicita e lê o segundo número
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    printf("\n--- Avaliando com o Operador E (&&) ---\n");
    // O operador E (&&) retorna verdadeiro (1) somente se AMBAS as condições forem verdadeiras.
    if (num1 > 0 && num2 > 0) {
        printf("Resultado: Ambos os numeros sao positivos.\n");
    } else {
        printf("Resultado: Pelo menos um dos numeros nao e positivo.\n");
    }

    if (num1 > 10 && num2 > 10) {
        printf("Resultado: Ambos os numeros sao maiores que 10.\n");
    } else {
        printf("Resultado: Pelo menos um dos numeros nao e maior que 10.\n");
    }


    printf("\n--- Avaliando com o Operador OU (||) ---\n");
    // O operador OU (||) retorna verdadeiro (1) se PELO MENOS UMA das condições for verdadeira.
    if (num1 == 0 || num2 == 0) {
        printf("Resultado: Pelo menos um dos numeros e igual a zero.\n");
    } else {
        printf("Resultado: Nenhum dos numeros e igual a zero.\n");
    }

    if (num1 < 0 || num2 < 0) {
        printf("Resultado: Pelo menos um dos numeros e negativo.\n");
    } else {
        printf("Resultado: Nenhum dos numeros e negativo.\n");
    }

    printf("\n--- Avaliando com o Operador NAO (!) ---\n");
    // O operador NAO (!) inverte o resultado de uma expressão lógica.
    // Se a condição for verdadeira, ele a torna falsa, e vice-versa.
    if (!(num1 == num2)) {
        printf("Resultado: Os numeros NAO sao iguais.\n");
    } else {
        printf("Resultado: Os numeros sao iguais.\n");
    }

    bool ehDiferenteDe10 = !(num1 == 10);
    if (ehDiferenteDe10) {
        printf("Resultado: O primeiro numero (%d) NAO e igual a 10.\n", num1);
    } else {
        printf("Resultado: O primeiro numero (%d) e igual a 10.\n", num1);
    }

    return 0; // Indica que o programa terminou com sucesso
}
}
