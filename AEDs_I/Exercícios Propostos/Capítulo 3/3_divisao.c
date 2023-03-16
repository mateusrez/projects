/*
    3. Faça um programa que receba dois números, calcule e mostre a divisão do primeiro número pelo segundo. Sabe-se que o 
    segundo número não pode ser zero, portanto, não é necessário se preocupar com validações

*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main ()
{
    system ("clear || cls");


    int a, b, divisao;

    printf ("Digite o valor do primeiro número: ");
    scanf ("%i", &a);

    printf ("\nDigite o valor do segundo número [>0]: ");
    scanf ("%i", &b);
    
    divisao = a/b;

    printf ("\nResultado: %d \n\n\n", divisao);



    return 0;
}