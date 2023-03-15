/*
    21. Uma pessoa deseja pregar um quadro em uma parede. Faça um programa para calcular e mostrar a 
    que distância a escada deve estar da parede. A pessoa deve fornecer o tamanho da escada e a altura 
    em que deseja pregar o quadro.

    Lembre-se de que o tamanho da escada deve ser maior que a altura que se deseja alcançar.

*/

#include <stdio.h>
#include <math.h>

int main() 
{
    system("clear");

    float x, z, y;
    
    printf ("Digite o tamanho da escada: ");
    scanf ("%f", &z);
    
    printf ("Digite a altura em que deseja pregar o quadro: ");
    scanf ("%f", &x);
    
    y = sqrt(pow(z, 2) - pow(x, 2));
    
    printf ("A escada deve estar a %.2f metros da parede.\n", y);
    
    return 0;
}
