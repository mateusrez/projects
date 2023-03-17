/*
    Autor: Mateus G. Rezende
    Última atualização - 17/03/2023

    2. Faça um algoritmo que leia 2 números inteiros e faça sua adição. Se o resultado for maior 
    ou igual a 10, some 5 a este número. Caso contrário some 7 a ele. Imprima o resultado final.

*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    // system ("clear");

    // Declaração de variáveis
    int a, b, soma;

    // Entrada de dados
    // printf("Digite o primeiro número: ");
    scanf ("%i", &a);

    // printf("Digite o segundo número: ");
    scanf ("%i", &b);

    // Processamento de dados
    soma = a + b;

    if (soma >= 10)
    {
        soma += 5;
    }
    else
    {
        soma += 7;
    }
    
    // Saída de dados
    printf ("%i", soma);

    return 0; // Fim do programa
}