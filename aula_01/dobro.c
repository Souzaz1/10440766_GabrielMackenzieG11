#include <stdio.h>

int main() {
    int numero;
    printf("Informe seu número: ");
    scanf("%d", &numero);
    int dobro = numero * 2;
    int triplo = numero * 3;
    printf("Dobro: %d\nTriplo: %d", dobro, triplo);
    return 0;

}