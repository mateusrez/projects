/*
    10. Faça um programa que calcule e mostre a área de um círculo. Sabe-se que: Área = pi * R2.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    float area, raio, pi;

    printf ("Informe o valor da raio: ");
    scanf ("%f", &raio);

    pi = 3.1415;    

    area = pi * (raio * raio);

    printf ("A área é: %.2f\n", area);

    return 0;
}