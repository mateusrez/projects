/*
    11. Faça um programa que calcule e mostre a área de um losango. Sabe-se que: 
    
        A = (diagonal maior * dia- gonal menor)/2.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system ("clear");

    float diagonal_maior, diagonal_menor, area;

    printf ("Digite a diagonal maior: ");
    scanf ("%f", &diagonal_maior);

    printf ("Digite a diagonal menor: ");
    scanf ("%f", &diagonal_menor);

    area = (diagonal_maior * diagonal_menor)/2;

    printf ("Área do losango: %.2f\n", area);

    return 0;
}