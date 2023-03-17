/*
    1. Faça um programa que receba dois números, calcule e mostre a subtração do primeiro número pelo segundo

*/

#include <stdio.h>
#include <stdlib.h>

int main () // Função principal
{
    system ("clear");

    // Declaração de variáveis
    int a, b;
    int subtracao;

    // Entrada de dados
    printf ("Digite o valor do primeiro número: ");
    scanf ("%i", &a);

    printf ("\nDigite o valor do segundo número: ");
    scanf ("%i", &b);

    // Processamento
    subtracao = a - b;

    // Saída de dados
    printf ("\n Resultado: %i", subtracao);

    return 0; // Fim do programa
}