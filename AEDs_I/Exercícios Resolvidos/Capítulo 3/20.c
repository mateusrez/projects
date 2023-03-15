/*
    20. Faça um programa que receba a medida do ângulo (em graus) formado por uma escada apoiada no
    chão e encostada na parede e a altura da parede onde está a ponta da escada. Calcule e mostre a medida
    dessa escada.

    Observação: as funções trigonométricas implementadas nas linguagens de programação trabalham
    com medidas de ângulos em radianos.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    system("clear");

    float ang, alt, escada, radiano;

    printf ("Informe o ângulo: ");
    scanf ("%f", &ang);

    printf ("Informe a altura: ");
    scanf ("%f", alt);

    radiano = ang * 3.14 / 180;
    escada = alt / sin(radiano);

    printf ("A medida da escada e: %.2f\n", escada);

    return 0;
}