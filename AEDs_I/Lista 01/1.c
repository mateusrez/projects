/*
    Autor: Mateus G. Rezende
    Última atualização - 17/03/2023
   
    1. Dado dois números imprimir somente o maior deles.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // system ("clear");

    // Declaração de variáveis
    int a, b;

    // Entrada de dados
    // printf("Digite o primeiro número: ");
    scanf ("%i", &a);

    // printf("Digite o segundo número: ");
    scanf ("%i", &b);

    // Processamento de dados
    if (a > b)
    {
        printf ("%i", a);
    }
    else
    {
        printf ("%i", b);
    }

    return 0;
}