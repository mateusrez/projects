/*
    19. Cada degrau de uma escada tem X de altura. Faça um programa que receba essa altura e a altura que
    o usuário deseja alcançar subindo a escada, calcule e mostre quantos degraus ele deverá subir para
    atingir seu objetivo, sem se preocupar com a altura do usuário. Todas as medidas fornecidas devem
    estar em metros.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    float a_degrau, a_usuario, qtd_degraus;

    printf ("Informe a altura do degrau [m]: ");
    scanf ("%f", a_degrau);

    printf ("Informe a altura que deseja alcaçar [m]: ");
    scanf ("%f", a_usuario);
    
    qtd_degraus = a_usuario / a_degrau;

    printf ("A quantidade de degraus que deve subir: %.2fm", qtd_degraus);

    return 0;
}