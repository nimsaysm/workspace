//Desenvolver um algoritmo para ler o número de uma sala de aula, sua capacidade e o total de alunos matriculados na mesma e imprimir uma linha mostrando o número da sala, sua capacidade, o número de cadeiras ocupadas e sua disponibilidade indicando se a sala está lotada ou não.

#include <stdio.h>
#include <math.h>


int main()
{
    int numeroSala, capacidade, totalMatriculados, vagas;
    printf("Número da sala: ");
    scanf ("%i", &numeroSala);
    printf("Capacidade da sala: ");
    scanf ("%i", &capacidade);
    printf("Total de alunos matriculados: ");
    scanf ("%i", &totalMatriculados);
    
    printf ("A sala %i ", numeroSala);
    if (capacidade > totalMatriculados) {
        vagas = capacidade - totalMatriculados;
        printf ("possui %i vagas.", vagas);
    } else if (capacidade <= totalMatriculados) {
        printf ("está lotada.");
    }


    return 0;
}
