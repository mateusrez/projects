/*
    22. Faça um programa que receba o número de lados de um polígono convexo, calcule e mostre o número 
    de diagonais desse polígono. Sabe-se que ND = N * (N − 3)/2, em que N é o número de lados do polígono.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system ("clear");
    
    int lados, diagonais;
    
    printf("Digite o número de lados do polígono: ");
    scanf("%d", &lados);
    
    diagonais = lados * (lados - 3) / 2;
    
    printf("O número de diagonais desse polígono é: %d \n", diagonais);

    return 0;
}