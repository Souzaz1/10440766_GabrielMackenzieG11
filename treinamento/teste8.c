#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define arquivo "Caixa.txt"
#define TAM 100

void caixa() {
    char dia[TAM];
    float valor;

    getchar();
    printf("Digite o dia: ");
    fgets(dia, TAM, stdin);
    dia[strcspn(dia, "\n")] = '\0';
    printf("Digite o valor: ");
    scanf("%f", &valor);
    getchar();

    FILE *doc = fopen(arquivo, "a");
    if (doc == NULL) {
        printf("Erro ao abrir o arquivo.\n");
    }
    fprintf(doc, "%s | %.2f\n", dia, valor);

    fclose(doc);

    printf("Valor cadastrado com sucesso! \n\n");
}

void exibir () {
    char linha[150];
    FILE *doc = fopen(arquivo, "r");
    printf("-------Valor---------\n");
    if (doc == NULL) {
        printf("Erro ao abrir o arquivo.\n");
    }
    while(fgets(linha, sizeof(linha), doc) != NULL) {
        printf("%s", linha);
    }
    printf("---------------------\n\n");
    fclose(doc);

}

int main () {
    int opcao;

    do {
        printf("1 - Cadastrar Valor/Dia\n");
        printf("2 - Exibir Valor/Dia\n");
        printf("3 - Sair\n");
        printf("Digite sua opção: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            caixa();
            break;
        case 2: 
            exibir();
            break;
        case 3:
            break;
        default:
            printf("Opção inválida! Tente novamente.\n");
        }
    }while (opcao != 3);
    return 0;
}