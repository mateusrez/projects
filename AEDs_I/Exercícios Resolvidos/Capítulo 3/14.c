/*
    14. Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
    
    a) a idade dessa pessoa;
    b) quantos anos ela terá em 2050.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    int ano_atual, ano_nascimento, idade_atual, idade_2050;

    printf ("Informe o ano atual: ");
    scanf ("%i", &ano_atual);

    printf ("Informe o ano de nascimento: ");
    scanf ("%i", &ano_nascimento);

    idade_atual = ano_atual - ano_nascimento;
    idade_2050 = 2050 - ano_nascimento;

    printf ("Idade atual: %i\n", idade_atual);
    printf ("Idade em 2050: %i", idade_2050);
    
    return 0;
}