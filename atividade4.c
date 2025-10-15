#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAM 100

typedef struct {
    char nome[TAM];
    char cargo[TAM];
    float salario;
}Funcionario;

void cadastrar (Funcionario funcionarios[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%dº Funcionario\n", i);
        printf("Nome: ");
        fgets(funcionarios[i].nome, TAM, stdin);
        funcionarios[i].nome[strcspn(funcionarios[i].nome, "\n")] = '\0';
        printf("Cargo: ");
        fgets(funcionarios[i].cargo, TAM, stdin);
        funcionarios[i].cargo[strcspn(funcionarios[i].cargo, "\n")] = '\0';
        printf("Salário: ");
        scanf("%f", &funcionarios[i].salario);
        getchar();
        printf("\n");
    }
}

void ordenarPorNome(Funcionario funcionarios[], int n) {
    int troca; 
    for (int i = 0; i < n - 1; i++) {
        troca = 0;
        for(int j = 0; j < n - i -1; j++) {
            if (strcmp(funcionarios[j].nome, funcionarios[j + 1].nome) > 0) {
                Funcionario temp = funcionarios[j + 1];
                funcionarios[j+1] = funcionarios[j];
                funcionarios[j] = temp;
                troca = 1;
            }
        }
        if (troca == 0) {
            break;
        }
    } 
}

void exibir (Funcionario funcionarios[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nome: %s", funcionarios[i].nome);
        printf("\n");
        printf("Cargo: %s", funcionarios[i].cargo);
        printf("\n");
        printf("Salário: %.2f", funcionarios[i].salario);
        printf("\n\n");
    }
}

int indiceMaiorSalario(Funcionario funcionarios[], int n) {
    float maior = funcionarios[0].salario;
    int indice = 0;
    for (int i = 0; i < n; i++) {
        if (funcionarios[i].salario > maior) {
            maior = funcionarios[i].salario;
            indice = i;
        }
    }
    return indice;
}

void mostrarFuncionario(Funcionario funcionarios) {
    printf("Funcionário com maior salário:\n");
    printf("Nome: %s\n", funcionarios.nome);
    printf("Cargo: %s\n", funcionarios.cargo);
    printf("Salário: %.2f\n\n", funcionarios.salario);
}

float calcularMedia(Funcionario funcinarios[], int n){
    float media = 0.0;
    float soma = 0.0;
    for (int i = 0; i < n; i++) {
        soma += funcinarios[i].salario;
    }
    return media = soma / n;
}

int main () {
    int n;
    printf("Digite a quantidade de funcionarios que sera cadastrado: ");
    scanf("%d", &n);
    Funcionario funcionarios[n];
    printf("\n");
    getchar();
    printf("Cadastro de Clientes!\n");
    cadastrar(funcionarios, n);
    ordenarPorNome(funcionarios, n);
    printf("Lista de Funcionários ordenados!\n");
    exibir(funcionarios, n);
    int idxMaiorSal = indiceMaiorSalario(funcionarios, n);
    mostrarFuncionario(funcionarios[idxMaiorSal]);
    printf("A media de salário dos funcionarios são: %.2f", calcularMedia(funcionarios, n));
    return 0;
}