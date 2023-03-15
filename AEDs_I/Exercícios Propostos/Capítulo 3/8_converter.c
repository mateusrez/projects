/*
    8. Faça um programa que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas.

*/

#include <stdio.h>

int main() 
{
    float peso_kg, peso_g;
    
    printf ("Digite o peso em quilos: ");
    scanf ("%f", &peso_kg);
    
    peso_g = peso_kg * 1000;
    
    printf ("Peso em gramas: %.2f\n", peso_g);
    
    return 0;
}
