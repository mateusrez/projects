/*
    2. Faça um programa que receba duas notas, calcule e mostre a média aritmética e a mensagem que se encontra
    na tabela a seguir:

        MÉDIA           ARITMÉTICA          MENSAGEM

        0,0        |       3,0       |      Reprovado
        3,0        |       7,0       |        Exame
        7,0        |      10,0       |      Aprovado

*/


#include <stdio.h>
#include <stdlib.h>

int main()

{
    
    float a, b, c;
    float soma;
    float media;

    scanf ("%f %f %f",&a, &b, &c);
   

    soma=a+b+c;
    media=soma/3;

    printf("A média deles é %.2f\n", media);

    return 0;

}
