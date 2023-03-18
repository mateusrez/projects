/*
    6. Faça umprograma que receba dois números e execute uma das operaçõesl istadas a seguir,de acordo com a 
    escolha do usuário. Se for digitada uma opção inválida, mostre mensagem de erro e termine a execução do 
    programa. As opções são:

    a) O primeiro número elevado ao segundo número.
    b) Raiz quadrada de cada um dos números. 
    c) Raiz cúbica de cada um dos números.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    system ("clear");

    // Declaração de variáveis
    float num1, num2;
    char opcao;   

    // Entrada de dados
    printf ("Digite o primeiro número: ");
    scanf ("%f", &num1);

    printf ("Digite o segundo número: ");
    scanf ("%f", &num2);

    printf ("Digite a opção desejada: ");
    scanf (" %c", &opcao);

    // Processamento
    switch (opcao)
    {
        case 'a':
            printf ("O primeiro número elevado ao segundo número é: %.2f", pow(num1, num2));
            break;

        case 'b':
            printf ("A raiz quadrada do primeiro número é: %.2f", sqrt(num1));
            printf ("A raiz quadrada do segundo número é: %.2f", sqrt(num2));
            break;

        case 'c':
            printf ("A raiz cúbica do primeiro número é: %.2f", cbrt(num1));
            printf ("A raiz cúbica do segundo número é: %.2f", cbrt(num2));
            break;

        default:
            printf ("Opção inválida");
    }

    return 0;
}