/*
    13. Sabe-se que:
        pé = 12 polegadas
        1 jarda = 3 pés
        1 milha = 1,760 jarda
        
    Faça um programa que receba uma medida em pés, faça as conversões a seguir e mostre os resultados:
    
    a) polegadas;
    b) jardas;
    c) milhas.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    float pes, polegadas, jardas, milhas;

    printf("Informe a medida em pés: ");
    scanf("%f", &pes);

    polegadas = pes * 12;
    jardas = pes / 3;
    milhas = jardas / 1760;

    printf ("Medida em polegadas: %.2f\n", polegadas);
    printf ("Medida em jardas: %.2f\n", jardas);
    printf ("Medida em milhas: %.2f\n", milhas);

    return 0;
}