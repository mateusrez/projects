/*
    10. Faça um programa que calcule e mostre a área de um quadrado. Sabe-se que: A = lado * lado.

*/

#include <stdio.h>

int main()
{
    float lado, area;

    printf ("Digite o lado do quadrado: ");
    scanf("%f", &lado);

    area = lado * lado;

    printf ("Área do quadrado: %.2f\n", area);

    return 0;
}
