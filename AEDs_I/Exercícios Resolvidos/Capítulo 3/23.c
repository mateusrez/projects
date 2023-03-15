/*
    23. Faça um programa que receba um número real, encontre e mostre:

    a) a parte inteira desse número;
    b) a parte fracionária desse número;
    c) o arredondamento desse número.

*/

#include <stdio.h>
#include <math.h>

int main() 
{
    system("clear");

    float num, f;
    int i, a;

    printf ("Digite um número real: ");
    scanf ("%f", &num);

    i = (int) num;
    f = num - i;
    a = round(num);

    printf ("Parte inteira: %d\n", i);
    printf ("Parte fracionária: %.2f\n", f);
    printf ("Arredondamento: %d\n", a);

    return 0;
}
