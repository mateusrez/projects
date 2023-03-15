/*
    22. Sabe-se que o quilowatt de energia custa um quinto do salário mínimo. Faça um programa que receba
    o valor do salário mínimo e a quantidade de quilowatts consumida por uma residência. Calcule e
    mostre:
    a) o valor de cada quilowatt;
    b) o valor a ser pago por essa residência;
    c) o valor a ser pago com desconto de 15%.

*/

#include <stdio.h>

int main() 
{
    system("clear");

    float vlr_sal, qtd_kw, vlr_kw, vlr_reais, desc, vlr_desc;

    printf ("Digite o valor do salario minimo: ");
    scanf ("%f", &vlr_sal);

    printf ("Digite a quantidade de quilowatts consumida: ");
    scanf ("%f", &qtd_kw);

    vlr_kw = vlr_sal / 5;
    vlr_reais = vlr_kw * qtd_kw;
    desc = vlr_reais * 15 / 100;
    vlr_desc = vlr_reais - desc;

    printf ("Valor de cada quilowatt: R$ %.2f\n", vlr_kw);
    printf ("Valor a ser pago pela residencia: R$ %.2f\n", vlr_reais);
    printf ("Valor a ser pago com desconto de 15%%: R$ %.2f\n", vlr_desc);

    return 0;
}
