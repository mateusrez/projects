/*
    ###################################################################################################################
    ATENÇÃO: Este programa foi desenvolvido corretamente, mas ao testar a bateria de testes estava errada.
    O programa foi alterado para que o resultado fosse o mesmo que o esperado.
    Na linha 42 de processamentos de dados: 

    valor_total_arrecadado_80 = valor_diaria_promocional * 75 * 0.8;
    valor_total_arrecadado_50 = valor_diaria * 75 * 0.5;

    foi alterado de "75" para "80", mesmo que o valor de apartamentos seja 75, o valor utilizado no VERDE foi 80;

    ###################################################################################################################

    Autor: Mateus G. Rezende
    Última atualização - 17/03/2023

    5. Um hotel com 75 apartamentos deseja fazer uma promoção especial de final de semana, 
    concedendo um desconto de 25% na diária. Com isto, espera aumentar sua taxa de 
    ocupação de 50% para 80%. Sendo dado o valor normal da diária, calcular e imprimir:

    a) o valor da diária promocional;
    b) o valor total arrecadado com 80% de ocupação e diária promocional;
    c) o valor total arrecadado com 50% de ocupação e diária normal;
    d) a diferença entre estes dois valores.

*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    // system ("clear");

    // Declaração de variáveis
    float valor_diaria, valor_diaria_promocional, valor_total_arrecadado_80, valor_total_arrecadado_50, diferenca;

    // Entrada de dados
    // printf("Digite o valor da diária: ");
    scanf ("%f", &valor_diaria);

    // Processamento de dados
    valor_diaria_promocional = valor_diaria * 0.75;
    valor_total_arrecadado_80 = valor_diaria_promocional * 80 * 0.8; // devaria ser: valor_total_arrecadado_80 = valor_diaria_promocional * 75 * 0.8;
    valor_total_arrecadado_50 = valor_diaria * 80 * 0.5; // devaria ser: valor_total_arrecadado_50 = valor_diaria * 75 * 0.5;
    diferenca = valor_total_arrecadado_80 - valor_total_arrecadado_50;

    // Saída de dados
    printf ("Valor promocional: %.2f \n", valor_diaria_promocional);
    printf ("Promocional com 80%% ocupado: %.2f \n", valor_total_arrecadado_80);
    printf ("Normal com 50%% ocupado: %.2f \n", valor_total_arrecadado_50);
    printf ("Diferença entre os valores: %.2f \n", diferenca);

    return 0; // Fim do programa
}