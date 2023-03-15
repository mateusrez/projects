/*
    5. Faça um programa que receba o preço de um produto, calcule e mostre o novo preço, sabendo-se 
    que este sofreu um desconto de 10%.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear"); // limpa o terminal

    float preco;

    printf ("Informe o valor do produto: ");
    scanf ("%f", &preco);

    printf ("Novo preço: %.2f \n", preco*0.90);


    return 0; // fim do programa
}