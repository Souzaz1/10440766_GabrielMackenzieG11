#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void transposta(int linhas, int colunas, int A[linhas][colunas], int At[colunas][linhas]) {
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            At[j][i] = A[i][j];
        }
    }
}


void criaMatriz (int linhas, int colunas, int matriz[linhas][colunas]) {
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++){
            matriz[i][j] = rand() % 50;
        }
    }
}

void print(int linhas, int colunas, int matriz[linhas][colunas]) {
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n"); 
    }
    printf("\n");
}

int main () {
    srand(time(NULL));
    int linhas = 3;
    int colunas = 3;
    int matriz[linhas][colunas];
    int maior;
    int matrizt[colunas][linhas];

    criaMatriz (linhas, colunas, matriz);
    printf("Matriz \n");
    print(linhas, colunas, matriz);
    transposta(linhas, colunas, matriz, matrizt);
    printf("Matriz transposta\n");
    print(linhas, colunas, matrizt);
    printf("\n");
    printf("\n");
    printf("\n");
}