/*
    15. João recebeu seu salário e precisa pagar duas contas atrasadas. Em razão do atraso, 
    ele deverá pagar multa de 2% sobre cada conta. Faça um programa que calcule e mostre 
    quanto restará do salário de João.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system ("clear");

    float salario, conta1, conta2, multa1, multa2, saldo;

    printf ("Digite o valor do salário: ");
    scanf ("%f", &salario);

    printf ("Digite o valor da primeira conta: ");
    scanf ("%f", &conta1);

    printf ("Digite o valor da segunda conta: ");
    scanf ("%f", &conta2);

    multa1 = conta1 * 0.02;
    multa2 = conta2 * 0.02;

    saldo = salario - (conta1 + multa1) - (conta2 + multa2);

    printf ("O saldo restante do salário de João é: %.2f \n", saldo);

    return 0;
}