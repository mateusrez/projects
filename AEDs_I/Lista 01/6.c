/*
    Autor: Mateus G. Rezende
    Última atualização - 17/03/2023

    6. Faça um programa para ler os coeficientes de uma equação do primeiro grau (ax + b = 0), 
    calcular e escrever a raiz da equação.
*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    // system ("clear");

    // Declaração de variáveis
    float a, b, raiz;

    // Entrada de dados
    // printf("Digite o valor de a: ");
    scanf ("%f", &a);

    // printf("Digite o valor de b: ");
    scanf ("%f", &b);

    // Processamento de dados
    raiz = -b / a; // ax + b = 0 => x = -b / a

    // Saída de dados
    printf ("A raiz da equação é %f", raiz);

    return 0; // Fim do programa
}