/*
    12. Faça um programa que receba dois números maiores que zero, calcule e mostre um elevado ao outro.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    system("clear");

    float num1, num2, r1, r2;

    printf("Informe o primeiro número [ maior que 0 ]: ");
    scanf("%f", &num1);

    printf("Informe o segundo número [ maior que 0 ]: ");
    scanf("%f", &num2);

    r1 = pow(num1, num2);
    r2 = pow(num2, num1);

    printf ("%.2f elevado a %.2f: %.2f\n", num1, num2, r1);
    printf ("%.2f elevado a %.2f: %.2f\n", num2, num1, r2);

    return 0;
}