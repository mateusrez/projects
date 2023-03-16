/*
    18. Faça um programa que receba uma temperatura em Celsius, calcule e mostre essa temperatura em
    Fahrenheit. Sabe-se que F = 180*(C + 32)/100.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system ("clear");

    float celsius, fahrenheit;
    
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);
    
    fahrenheit = 180*(celsius + 32)/100;
    
    printf("A temperatura em Fahrenheit é: %.2f \n", fahrenheit);

    return 0;
}
