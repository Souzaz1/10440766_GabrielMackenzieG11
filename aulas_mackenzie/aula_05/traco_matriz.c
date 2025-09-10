#include <stdio.h>
#include <time.h>

int traco_matriz (int linha, int coluna, int m[linha][coluna]){
    int soma = 0;
    for (int i = 0; i < linha; i++) {
        for(int j = 0; j < coluna; j++){
            if(m[i] == m[j]) {
                soma+=m[i][j];
            }
        }
    }
    return soma;
}

void popula_matriz(int linha, int coluna, int m[linha][coluna]){
    int max_val = 100;
    srand(time(NULL));
    for (int i = 0; i < linha; i++) {
        for(int j = 0; j < coluna; j++) {
            m[i][j] = rand() % max_val;
        }
    }
}

void exibir(int linha, int coluna, int m[linha][coluna]) {
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            printf("%d ", m[i][j]);
        }
        printf("\n"); 
    }
}

int main() {
    int linha;
    int coluna;
    int traco;
    printf("Digite o número de linhas: ");
    scanf("%d", &linha);

    printf("Digite o número de colunas: ");
    scanf("%d", &coluna);
    printf("\n");

    if (coluna != linha) {
        printf("A matriz tem que ser quadrada, \nou seja o número de colunas tem que ser igual a de linhas!!");
    } else {
        int m[linha][coluna];
        popula_matriz(linha, coluna, m);
        exibir(linha, coluna, m);
        traco = traco_matriz (linha, coluna, m);
        printf("\n");
        printf("O traço da matriz é igual %d\n", traco);
        
    }
    return 0;
}