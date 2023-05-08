// Dados quatro números distintos, desenvolver um algoritmo que determine e imprima a soma dos três menores.

#include <stdio.h>
#include<math.h>

int main()
{
    int a,b,c,d,soma;
    printf("Digite quatro números:\n");
    scanf ("%i", &a);
    scanf ("%i", &b);
    scanf ("%i", &c);
    scanf ("%i", &d);
    
    if (a > b && a > c && a > d) {
        soma = b + c + d;
        printf ("%i", soma);
    } else if (b > a && b > c && b > d) {
        soma = a + c + d;
        printf ("%i", soma);
    } else if (c > a && c > b && c > d) {
        soma = a + b + d;
        printf ("%i", soma);
    } else {
        soma = a + b + c;
        printf ("%i", soma);
    }
    

    return 0;
}

