#include <stdio.h>
#include <time.h>

#define N 5


int rbuscabinaria (int v[], int valor, int i, int f) {
    if (i > f)
      return -1;
    int meio = (i + f)/2;
    if(v[meio] == valor) 
      return meio;
    if (v[meio] > valor)
      rbuscabinaria(v, valor, i, meio - 1);
    else 
      rbuscabinaria(v, valor, meio+1, f);
}

int bubble (int v[], int n) {
    int troca;
    for (int i = 0; i < n-1; i++) {
        troca = 0;
        for (int j = 0; j < n-i-1; j++) {
            if (v[j] > v[j+1]) {
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
                troca = 1;
            }
        }
        if(troca == 0) {
            break;
        }
    }
}

void povoar(int v[], int n) {
    for (int i = 0; i < n; i++) {
        v[i] = rand() % 100;
    }
}

void exibir(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
}

int main () {
    srand(time(NULL));
    int v[N];
    int buscar;
    povoar(v, N);
    bubble(v, N);
    exibir(v, N);
    printf("\n");
    printf("Qual elemento você quer buscar: ");
    scanf("%d", &buscar);
    printf("Elemenos %d, achado com sucesso no indice %d\n",buscar, rbuscabinaria(v, buscar, 0, N-1));
    return 0;
}