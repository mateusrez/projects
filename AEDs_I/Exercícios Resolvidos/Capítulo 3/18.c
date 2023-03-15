/*
    18. Pedro comprou um saco de ração com peso em quilos. Ele possui dois gatos, para os quais fornece a
    quantidade de ração em gramas. A quantidade diária de ração fornecida para cada gato é sempre a
    mesma. Faça um programa que receba o peso do saco de ração e a quantidade de ração fornecida para
    cada gato, calcule e mostre quanto restará de ração no saco após cinco dias.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    float peso_saco, racao_gato1, racao_gato2, total_final;

    printf("Informe o peso do saco: ");
    scanf ("%f", peso_saco);

    printf("Digite a ração do primeiro gato: ");
    scanf ("%f", racao_gato1);

    printf("Digite a reção do segundo gato: ");
    scanf ("%f", racao_gato2);

    racao_gato1 = racao_gato1 / 1000;
    racao_gato2 = racao_gato2 / 1000;
    total_final = peso_saco - 5 * (racao_gato1 + racao_gato2);

    printf ("Ração restante após 5 dias: %.2f", total_final);
    
    return 0;
}