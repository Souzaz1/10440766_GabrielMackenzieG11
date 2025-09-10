#include <stdio.h>
#include <math.h>

int main() {
    float area, raio;
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    area = 3,14 * pow(raio, 2);
    printf("A aréa do circulo é = %.1f", area);
    return 0;

}