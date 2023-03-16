/*
    20. Faça um programa que receba a medida do ângulo formado por uma escada apoiada no chão e a 
    distância em que a escada está da parede, calcule e mostre a medida da escada para que se possa 
    alcançar sua ponta.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system ("clear");

    float angulo, distancia, escada;
    
    printf ("Digite o valor do ângulo: ");
    scanf ("%f", &angulo);
    
    printf ("Digite a distância da escada da parede: ");
    scanf ("%f", &distancia);
    
    escada = distancia / sin(angulo);
    
    printf("O valor da escada é: %.2f \n", escada);

    return 0;
}