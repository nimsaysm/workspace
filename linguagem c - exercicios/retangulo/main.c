// Objetivo: Calcular a altura, perímetro e diagonal de um retângulo

#include <stdio.h>
#include <math.h>

int main()
{
    double base, altura, area, perimetro, diagonal;
    
    printf ("Base do retângulo: ");
    scanf ("%lf", &base);
    
    printf ("Altura do retângulo: ");
    scanf ("%lf", &altura);
    
    area = base * altura;
    perimetro = 2* (base + altura);
    diagonal = sqrt (base *  base + altura * altura);
    
    printf ("Área do retângulo = %.4lf\n", area);
    printf ("Perímetro do retângulo = %.4lf\n", perimetro);
    printf ("Diagonal do retângulo = %.4lf\n", diagonal);
    
    return 0;
}

