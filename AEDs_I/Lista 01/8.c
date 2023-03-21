/*
    Autor: Mateus G. Rezende
    Última atualização - 17/03/2023
    
    8. Construa um programa que lê uma opção conforme abaixo (usar estrutura SWITCH) e o 
    salário atual do funcionário, calcula e exibe o novo salário:

    A = aumento de 8% no salário; 

    B = aumento de 11% no salário; 

    C = aumento fixo no salário (de R$ 350,00 se o salário atual for até R$ 1000 e de 
    R$ 200,00 se o salário atual for maior que R$ 1000).
    
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    // system ("clear");

    float salario_atual, novo_salario;
    char opcao;

    // Entrada de dados
    // printf("Digite a opção: ");
    scanf (" %c", &opcao);

    // printf("Digite o valor do salário atual: ");
    scanf ("%f", &salario_atual);

    // Processamento de dados

    opcao = toupper(opcao);
    
    switch (opcao)
    {
    case 'A': // A = aumento de 8% no salário;
        novo_salario = salario_atual * 1.08;
        break;
    
    case 'B': // B = aumento de 11% no salário;
        novo_salario = salario_atual * 1.11;
        break;

    case 'C': // C = aumento fixo no salário
        if (salario_atual <= 1000)
        {
            novo_salario = salario_atual + 350;
        }
        else // salario_atual > 1000
        {
            novo_salario = salario_atual + 200;
        }
        break;

     default: // opção inválida
        printf ("Opção inválida!");
        break;
    }

    // Saída de dados
    printf ("%.2f", novo_salario);


    return 0; // Fim do programa
}