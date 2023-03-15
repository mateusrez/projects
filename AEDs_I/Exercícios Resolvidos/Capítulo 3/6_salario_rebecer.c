/*
    6. Faça um programa que receba o salário base de um funcionário, calcule e mostre o salário a receber,
    sabendo-se que o funcionário tem gratificação de 5% sobre o salário base e paga imposto de 7% também
    sobre o salário base.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    
    float sal, salreceber, grat, imp;

    printf ("Digite o salário: ");
    scanf ("%f", &sal);

    grat = sal * 5/100;
    imp = sal * 7/100;
    salreceber = sal + grat - imp;

    printf ("Salário a recber: %.2f", salreceber);

    return 0;
}