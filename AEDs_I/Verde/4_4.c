/*
    4. Faça um programa que receba três números e mostre-os em ordem crescente. Suponha que o usuário
    digitará três números diferentes.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2, num3;

    scanf("%f %f %f", &num1, &num2, &num3);

    if (num1 < num2 && num1 < num3)
    {
        if (num2 < num3)
        {
            printf("A ordem crescente é: %.0f-%.0f-%.0f", num1, num2, num3);
        }
        else
            printf("A ordem crescente é: %.0f-%.0f-%.0f", num1, num3, num2);
    }

    if (num2 < num1 && num2 < num3)
    {
        if (num1 < num3)
        {
            printf("A ordem crescente é: %.0f-%.0f-%.0f", num2, num1, num3);
        }
        else
            printf("A ordem crescente é: %.0f-%.0f-%.0f", num2, num3, num1);
    }

    if (num3 < num1 && num3 < num2)
    {
        if (num1 < num2)
        {
            printf("A ordem crescente é: %.0f-%.0f-%.0f", num3, num1, num2);
        }
        else
            printf("A ordem crescente é: %.0f-%.0f-%.0f", num3, num2, num1);
    }

    return 0;
}