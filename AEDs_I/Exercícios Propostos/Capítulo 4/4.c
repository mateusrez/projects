/*
    4. Faça um programa qu ereceba três números e mostre o maior.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system ("clear");

    // Declaração de variáveis
    int num1, num2, num3;

    // Entrada de dados
    printf ("Digite o primeiro número: ");
    scanf ("%d", &num1);

    printf ("Digite o segundo número: ");
    scanf ("%d", &num2);

    printf ("Digite o terceiro número: ");
    scanf ("%d", &num3);

    // Processamento
    if (num1 > num2 && num1 > num3)
    {
        printf ("O maior número é: %d", num1);
    }
    else if (num2 > num1 && num2 > num3)
        {
            printf ("O maior número é: %d", num2);
        }
        else
            {
                printf ("O maior número é: %d", num3);
            }


    return 0;
}