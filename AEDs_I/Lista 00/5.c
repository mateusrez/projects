/*
    5. Ler os valores dos catetos de um triângulo retângulo e mostrar a hipotenusa.

*/

#include <stdio.h>
#include <math.h>

int main()
{
    float cateto1, cateto2, hipotenusa;

    // printf ("Digite o valor do primeiro cateto: ");
    scanf ("%f", &cateto1);

    // printf("Digite o valor do segundo cateto: ");
    scanf ("%f", &cateto2);

    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2)); // cálculo da hipotenusa

    printf ("Hipotenusa: %.2f\n", hipotenusa);

    return 0;
}
