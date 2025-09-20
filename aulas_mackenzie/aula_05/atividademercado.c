#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void Popular(int linhas, int colunas, int matriz[linhas][colunas]) {
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j< colunas; j++) {
            matriz[i][j] = rand() % 350;
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

void soma (int linhas, int colunas, int A[linhas][colunas], int B[linhas][colunas], int c[linhas][colunas]) {
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            c[i][j] = A[i][j] + B[i][j]; 
        }
    }
}


int main () {
    srand(time(NULL));
    int linhas;
    int colunas;

    printf("Digite o número de linhas: ");
    scanf("%d", &linhas);
    
    printf("Digite o número de colunas: ");
    scanf("%d", &colunas);
    int MatrizA[linhas][colunas];
    int MatrizB[linhas][colunas];
    int MatrizC[linhas][colunas];
    printf("\n");

    Popular(linhas, colunas, MatrizA);
    printf("\n");
    printf("Matriz da Filial A: ");
    printf("\n");
    print(linhas, colunas, MatrizA);

    printf("\n");
    Popular(linhas, colunas, MatrizB);
    printf("\n");
    printf("Matriz da Filial B: ");
    printf("\n");
    print(linhas, colunas, MatrizB);
    printf("\n");

    printf("Soma das Filiais: ");
    printf("\n");
    soma(linhas, colunas, MatrizA, MatrizB, MatrizC);
    print(linhas, colunas, MatrizC);

}