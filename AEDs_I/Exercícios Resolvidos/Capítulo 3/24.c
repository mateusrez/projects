/*
    24. Faça um programa que receba uma hora formada por hora e minutos (um número real), calcule e
    mostre a hora digitada apenas em minutos. Lembre-se de que:

    - para quatro e meia, deve-se digitar 4.30;
    - os minutos vão de 0 a 59.

*/

#include <stdio.h>
#include <math.h>

int main() 
{
    system("clear");

    float hora, m; // declara as variáveis
    int h, conversao; // declara as variáveis

    printf ("Digite a hora no formato hh.mm: ");
    scanf ("%f", &hora); // lê a hora no formato hh.mm

    h = (int) hora; // pega a parte inteira da hora, que é a hora em si
    m = hora - h; // pega a parte decimal da hora, que é os minutos

    conversao = (h * 60) + (m * 100); // converte a hora para minutos, multiplicando a hora por 60 e adicionando os minutos convertidos em centésimos

    printf ("Hora digitada em minutos: %d\n", conversao); // exibe o resultado

    return 0;
}
