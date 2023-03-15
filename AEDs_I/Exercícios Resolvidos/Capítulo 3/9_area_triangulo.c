/*
    9. Faça um programa que calcule e mostre a área de um triângulo. Sabe-se que: Área = (base * altura)/2.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    float base, altura, area;

    printf ("Informe o valor da base: ");
    scanf ("%f", &base);

    printf ("Informe o valor da altura: ");
    scanf ("%f", &altura);

    area = base * altura/2;

    printf ("A área é: %.2f\n", area);

    return 0;
}