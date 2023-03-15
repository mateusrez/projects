/*
    11. Faça um programa que receba um número positivo e maior que zero, calcule e mostre:

    a) o número digitado ao quadrado;
    b) o número digitado ao cubo;
    c) a raiz quadrada do número digitado;
    d) a raiz cúbica do número digitado.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    system("clear");

    float num, quad, cubo, r2, r3;

    printf("Informe o valor do número [ maior que 0 ]: ");
    scanf("%f", &num);

    quad = pow(num, 2);
    cubo = pow(num, 3);
    r2 = sqrt(num);
    r3 = cbrt(num);

    printf ("Numero ao quadrado: %.2f\n", quad);
    printf ("Numero ao cubo: %.2f\n", cubo);
    printf ("Raiz quadrada do numero: %.2f\n", r2);
    printf ("Raiz cubica do numero: %.2f\n", r3);
    
    return 0;
}
