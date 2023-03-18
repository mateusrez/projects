/*
    8. Faça um programa para calcular e mostrar os alário reajustado de um funcionário. O percentual de aumento 
    encontra-se na tabela a seguir.

    SALÁRIOS                PERCENTUAL DE AUMENTO
    Até R$ 300,00           35%
    Acima de R$ 300,00      15%

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system ("clear");

    // Declaração de variáveis
    float salario;

    // Entrada de dados
    printf ("Digite o salário do funcionário: ");
    scanf ("%f", &salario);

    // Processamento
    if (salario <= 300)
    {
        printf ("O salário reajustado é: %.2f", salario * 1.35);
    }
    else
    {
        printf ("O salário reajustado é: %.2f", salario * 1.15);
    }

    return 0;
}