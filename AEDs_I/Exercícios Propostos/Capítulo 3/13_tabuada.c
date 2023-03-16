/*
    13. Faça um programa que calcule e mostre a tabuada de um número digitado pelo usuário. 
    
    Exemplo:
    Digite um número: 5 
    5 × 0 = 0                   5 x 6 = 30                       
    5 × 1 = 5                   5 x 7 = 35
    5 × 2 = 10                  5 x 8 = 40
    5 × 3 = 15                  5 x 9 = 45
    5 × 4 = 20                  5 x 10 = 50
    5 x 5 = 25 

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system ("clear");

    int numero, i;

    printf ("Digite um número: ");
    scanf ("%d", &numero);

    for (i = 0; i <= 10; i++)
    {
        printf ("%d x %d = %d \n", numero, i, numero * i);
    }

    return 0;
}