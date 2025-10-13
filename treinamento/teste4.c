#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 100
#define N 5

typedef struct {
    char nome[TAM];
    char autor[TAM];
    int ano;
}Livro;

void selectionsort (Livro cadastro[], int n) {
    for (int i = 0; i < n-1; i++) {
        int min_idx = i;
        for (int j = i+1; j < n; j++) {
            if (cadastro[j].ano < cadastro[min_idx].ano) {
                min_idx = j;
            }
            if (min_idx != i) {
                Livro temp = cadastro[min_idx];
                cadastro[min_idx] = cadastro[i];
                cadastro[i] = temp;
            }
        }
    }
}

void povoar (Livro cadastro[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Título %d: ", i);
        fgets(cadastro[i].nome, TAM, stdin);
        cadastro[i].nome[strcspn(cadastro[i].nome, "\n")] = '\0';

        printf("Autor %d: ", i);
        fgets(cadastro[i].autor, TAM, stdin);
        cadastro[i].autor[strcspn(cadastro[i].autor, "\n")] = '\0';

        printf("Ano de Publicação %d: ", i);
        scanf("%d", &cadastro[i].ano);
        getchar();
        printf("\n");
    }
}

void exibir (Livro cadastro[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Título %s - Autor: %s - Ano: %d \n", cadastro[i].nome, cadastro[i].autor, cadastro[i].ano);
    }
}

int main() {
    Livro cadastro[N];
    povoar(cadastro, N);
    exibir(cadastro, N);
    selectionsort(cadastro, N);
    exibir(cadastro, N);
    return 0;
}