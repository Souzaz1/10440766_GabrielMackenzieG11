#include <stdio.h>
#define tamanho_vetor 7

int modificarVetor(int vetor[], int n) {
    int qtde = 0;
    for (int i = 0; i < n; i++) {
        if (vetor[i] >= 10 && vetor[i] <= 20){
            vetor[i] = 0;
            qtde++;
        }
    }
    return qtde;

}

int main() {
    int numeros[tamanho_vetor];

    for (int i = 0; i < tamanho_vetor; i++){
        printf("VALOR[%d]: ", i);
        scanf("%d", &numeros[i]);
    } 

    int totaldemodificacoes = modificarVetor(numeros, tamanho_vetor);

    for (int i = 0; i < tamanho_vetor; i ++) {
        printf("%d", numeros[i]);
    }

    printf("\n");
    printf("Total de moficicações: %d\n", totaldemodificacoes);
    return 0;
}