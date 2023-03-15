/*
    9. Ler o numerador e o denominador de uma fração e transformá-la em um número decimal.

*/

#include <stdio.h>

int main()
{
    int numerador, denominador;
    float decimal;

    // Ler o numerador e o denominador da entrada padrão
    // printf ("Digite o numerador: ");
    scanf ("%d", &numerador);
    // printf ("Digite o denominador: ");
    scanf ("%d", &denominador);

    // Calcular o número decimal equivalente à fração
    decimal = (float) numerador / denominador;

    // Imprimir o resultado na saída padrão
    printf ("%f", decimal);

    return 0;
}
