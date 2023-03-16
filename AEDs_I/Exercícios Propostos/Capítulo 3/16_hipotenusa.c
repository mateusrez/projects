/*
    16. Faça um programa que receba o valor dos catetos de um triângulo, calcule e mostre o valor da 
    hipotenusa.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system ("clear");

    float cateto1, cateto2, hipotenusa;
    
    printf("Digite o valor do primeiro cateto: ");
    scanf("%f", &cateto1);
    
    printf("Digite o valor do segundo cateto: ");
    scanf("%f", &cateto2);
    
    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));
    
    printf("O valor da hipotenusa é: %.2f \n", hipotenusa);

    return 0;
}
