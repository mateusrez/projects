/*
    4. Faça um programa que receba duas notas, calcule e mostre a média ponderada dessas notas, 
    considerando peso 2 para a primeira e peso 3 para a segunda.

*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    system("clear");

    // Declaração de variáveis
    float nota_1, nota_2, media;

    // Atribuição das veriáveis
    printf("Digite a primeira nota: ");
    scanf("%f", &nota_1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota_2);


    // Cálculo da media ponderada
    media = (nota_1 * 2 + nota_2 * 3) / 5;

    // Exibição do resultado
    printf("Média ponderada: %.2f\n", media);

    return 0; // Fim do programa
}