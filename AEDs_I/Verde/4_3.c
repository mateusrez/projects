/*
    3. Faça um programa que receba dois números e mostre o maior.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // system("clear");

    float num1, num2;
    scanf("%f %f", &num1, &num2);

    if (num1 > num2)
    {
        printf ("O maior número é %.0f", num1);
    }
    else printf ("O maior número é %.0f", num2);

    return 0;
}