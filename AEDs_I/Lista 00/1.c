/*
    1. Ler do teclado um número inteiro com três dígitos (no formato CDU - centena, dezena e unidade) e 
    mostrar o número invertido (no formato UDC). O número invertido deve ser armazenado em outra variável 
    antes de ser mostrado.

    Exemplo Entrada: 256
    Saída Esperada: 652

*/

#include <stdio.h>

int main()
{
    // system("clear");
    
    int num, c, d, u, invertido; // declara variáveis

    // printf("Digite um numero inteiro com tres dígitos: ");
    scanf("%d", &num);

    c = num / 100;        // obtém o dígito da centena
    d = (num % 100) / 10; // obtém o dígito da dezena
    u = num % 10;         // obtém o dígito da unidade

    invertido = u * 100 + d * 10 + c;

    printf("%d", invertido);

    return 0;
}
