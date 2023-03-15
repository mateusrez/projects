/*
    2. Sabendo que 100 kilowatt de energia custa um sétimo do salário mínimo, faça um algoritmo que
    leia o valor do salário mínimo e a quantidade de kilowatt gasta por uma residência, calcule e
    mostre: o valor em reais de cada kilowatt; o valor em reais a ser pago; e o novo valor a ser pago
    por essa residência com um desconto de 10%.

*/

#include <stdio.h>

int main() 
{
    float salario_minimo, kw_gasto, valor_kw, valor_total, valor_desconto;

    // printf ("Digite o valor do salário mínimo: ");
    scanf ("%f", &salario_minimo);

    valor_kw = salario_minimo / 7 / 100; // valor de cada kilowatt
    printf ("Valor do kW: %.2f\n", valor_kw);

    // printf ("Digite a quantidade de kilowatt gasta pela residência: ");
    scanf ("%f", &kw_gasto);

    valor_total = valor_kw * kw_gasto; // valor total a ser pago
    printf ("Valor a pagar: %.2f\n", valor_total);

    valor_desconto = valor_total * 0.1; // valor do desconto de 10%
    printf ("Valor com desconto: %.2f\n", valor_total - valor_desconto);

    return 0;
}
