/*
    4. Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário, sabendo-se
que este sofreu um aumento de 25%.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    float sal, novosal;

    printf ("Digite o salário: ");
    scanf ("%f", &sal);

    novosal = sal * 1.25;

    printf ("Novo salário será: %.2f", novosal);

    return 0;
}