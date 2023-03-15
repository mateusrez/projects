/*
    7. Ler a razão e o primeiro termo de uma PG e mostrar o seu quinto termo.

*/

#include <stdio.h>

int main() 
{
    int primeiro_termo, razao, quinto_termo;

    // printf ("Digite o primeiro termo da PG: ");
    scanf ("%d", &primeiro_termo);

    // printf ("Digite a razão da PG: ");
    scanf ("%d", &razao);

    quinto_termo = primeiro_termo * pow(razao, 4); // cálculo do quinto termo

    printf ("%d", quinto_termo);

    return 0;
}
