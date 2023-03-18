/*
    7. Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores a R$500,00. Faça um
    programa que receba o salário do funcionário e mostre o valor do salário reajustado ou uma mensagem, caso 
    ele não tenha direito ao aumento.

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
    if (salario < 500)
    {
        printf ("O salário reajustado é: %.2f", salario * 1.3);
    }
    else
    {
        printf ("O funcionário não tem direito ao aumento");
    }

    return 0;
}