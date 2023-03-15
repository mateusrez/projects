/*
    5. Faça um programa que receba o salário de um funcionário e o percentual de aumento, calcule e mostre
    o valor do aumento e o novo salário.

*/



#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    
    float sal, perc, aumento, novosal;

    printf ("Digite o salário: ");
    scanf ("%f", &sal);

    printf ("Digite o percentual de aumento: ");
    scanf ("%f", &perc);

    aumento = sal * perc / 100;
    printf ("Aumento: %.2f", aumento);

    novosal = sal + aumento;
    printf ("Novo salário: %.2f", novosal);

    return 0;
}