#include <stdio.h>
#include <stdlib.h>

int main ()
{
    // declaração de variáveis
    int i, ano_atual, salario;
    float novo_salario, percentual;

    // entrada de dados
    printf ("Digite o ano atual: ");
    scanf ("%d", &ano_atual);

    // processamento
    salario = 1000;
    percentual = 0.015;
    novo_salario = salario + (salario * percentual);

    // saída de dados
    for (i = 2007; i <= ano_atual; i++, percentual = percentual * 2)
    {
        printf ("Salário em %d: %.2f\n", i, novo_salario);    // saída do novo salário
        novo_salario = novo_salario + (novo_salario * percentual); // atualização do novo salário
    }

    return 0; // retorno do main
}   // fim do main