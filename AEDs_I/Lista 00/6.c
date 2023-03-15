/*
    6. Ler a razão e o primeiro termo de uma PA e mostrar o seu decimo termo.

*/

#include <stdio.h>

int main()
{
    int primeiro_termo, razao, decimo_termo;

    // printf("Digite a razao da PA: ");
    scanf("%d", &razao);

    // printf("Digite o primeiro termo da PA: ");
    scanf("%d", &primeiro_termo);

    decimo_termo = primeiro_termo + (9 * razao); // cálculo do décimo termo

    printf("%d", decimo_termo);

    return 0;
}
