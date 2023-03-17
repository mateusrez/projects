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

int main ()
{
    // system ("clear");

    // Declaração de variáveis
    int ano_nascimento, idade, ano_atual;
    char fez_aniversario;

    // Entrada de dados
    // printf ("Digite o ano de nascimento: ");
    scanf ("%i", &ano_nascimento);

    // printf("Digite o ano atual: ");
    scanf ("%i", &ano_atual);

    // printf ("Você já fez aniversário este ano? (S/N): ");
    scanf (" %c", &fez_aniversario);

    // Processamento de dados
    if (fez_aniversario == 'S')
    {
        idade = ano_atual - ano_nascimento;
    }
    else
    {
        idade = ano_atual - ano_nascimento - 1;
    }

    if (idade >= 18)
    {
        printf ("Você já pode tirar a CNH \n");
    }
    else
    {
        printf ("Você ainda não pode tirar a CNH \n");
    }

    // Saída de dados
    printf ("Sua idade é %i", idade);

    return 0; // Fim do programa
}