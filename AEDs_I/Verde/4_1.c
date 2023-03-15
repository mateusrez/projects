#include <stdio.h>
#include <stdlib.h>


int main()
{
    // system("clear");

    // Declaração de variáveis
    float nota_trab, aval_sem, exame, media;

    // Atribuição das veriáveis
    // printf("Digite a nota do trabalho de laboratório: ");
    scanf("%f", &nota_trab);

    // printf("Digite a nota da avaliação semestral: ");
    scanf("%f", &aval_sem);

    // printf("Digite a nota do exame final: ");
    scanf("%f", &exame);

    // Cálculo da media ponderada
    media = (nota_trab * 2 + aval_sem * 3 + exame * 5) / 10;

    // Exibição do resultado
    printf("Média ponderada: %.2f\n", media);

    // Cálculo do conceito
    if (media >= 8 && media <= 10)
    {
        printf("Obteve conceito A\n");
    }
    else if (media >= 7 && media < 8)
            {
                printf("Obteve conceito B\n");
            }
            else if (media >= 6 && media < 7)
                    {
                        printf("Obteve conceito C\n");
                    }
                    else if (media >= 5 && media < 6)
                            {
                                printf("Obteve conceito D\n");
                            }
                            else
                            {
                                printf("Obteve conceito E\n");
                            }
    

    return 0; // Fim do programa
}