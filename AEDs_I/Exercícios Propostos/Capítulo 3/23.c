/*
    23. Faça um programa que receba a medida de dois ângulos de um triângulo, calcule e mostre a medida do 
    terceiro ângulo. Sabe-se que a soma dos ângulos de um triângulo é 180 graus.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system ("clear");

    float angulo1, angulo2, angulo3;
    
    printf("Digite o valor do primeiro ângulo: ");
    scanf("%f", &angulo1);
    
    printf("Digite o valor do segundo ângulo: ");
    scanf("%f", &angulo2);
    
    angulo3 = 180 - (angulo1 + angulo2);
    
    printf("O valor do terceiro ângulo é: %.2f \n", angulo3);

    return 0;
}