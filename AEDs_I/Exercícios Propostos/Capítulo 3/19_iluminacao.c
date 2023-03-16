/*
    19. Sabe-se que, para iluminar de maneira correta os cômodos de uma casa, para cada m2, deve-se 
    usar 18 W de potência. Faça um programa que receba as duas dimensões de um cômodo (em metros), 
    calcule e mostre a sua área (em m2) e a potência de iluminação que deverá ser utilizada.

*/

#include <stdio.h>
#include <stdlib.h>

int main() // 
{
    system ("clear"); 

    // Declaração de variáveis
    float largura, comprimento, area, potencia; 

    // Entrada de dados
    printf( "Digite a largura do cômodo: ");
    scanf ("%f", &largura);

    printf ("Digite o comprimento do cômodo: ");
    scanf ("%f", &comprimento);

    // Processamento
    area = largura * comprimento;
    potencia = area * 18;

    // Saída de dados
    printf ("A área do cômodo é: %.2f \n", area);
    printf ("A potência de iluminação necessária é: %.2f \n", potencia);

    return 0;
}