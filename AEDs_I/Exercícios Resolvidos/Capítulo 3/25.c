/*
    25. Faça um programa que receba o custo de um espetáculo teatral e o preço do convite desse espetáculo.
    Esse programa deverá calcular e mostrar a quantidade de convites que devem ser vendidos para que,
    pelo menos, o custo do espetáculo seja alcançado.

*/

#include <stdio.h>
#include <math.h>

int main() 
{
    system("clear");

    float custo, convite; // declara as variáveis
    int qtd; // declara a variável

    printf ("Digite o custo do espetáculo: ");
    scanf ("%f", &custo); // lê o custo do espetáculo

    printf ("Digite o preço do convite: ");
    scanf ("%f", &convite); // lê o preço do convite

    qtd = ceil(custo / convite); // calcula a quantidade de convites a serem vendidos

    printf ("Quantidade de convites que devem ser vendidos: %d\n", qtd); // exibe o resultado

    return 0;
}
