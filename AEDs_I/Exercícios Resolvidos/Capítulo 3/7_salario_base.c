/*
    7. Faça um programa que receba o salário base de um funcionário, calcule e mostre seu salário a receber,
    sabendo-se que o funcionário tem gratificação de R$ 50 e paga imposto de 10% sobre o salário base.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    float sal, salreceber, imp;

    printf ("Digite o salário: ");
    scanf ("%f", &sal);

    imp = sal * 10/100;
    salreceber = sal + 50 - imp;

    printf ("Salário a recber: %.2f", salreceber); 

    return 0;
}