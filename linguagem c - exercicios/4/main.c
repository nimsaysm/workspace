//Desenvolver um algoritmo para ler um número “x” e calcular e imprimir o valor de “y” de acordo com as condições:y = x , se x < 1;y = 0 , se x = 1;y = x² , se x > 1;

#include <stdio.h>
#include <math.h>

int main()
{
    int x, y;
    printf("Escreva o valor de x: ");
    scanf ("%i",&x);
    
    if (x < 1) {
        y = x;
    } else if (x == 1) {
        y = 0;
    } else if (x > 1) {
        y = pow(x,2);
    }
    
    printf ("y = %i", y);

    return 0;
}
