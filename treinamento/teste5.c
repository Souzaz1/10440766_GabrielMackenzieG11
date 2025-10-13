#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 100
#define N 100

typedef struct {
    char Nome[TAM];
    char Cargo[TAM];
    float salario;
} Funcionario;

void gerarFuncionarios(Funcionario f[], int n) {
    for (int i = 0; i < n; i++) {
        // Nome gerado automaticamente
        sprintf(f[i].Nome, "Funcionario %d", i + 1);

        // Cargos alternados
        if (i % 5 == 0)
            strcpy(f[i].Cargo, "Estagiário");
        else if (i % 5 == 1)
            strcpy(f[i].Cargo, "Assistente");
        else if (i % 5 == 2)
            strcpy(f[i].Cargo, "Analista");
        else if (i % 5 == 3)
            strcpy(f[i].Cargo, "Gerente");
        else
            strcpy(f[i].Cargo, "Diretor");

        // Salário variando
        f[i].salario = 1200 + (i % 10) * 500;  // de 1200 até 5700
    }
}

void selection(Funcionario cadastro[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (cadastro[j].salario < cadastro[min_idx].salario) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            Funcionario temp = cadastro[min_idx];
            cadastro[min_idx] = cadastro[i];
            cadastro[i] = temp;
        }
    }
}

void exibir(Funcionario cadastro[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Funcionário %d:\n", i + 1);
        printf("Nome: %s\n", cadastro[i].Nome);
        printf("Cargo: %s\n", cadastro[i].Cargo);
        printf("Salário: R$ %.2f\n", cadastro[i].salario);
        printf("-------------------------\n");
    }
}

int main() {
    Funcionario cadastro[N];

    gerarFuncionarios(cadastro, N);

    printf("\n--- FUNCIONÁRIOS GERADOS ---\n\n");
    exibir(cadastro, N);

    selection(cadastro, N);

    printf("\n--- FUNCIONÁRIOS ORDENADOS POR SALÁRIO (crescente) ---\n\n");
    exibir(cadastro, N);

    return 0;
}
