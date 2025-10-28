#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ARQUIVO  "2G.txt"
#define TAM 100

void cadastrar () {
    char nome[100];
    float nota;

    getchar();
    printf("Digite o nome do Aluno: ");
    fgets(nome, TAM, stdin);
    nome[strcspn(nome,"\n")] = '\0';
    printf("Digite a nota: ");
    scanf("%f", &nota);
    getchar();
    printf("\n");

    FILE *arquivo = fopen(ARQUIVO, "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n\n");
    }

    fprintf(arquivo, "%s, %.2f\n", nome, nota);
    fclose(arquivo);

    printf("Aluno cadastrado com sucesso!\n");

}

void exibir () {
    char linha[150];
    FILE *arquivo = fopen(ARQUIVO, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n\n");
    }
    printf("-------Lista Alunos---------");
    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        printf("%s", linha);
    }
    printf("----------------------\n");
    fclose(arquivo);
}

int main () {
    int opcao;
    do {
        printf("1 - Cadastrar Aluno e Nota\n");
        printf("2 - Exibir Alunos Cadastrado\n"); 
        printf("3 - Sair\n");
        printf("Escolha uma das opções: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
               cadastrar();
               break;
            case 2:
               exibir();
               break;
            case 3:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    }while (opcao != 3);
    
}