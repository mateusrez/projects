/*
    17. Faça um programa que receba o raio, calcule e mostre:

    a) o comprimento de uma esfera; sabe-se que C = 2 * p R;
    b) a área de uma esfera; sabe-se que A = p R2;
    c) o volume de uma esfera; sabe-se que V = 3⁄4 * p R3.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system ("clear");
    
    float raio, comprimento, area, volume;
    
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);
    
    comprimento = 2 * 3.14 * raio;
    area = 3.14 * pow(raio, 2);
    volume = 3.14 * pow(raio, 3) / 4;
    
    printf("O comprimento da esfera é: %.2f \n", comprimento);
    printf("A área da esfera é: %.2f \n", area);
    printf("O volume da esfera é: %.2f \n", volume);

    return 0;
}


