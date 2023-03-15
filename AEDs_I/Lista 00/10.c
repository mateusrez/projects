/*
    10. Ler um valor de hora (e minuto), calcular e mostrar quantos minutos se passaram desde o início do dia.

*/

#include <stdio.h>

int main()
{
    int hora, minuto, total_minutos;

    // printf ("Digite a hora: ");
    scanf ("%d", &hora);

    // printf ("Digite o minuto: ");
    scanf ("%d", &minuto);

    total_minutos = hora * 60 + minuto;

    printf ("%d", total_minutos);

    return 0;
}
