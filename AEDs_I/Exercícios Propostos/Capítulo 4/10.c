/*
    10. O preço ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem do distribuidor 
    e dos impostos, ambos aplicados ao custo de fábrica. As porcentagens encontram-se na tabela a seguir. 
    Faça um programa que receba o custo de fábrica de um carro e mostre o preço ao consumidor.

    CUSTO DE FÁBRICA (R$)               % DO DISTRIBUIDOR               % DOS IMPOSTOS
    Até R$ 12.000,00                    5%                              Isento
    Entre R$ 12.000,00 e R$ 25.000,00   10%                             15%
    Acima de R$ 25.000,00               15%                             20%

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system ("clear");

    // Declaração de variáveis
    float custoFabrica, precoConsumidor;

    // Entrada de dados
    printf ("Digite o custo de fábrica do carro: ");
    scanf ("%f", &custoFabrica);

    // Processamento
    if (custoFabrica <= 12000)
    {
        precoConsumidor = custoFabrica + (custoFabrica * 0.05);
    }
    else if (custoFabrica > 12000 && custoFabrica <= 25000)
    {
        precoConsumidor = custoFabrica + (custoFabrica * 0.1) + (custoFabrica * 0.15);
    }
    else
    {
        precoConsumidor = custoFabrica + (custoFabrica * 0.15) + (custoFabrica * 0.2);
    }

    // Saída de dados
    printf ("O preço ao consumidor é: %.2f", precoConsumidor);

    return 0;
}