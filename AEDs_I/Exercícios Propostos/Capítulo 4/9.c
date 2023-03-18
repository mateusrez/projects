/*
    9. Um banco concederá um crédito especial aos seus clientes, de acordo com o saldo médio no último ano. Faça 
    um programa que receba o saldo médio de um cliente e calcule o valor do crédito, de acordo com a tabela a 
    seguir. Mostre o saldo médio e o valor do crédito.

    SALDO MÉDIO                             PERCENTUAL
    Acima de R$ 400,00                      30% do saldo médio
    Entre R$ 300,00 e R$ 400,00             25% do saldo médio
    Entre R$ 200,00 e R$ 300,00             20% do saldo médio
    Abaixo de R$ 200,00                     10% do saldo médio

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system ("clear");

    // Declaração de variáveis
    float saldoMedio;

    // Entrada de dados
    printf ("Digite o saldo médio do cliente: ");
    scanf ("%f", &saldoMedio);

    // Processamento
    if (saldoMedio > 400)
    {
        printf ("O valor do crédito é: %.2f", saldoMedio * 0.3);
    }
    else if (saldoMedio >= 300 && saldoMedio <= 400)
    {
        printf ("O valor do crédito é: %.2f", saldoMedio * 0.25);
    }
    else if (saldoMedio >= 200 && saldoMedio <= 300)
    {
        printf ("O valor do crédito é: %.2f", saldoMedio * 0.2);
    }
    else
    {
        printf ("O valor do crédito é: %.2f", saldoMedio * 0.1);
    }

    return 0;
}