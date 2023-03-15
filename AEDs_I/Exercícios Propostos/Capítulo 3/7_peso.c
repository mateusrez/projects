/*
    7. Faça um programa que receba o peso de uma pessoa, calcule e mostre:

    a) o novo peso, se a pessoa engordar 15% sobre o peso digitado; 
    b) o novo peso, se a pessoa emagrecer 20% sobre o peso digitado.

*/

#include <stdio.h>

int main() 
{
    system ("clear");
    
    float peso, novo_peso1, novo_peso2;

    printf ("Digite o peso da pessoa: ");
    scanf ("%f", &peso);

    novo_peso1 = peso * 1.15;
    novo_peso2 = peso * 0.8;

    printf ("Novo peso se engordar 15%%: %.2f\n", novo_peso1);
    printf ("Novo peso se emagrecer 20%%: %.2f\n", novo_peso2);

    return 0;
}
