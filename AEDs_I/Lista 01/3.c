/*
    Autor: Mateus G. Rezende
    Última atualização - 17/03/2023

    3. Faça um algoritmo que leia o ano de nascimento de uma pessoa e calcule sua idade, 
    considerando o ano atual. Para verificar se já fez aniversário no ano atual pergunte se a 
    pessoa já fez aniversário, sendo que ela pode entrar com a informação "S"(sim) ou "N" (não). 
    Com isto é possível se ter maior precisão sobre a idade. Verifique também se a 
    pessoa já tem idade para conseguir Carteira de Habilitação (18 anos ou mais) e imprima a 
    mensagem referente a esta checagem. Imprima a idade da pessoa
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main ()
{
    // system ("clear");

    // Declaração de variáveis
    int ano_nascimento, idade, ano_atual;
    char fez_aniversario;

    // Entrada de dados
    // printf ("Digite o ano de nascimento: ");
    scanf ("%i", &ano_nascimento);

    // printf ("Você já fez aniversário este ano? (S/N): ");
    scanf (" %c", &fez_aniversario);
    fez_aniversario = toupper (fez_aniversario);

    // Processamento de dados
    ano_atual = 2023;

    if (fez_aniversario == 'S')
    {
        idade = ano_atual - ano_nascimento;
    }
    else
    {
        idade = ano_atual - ano_nascimento - 1;
    }
    
    printf ("%i \n", idade);

    if (idade > 18)
    {
        printf ("Pode dirigir");
    }
    else
    {
        printf ("Não pode dirigir");
    }

    return 0; // Fim do programa
}