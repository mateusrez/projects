/*
    Autor: Mateus G. Rezende
    Última atualização - 17/03/2023

    9. Fazer um programa para:
    • ler um símbolo do teclado;
    • identificar com a estrutura SWITCH e mostrar as seguintes mensagens, segundo o
        caso:
        - "SINAL DE MENOR" 
        - "SINAL DE MAIOR" 
        - "SINAL DE IGUAL" 
        - "OUTRO SINAL"
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // system ("clear");

    char simbolo;

    // Entrada de dados
    // printf("Digite o valor do salário atual: ");
    scanf ("%c", &simbolo);

    // Processamento de dados
    switch (simbolo)
    {
        case 60:
            printf("SINAL DE MENOR");
            break;
        
        case 62:
            printf("SINAL DE MAIOR");
            break;

        case 61:
            printf("SINAL DE IGUAL");
            break;
        
        default:
            printf("OUTRO SINAL");
            break;
    }


    return 0;
}