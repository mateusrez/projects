/*
    8. Ler dois números reais e salvá-los nas variáveis A e B. Em seguida, troque dos valores das duas
    variáveis de forma que a variável A passe a ter o valor da variável B e vice-versa. No final, mostre
    os valores finais.

*/

#include <stdio.h>

int main() {
    float A, B, aux;

    // printf ("Digite o valor de A: ");
    scanf ("%f", &A);

    // printf ("Digite o valor de B: ");
    scanf ("%f", &B);

    aux = A;
    A = B;
    B = aux;

    printf ("%f ", A);
    printf ("%f", B);

    return 0;
}
