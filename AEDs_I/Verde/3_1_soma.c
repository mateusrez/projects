/*
    Autor: Mateus G. Rezende
    Última atualização - 08/03/2023

    1. Faça um programa que receba quatro números inteiros, calcule e mostre a soma desses números.

*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    // Declaração de variáveis
    int a, b, c, d; 
    int soma;

    // Atribuição dos 4 números
    scanf ("%i %i %i %i", &a, &b, &c, &d);

    // Cálculo da soma
    soma = a + b + c + d;

    printf ("A soma deles é %i", soma);

    return 0;
}