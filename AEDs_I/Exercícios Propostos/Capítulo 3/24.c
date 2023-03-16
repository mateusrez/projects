/*
    24. Faça um programa que receba a quantidade de dinheiro em reais que uma pessoa que vai viajar possui. 
    Ela vai passar por vários países e precisa converter seu dinheiro em dólares, marco alemão e libra esterlina. 
    Sabe-se que a cotação do dólar é de R$ 1,80; do marco alemão, de R$ 2,00; e da libra esterlina, de R$ 3,57. 
    O programa deve fazer as conversões e mostrá-las.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system ("clear");
    
    // Declaração de variáveis
    float dinheiro, dolar, marco, libra;
    
    // Entrada de dados
    printf ("Digite a quantidade de dinheiro em reais: ");
    scanf ("%f", &dinheiro);
    
    // Processamento
    dolar = dinheiro / 1.80;
    marco = dinheiro / 2.00;
    libra = dinheiro / 3.57;
    
    // Saída de dados
    printf ("O valor em dólares é: %.2f \n", dolar);
    printf( "O valor em marcos alemães é: %.2f \n", marco);
    printf ("O valor em libras esterlinas é: %.2f \n", libra);

    return 0; // Fim do programa
}