// Desenvolver um algoritmo que leia um número inteiro e verifique se o número é divisível por 5 e por 3 ao mesmo tempo.

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Digite um número: ");
    scanf ("%d", &n);
    
    if (((n % 5)== 0) && ((n % 3)== 0)) {
        printf ("É DIVISÍVEL");
    } else {
        printf ("NÃO É DIVISÍVEL");
    }

    return 0;
}

