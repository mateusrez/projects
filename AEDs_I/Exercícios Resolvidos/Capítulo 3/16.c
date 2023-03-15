/*
    16. Faça um programa que receba o número de horas trabalhadas e o valor do salário mínimo, calcule e
    mostre o salário a receber, seguindo estas regras:

    a) a hora trabalhada vale a metade do salário mínimo.
    b) o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada.
    c) o imposto equivale a 3% do salário bruto.
    d) o salário a receber equivale ao salário bruto menos o imposto.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    float horas_t, vlr_sal_min, vlr_hora_t, vlr_sal_bru, imp, vlr_sal_liq;

    printf ("Informe a quantidade de horas trabalhadas: ");
    scanf ("%f", &horas_t);

    printf ("Informe o valor do salário mínimo: ");
    scanf ("%f", &vlr_sal_min);

    vlr_hora_t = vlr_sal_min / 2;
    vlr_sal_bru = vlr_hora_t * horas_t;
    imp = vlr_sal_bru * 3 / 100;
    vlr_sal_liq = vlr_sal_bru - imp;

    printf ("Salário a receber: %.2f", vlr_sal_liq);

    return 0;
}