/*
    8. Faça um programa que receba o valor de um depósito e o valor da taxa de juros, calcule e mostre o
    valor do rendimento e o valor total depois do rendimento.

*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    float dep, taxa, rend, total;

    printf ("Informe o valor do depósito: ");
    scanf ("%f", &dep);

    printf ("Informe a taxa de juros em porcentagem: ");
    scanf ("%f", &taxa);

    rend = dep * taxa / 100;
    total = dep + rend;
    
    printf ("O valor do rendimento é: %.2f\n", rend);
    printf ("O valor total após o rendimento é: %.2f\n", total);

    return 0;
}