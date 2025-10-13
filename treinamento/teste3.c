#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 100
#define N 8

typedef struct {
    char nome[TAM];
    float nota;
}Aluno;

void bubblesort (Aluno cadastro[], int n) {
    int troca;
    for(int i = 0; i < n - 1; i++) {
        troca = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (cadastro[j].nota < cadastro[j+1].nota) {
                Aluno temp = cadastro[j+1];
                cadastro[j+1] = cadastro[j];
                cadastro[j] = temp;
                troca = 1;
            }
        }
        if (troca == 0) {
            break;
        }
    }
}

void exibir (Aluno cadastro[], int n){
    for (int i = 0; i < n; i++) {
        printf("%s - Nota: %.2f \n", cadastro[i].nome, cadastro[i].nota);
    }
}

int main () {
    Aluno cadastro[N] = {
        {"Ana", 8.5},
        {"Bruno", 7.0},
        {"Camila", 9.2},
        {"Diego", 6.8},
        {"Elisa", 8.0},
        {"Felipe", 7.5},
        {"Gabriela", 9.7},
        {"Henrique", 6.0}
    };
    exibir(cadastro, N);
    printf("\n");

    bubblesort(cadastro, N);
    exibir(cadastro, N);
    return 0;
}