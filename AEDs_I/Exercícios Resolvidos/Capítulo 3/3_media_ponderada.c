/*
    3. Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    // Declaração de variáveis
    float nota1, nota2, nota3, media;

    // Atribuição das veriáveis
    printf("Digite a nota do trabalho de laboratório: ");
    scanf("%f", &nota1);

    printf("Digite a nota da avaliação semestral: ");
    scanf("%f", &nota2);

    printf("Digite a nota do exame final: ");
    scanf("%f", &nota3);

    // Cálculo da media ponderada
    media = (nota1 * 2 + nota2 * 3 + nota3 * 5) / 10;

    // Exibição do resultado
    printf("Média ponderada: %.2f\n", media);

    return 0;
}