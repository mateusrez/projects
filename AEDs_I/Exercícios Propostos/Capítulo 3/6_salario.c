/*
    6. Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um programa 
    que receba o salário fixo do funcionário e o valor de suas vendas, calcule e mostre a comissão e seu 
    salário final.

*/

#include <stdio.h>

int main() 
{
    // system("clear");

    float salarioFixo, vendas, comissao, salarioFinal;

    // solicita que o usuário insira o salário fixo e o valor das vendas
    printf ("Insira o salário fixo do funcionário: ");
    scanf ("%f", &salarioFixo);

    printf ("Insira o valor das vendas do funcionário: ");
    scanf ("%f", &vendas);

    // calcula a comissão e o salário final    
    comissao = vendas * 0.04;
    salarioFinal = salarioFixo + comissao;

    // mostra a comissão e o salário final ao usuário
    printf ("A comissão do funcionário é: R$ %.2f\n", comissao);
    printf ("O salário final do funcionário é: R$ %.2f\n", salarioFinal);

    return 0;
}
