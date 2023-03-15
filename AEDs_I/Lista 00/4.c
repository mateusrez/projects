/*
    4. Ler com o raio de um círculo e mostrar o seu perímetro e área.

*/

#include <stdio.h>
#include <math.h>

int main() 
{
    float raio, perimetro, area;
    float PI = 3.14159;

    // printf("Digite o raio do circulo: ");
    scanf ("%f", &raio);

    perimetro = 2 * PI * raio; // cálculo do perímetro
    printf ("Perímetro: %.2f\n", perimetro);

    area = PI * (raio * raio);  // cálculo da área
    printf ("Área: %.2f\n", area);

    return 0;
}