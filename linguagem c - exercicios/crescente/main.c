// Objetivo: Ler dois valores e imprimir na tela se os mesmos foram escritos em ordem crescente ou decrescente. Se forem digitados dois valores iguais, o programa deverá finalizar

#include <stdio.h>

int main()
{
    int X, Y;
    
    printf("Digite dois números:\n");
    scanf ("%d", &X);
    scanf ("%d", &Y);
    
    while (X != Y) {
        if (X < Y) {
            printf ("CRESCENTE\n");
        } else {
            printf ("DECRESCENTE\n");
        }
        
        printf("Digite outros dois números:\n");
        scanf ("%d", &X);
        scanf ("%d", &Y);
        
    }
    

    return 0;
}
