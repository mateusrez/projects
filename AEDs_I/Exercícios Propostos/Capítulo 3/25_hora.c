/*
    Faça um programa que receba uma hora (uma variável para hora e outra para minutos), calcule e mostre:

    a) a hora digitada convertida em minutos;
    b) o total dos minutos, ou seja, os minutos digitados mais a conversão anterior;
    c) o total dos minutos convertidos em segundos.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system ("clear");
    
    // Declaração de variáveis
    int hora, minutos, hora_minutos, total_minutos, total_segundos;
    
    // Entrada de dados
    printf ("Digite a hora: ");
    scanf ("%d", &hora);
    
    printf ("Digite os minutos: ");
    scanf ("%d", &minutos);
    
    // Processamento
    hora_minutos = hora * 60;
    total_minutos = hora_minutos + minutos;
    total_segundos = total_minutos * 60;
    
    // Saída de dados
    printf ("A hora digitada convertida em minutos é: %d \n", hora_minutos);
    printf ("O total dos minutos é: %d \n", total_minutos);
    printf ("O total dos minutos convertidos em segundos é: %d \n", total_segundos);

    return 0; // Fim do programa
}