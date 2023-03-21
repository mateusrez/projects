/*
    Autor: Mateus G. Rezende
    Última atualização - 17/03/2023

    7. Faça um programa para calcular e imprimir o valor de Y, dado um valor de X.

    y = f(x) = 1, se x < 1
    y = f(x) = 2, se 1 < x <= 2
    y = f(x) = x², se 2 < x <= 3
    y = f(x) = x³, se x > 3

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    // system ("clear");

    // Declaração de variáveis
    float x, y;

    // Entrada de dados
    // printf("Digite o valor de x: ");
    scanf ("%f", &x);

    // Processamento de dados
    if (x < 1)
    {
        y = 1;
    }
    else if (x > 1 && x <= 2)
        {
            y = 2;
        }
        else if (x > 2 && x <= 3)
            {
                y = x * x;
            }
            else  // x > 3
            {
                y = x * x * x;
            }

    /* usando math.h
    if (x < 1)
    {
        y = 1;
    }
    else if (x > 1 && x <= 2)
        {
            y = 2;
        }
        else if (x > 2 && x <= 3)
            {
                y = pow (x, 2);
            }
            else  // x > 3
            {
                y = pow (x, 3);
            }
    */

    // Saída de dados
    printf ("%.2f", y);

    return 0; // Fim do programa
}