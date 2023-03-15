/*
    15. O custo ao consumidor de um carro novo é a soma do preço de fábrica com o percentual de lucro do
    distribuidor e dos impostos aplicados ao preço de fábrica. Faça um programa que receba o preço de fábrica
    de um veículo, o percentual de lucro do distribuidor e o percentual de impostos, calcule e mostre:

    a) o valor correspondente ao lucro do distribuidor;
    b) o valor correspondente aos impostos;
    c) o preço final do veículo.

*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    float p_fab, perc_d, perc_i, vlr_d, vlr_i, p_final;

    printf ("Infome o preço de fábrica: ");
    scanf ("%f", &p_fab);

    printf ("Infome o percentual de lucro: ");
    scanf ("%f", &perc_d);

    printf ("Infome o percentual de impostos: ");
    scanf ("%f", &perc_i);

    vlr_d = p_fab * perc_d / 100;
    vlr_i = p_fab * perc_i / 100;
    p_final = p_fab + vlr_d + vlr_i;

    printf ("Lucro do distribuidor: %.2f", vlr_d);
    printf ("Impostos: %.2f", vlr_i);
    printf ("Preço final: %.2f", p_final);

    return 0;
}