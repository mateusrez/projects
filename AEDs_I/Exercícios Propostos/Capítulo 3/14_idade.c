/*
    14. Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
    a) a idade dessa pessoa em anos;
    b) a idade dessa pessoa em meses;
    c) a idade dessa pessoa em dias;
    d) a idade dessa pessoa em semanas.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system ("clear");
    
    int anoNasc, anoAtual, idadeAnos, idadeMeses, idadeDias, idadeSemanas;
    
    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNasc);
    
    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);
    
    idadeAnos = anoAtual - anoNasc;
    idadeMeses = idadeAnos * 12;
    idadeDias = idadeAnos * 365;
    idadeSemanas = idadeAnos * 52;

    printf("A idade dessa pessoa em anos é: %d \n", idadeAnos);
    printf("A idade dessa pessoa em meses é: %d \n", idadeMeses);
    printf("A idade dessa pessoa em dias é: %d \n", idadeDias);
    printf("A idade dessa pessoa em semanas é: %d \n", idadeSemanas);

    return 0;
}