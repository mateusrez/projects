/*
    2. Faça um programa que receba três notas, calcule e mostre a média aritmética.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    float a, b, c;
    float media;

    scanf ("%f %f %f", &a, &b, &c);
    media = (a + b + c)/3;

    return 0;
}