#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define Tam 100

typedef struct {
    char nome[Tam];
    float preco;
    int quantidade;
}Produto;

void selectionsort (Produto cadastro[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i+1; j < n; j++) {
            if (cadastro[j].preco < cadastro[min_idx].preco) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
                Produto temp = cadastro[min_idx];
                cadastro[min_idx] = cadastro[i];
                cadastro[i] = temp;
        }
    }
}


void exibir(Produto cadastro[], int n) {
    for (int i = 0; i < n; i++){
        printf("Nome: %s - Quantidade: %d - Preço: %.2f \n", cadastro[i].nome, cadastro[i].quantidade, cadastro[i].preco);
    }
}

int main() {
    int n = 5;
    Produto cadastro[5] = {"Oléo de Cabelo", 8.00, 1,
    "Terra", 28.00, 2, 
    "Ventilador", 180.00, 10, 
    "Balde", 15.00, 20, 
    "Luminaria", 304.00, 20};

    exibir(cadastro, n);
    printf("\n");

    selectionsort(cadastro, n);
    printf("Produtos dos mais barato até o mais caro: \n");
    exibir(cadastro, n);
    return 0;
}
