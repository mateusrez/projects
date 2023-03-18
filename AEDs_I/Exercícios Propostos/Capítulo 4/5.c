/*
    5. Faça um programa que receba dois números e execute as operações listadas a seguir, de acordo com a escolha 
    do usuário.

    ESCOLHA DO USUÁRIOS                 OPERAÇÃO
    1                                   Média entre os números digitados
    2                                   Diferença do maior pelo menor
    3                                   Produto entre os números digitados
    4                                   Divisão do primeiro pelo segundo
    
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system ("clear");

    // Declaração de variáveis
    float num1, num2, opcao;

    // Entrada de dados
    printf ("Digite o primeiro número: ");
    scanf ("%f", &num1);

    printf ("Digite o segundo número: ");
    scanf ("%f", &num2);

    printf ("Digite a opção desejada: ");
    scanf ("%f", &opcao);

    // Processamento
    switch (opcao){
        case 1:
            printf ("A média entre os números digitados é: %.2f", (num1 + num2) / 2);
            break;

        case 2:
            if (num1 > num2)
            {
                printf ("A diferença do maior pelo menor é: %.2f", num1 - num2);
            }
            else
            {
                printf ("A diferença do maior pelo menor é: %.2f", num2 - num1);
            }
            break;
            
        case 3:
            printf ("O produto entre os números digitados é: %.2f", num1 * num2);
            break;

        case 4:
            printf ("A divisão do primeiro pelo segundo é: %.2f", num1 / num2);
            break;
            
        default:
            printf ("Opção inválida");
    }
    

    return 0;
}