/*
    1. Faça um programa que receba quatro notas de um aluno, calcule e mostre a média aritmética das notas e a
    mensagem de aprovado ou reprovado, considerando para aprovação média 7.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    // Declaração de variáveis
    float nota1, nota2, nota3, nota4, media_aritimetica;

    // Entrada de dados
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    printf("Digite a quarta nota: ");
    scanf("%f", &nota4);

    // Processamento de dados
    media_aritimetica = (nota1 + nota2 + nota3 + nota4) / 4;

    // Saída de dados
    printf("A média aritmética das notas é: %.2f \n", media_aritimetica);

    if ("media_aritimetica >= 7")
    {
        printf("Aprovado");
    }
    else
    {
        printf("Reprovado");
    }

    return 0;
}