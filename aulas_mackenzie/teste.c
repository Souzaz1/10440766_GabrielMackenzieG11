#include <stdio.h>
#include <time.h>

void insertionsort (int v[], int n) {
    for (int i = 0; i < n; i++) {
        int key = v[i];
        int j = i - 1;

        while (j >= 0 && v[j] > key) {
            v[j+1] = v[j];
            j = j-1;
        }
        v[j+1] = key;
    }
    printf("Os 5 mais velhos são: %d %d %d %d %d\n", v[10], v[11], v[12], v[13], v[14]);

}

void povoar(int v[], int n) {
    for(int i = 0; i < n; i++) {
        v[i] = rand() % 80;
    }
}

void imprimir (int v[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main () {
    int sensores = 15;
    int temperaturas[15];
    srand(time(NULL));

    povoar(temperaturas, sensores);

    insertionsort(temperaturas, sensores);

    printf("Vetor ordenado: \n");
    imprimir(temperaturas, sensores);

    

    return 0;
}