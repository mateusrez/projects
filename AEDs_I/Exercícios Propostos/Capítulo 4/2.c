/*
    2. Faça um programa que receba duas notas, calcule e mostre a média aritmética e a 
    mensagem que se encontra na tabela a seguir:
    
    MÉDIA ARITMÉTICA                MENSAGEM

    0,0         3,0                 Reprovado
    3,0         7,0                 Exame
    7,0         10,0                Aprovado
    
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system ("clear");

    // Declaração de variáveis
    float nota1, nota2, media;

    // Entrada de dados
    printf ("Digite a primeira nota: ");
    scanf ("%f", &nota1);

    printf ("Digite a segunda nota: ");
    scanf ("%f", &nota2);

    // Processamento
    media = (nota1 + nota2) / 2;

    if (media >= 0 && media <= 3)
    {
        printf ("Reprovado");
    }
    else if (media > 3 && media <= 7)
        {
            printf ("Exame");
        }
        else // (media > 7 && media <= 10
            {
                printf ("Aprovado");
            }

    // Saída de dados
    printf ("A média aritmética é: %.2f", media);

    return 0;
}