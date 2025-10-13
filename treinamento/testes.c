#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 5
#define TAM_NOME 100

typedef struct {
    char nome[TAM_NOME];
    int idade;
} Pessoa;

void insertionsort (Pessoa cadastro[], int n) {
    for (int i = 1; i < n; i++) {
        int key = cadastro[i].idade;
        int j = i - 1;
        while(j >= 0 && cadastro[j].idade > key) {
            cadastro[j + 1].idade = cadastro[j].idade;
            j = j - 1;
        }
        cadastro[j + 1].idade = key;
    }
    printf("Os mais velhos são: %d %d %d %d %d", cadastro[0].idade, cadastro[1].idade, cadastro[2].idade, cadastro[3].idade, cadastro[4].idade);
}

void povoar (Pessoa cadastro[], int n) {
    printf("Cadastro de pessoas\n");
    for (int i = 0; i < n; i++) {
        printf("Nome da %dª pessoa: ", i);
        fgets(cadastro[i].nome, TAM_NOME, stdin);
        cadastro[i].nome[strcspn(cadastro[i].nome, "\n")] = '\0';

        printf("Idade da %dª pessoa: ", i);
        scanf("%d", &cadastro[i].idade);
        getchar();
        printf("\n");
    }
}

void exibir(Pessoa cadastro[], int n) {
    printf("\nLista de pessoas:\n");
    for (int i = 0; i < n; i++) {
        printf("%d. %s - %d anos\n", i + 1, cadastro[i].nome, cadastro[i].idade);
    }
}

int main() {
    int n = 5;
    Pessoa cadastro[5];

    povoar(cadastro, n);
    exibir(cadastro, n);
    printf("\n");
    insertionsort(cadastro, n);

    return 0;
}