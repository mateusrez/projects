/*
    9. Faça um programa que calcule e mostre a área de um trapézio.

    Sabe-se que: A = ((base maior + base menor) * altura)/2

*/

#include <stdio.h>

int main()
{
    float base_maior, base_menor, altura, area;

    printf ("Digite a base maior do trapézio: ");
    scanf ("%f", &base_maior);

    printf ("Digite a base menor do trapézio: ");
    scanf ("%f", &base_menor);

    printf ("Digite a altura do trapézio: ");
    scanf ("%f", &altura);

    area = ((base_maior + base_menor) * altura) / 2;

    printf ("Área do trapézio: %.2f\n", area);

    return 0;
}
