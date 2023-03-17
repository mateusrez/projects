/*
    Autor: Mateus G. Rezende
    Última atualização - 17/03/2023

    4. Faça um algoritmo que segundo uma nota informada pelo usuário, verifique em qual faixa a 
    mesma se encaixa e imprima para o usuário a mensagem correspondente conforme a tabela abaixo:

    Faixa das notas:                    Mensagem:

    Nota > = 8 e Nota < = 10            Ótimo
    Nota > = 7 e Nota < 8               Bom
    Nota > = 5 e Nota < 7               Regular    
    Nota < 5                            Ruim
   
*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    // system ("clear");

    // Declaração de variáveis
    float nota;

    // Entrada de dados
    // printf("Digite a nota: ");
    scanf ("%f", &nota);

    // Processamento de dados
    if (nota >= 8 && nota <= 10)
    {
        printf ("Ótimo");
    }
    else if (nota >= 7 && nota < 8)
        {
            printf ("Bom");
        }
        else if (nota >= 5 && nota < 7)
            {
                printf ("Regular");
            }
            else  // nota < 5
            {
                printf ("Ruim");
            }

    // Saída de dados

    return 0; // Fim do programa
}