/*
    21. Faça um programa que receba o número de horas trabalhadas, o valor do salário mínimo e o número
    de horas extras trabalhadas, calcule e mostre o salário a receber, de acordo com as regras a seguir:
    
    a ) a hora trabalhada vale 1/8 do salário mínimo; 
    b) a hora extra vale 1/4 do salário mínimo;
    c) o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada;
    d) a quantia a receber pelas horas extras equivale ao número de horas extras trabalhadas multiplicado pelo valor
    da hora extra;
    e) o salário a receber equivale ao salário bruto mais a quantia a receber pelas horas extras.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float horas_trabalhadas, salario_minimo, horas_extras, valor_hora_trabalhada, valor_hora_extra, salario_bruto, salario_receber;
    
    printf ("Digite o número de horas trabalhadas: ");
    scanf ("%f", &horas_trabalhadas);

    printf ("Digite o valor do salário mínimo: ");
    scanf ("%f", &salario_minimo);

    printf ("Digite o número de horas extras trabalhadas: ");
    scanf ("%f", &horas_extras);
    
    valor_hora_trabalhada = salario_minimo / 8;
    valor_hora_extra = salario_minimo / 4;
    salario_bruto = horas_trabalhadas * valor_hora_trabalhada;
    salario_receber = salario_bruto + (horas_extras * valor_hora_extra);
    
    printf ("O salário a receber é de R$ %.2f", salario_receber);
    
    return 0;
}
