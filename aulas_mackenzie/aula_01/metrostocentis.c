#include <stdio.h>

int main() {
    float Metros;

    printf("Digite os metros que quer converter: ");
    scanf("%f", &Metros);

    float centi = Metros * 100;
    printf("%f metros equivale a %.1f centímetros\n\n", Metros, centi);
    return 0;
}