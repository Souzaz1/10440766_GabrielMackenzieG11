#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LINHA (10)
#define COLUNA (50)

int buscanome(int linhas, int coluna, char nomes[linhas][coluna], char nome[]) {
    for (int i = 0; i < linhas; i++) {
        if (strcasecmp(nomes[i], nome) == 0) {
            return i + 1;
        }
    }
    return -1;
}

int main() {
    char nomes[LINHA][COLUNA] = {"Gabriel", "Maria", "Pedro","Ana","João","Lucas","Fernanda","Carlos","Juliana","Rafael"};
    
    printf("--------Lista Nomes----------");
    for (int i = 0; i < LINHA; i++){
        printf("nome: %s \n", nomes[i]);
    }
    

    int s;
    char nome[100];

    printf("Digite o nome que você quer buscar: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n\n")] = 0;

    s = buscanome(LINHA, COLUNA, nomes, nome);

    if (s != -1) {
        printf("O nome %s foi encontrado no indice %d \n\n", nome, s);
    } else {
        printf("Nome não encontrado\n");
    }

    return 0;
}