/*
    3. Ler a base e a altura de um retângulo e mostrar o seu perímetro, área e diagonal.

*/

#include <stdio.h>
#include <math.h>

int main() {
    float base, altura, perimetro, area, diagonal;

    // printf ("Digite a base do retangulo: ");
    scanf ("%f", &base);

    // printf ("Digite a altura do retangulo: ");
    scanf("%f", &altura);

    perimetro = 2 * (base + altura); // cálculo do perímetro
    printf ("Perímetro: %.2f\n", perimetro);

    area = base * altura; // cálculo da área
    printf ("Área: %.2f\n", area);

    diagonal = sqrt(pow(base, 2) + pow(altura, 2)); // cálculo da diagonal
    printf ("Diagonal: %.2f\n", diagonal);

    return 0;
}
