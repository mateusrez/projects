/*
    3. Faça um programa que receba dois números e mostre o menor.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system ("clear");

    // Declaração de variáveis
    float num1, num2;

    // Entrada de dados
    printf ("Digite o primeiro número: ");
    scanf ("%f", &num1);

    printf ("Digite o segundo número: ");
    scanf ("%f", &num2);

    // Processamento
    if (num1 < num2)
    {
        printf ("O menor número é: %.2f", num1);
    }
    else
    {
        printf ("O menor número é: %.2f", num2);
    }

    return 0;
}