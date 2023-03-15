/*
    2. Faça um programa que receba dois números, calcule e mostre a subtração do primeiro número pelo segundo

*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main ()
{
    system ("clear || cls");


    int a, b;
    int subtracao;

    
    printf ("Digite o valor do primeiro número: ");
    scanf ("%i", &a);

    printf ("\nDigite o valor do segundo número: ");
    scanf ("%i", &b);

    subtracao = a - b;

    printf ("\n Resultado: %i", subtracao);

    return 0;
}