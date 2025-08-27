#include <stdio.h>

int potencia(int base, int expoente) {
    int resultado = 1;

    for (int i = 1; i <= expoente; i++) {
        resultado = base * resultado;
    }

    return resultado;
}

int main () {
    int b;
    int e;
    int resultado;

    printf("Digite a base: ");
    scanf("%d", &b);

    printf("Digite o expoente: ");
    scanf("%d", &e);

    resultado = potencia(b, e);
    printf("Resultado = %d\n", resultado);
}