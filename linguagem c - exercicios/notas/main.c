// Objetivo: ler 2 notas de um aluno, calcular a nota final (soma das duas notas) e imprimir na tela se o aluno foi APROVADO (nota final acima de 60) ou REPROVADO

#include <stdio.h>

int main()
{
    double nota1, nota2, notaFinal;
    
    printf ("Digite a primeira nota: ");
    scanf ("%lf", &nota1);
    
    printf ("Digite a segunda nota: ");
    scanf ("%lf", &nota2);
    
    notaFinal = nota1 + nota2;
    
    printf ("NOTA FINAL = %.1lf\n", notaFinal);
    
    if (notaFinal < 60.0){
        printf ("REPROVADO\n");
    }
    else {
        printf ("APROVADO");
    }
    
    return 0;
}
