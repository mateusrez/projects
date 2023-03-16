/*
    12. Faça um programa que receba o valor do salário mínimo e o valor do salário de um funcionário, calcule 
    e mostre a quantidade de salários mínimos que esse funcionário ganha.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system ("clear");

    float salario_minimo, salario_funcionario, qtd_salarios_minimos;

    printf ("Digite o valor do salário mínimo: ");
    scanf ("%f", &salario_minimo);

    printf ("Digite o valor do salário do funcionário: ");
    scanf ("%f", &salario_funcionario);

    qtd_salarios_minimos = salario_funcionario / salario_minimo;

    printf ("O funcionário ganha %.2f salários mínimos", qtd_salarios_minimos);

    return 0;
}