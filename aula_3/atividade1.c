#include <stdio.h>

float converterParaCelsius (float Fahrenheit) {
    float celsius = 0.00;

    celsius = (5.0/9.0)*(Fahrenheit - 32);
    return celsius;
}

int main() {
    float F;
    float C;

    printf("Digite os Fahrenheit: ");
    scanf("%f", &F);
    C = converterParaCelsius(F);
    printf("%.2f em celsius", C);
    return 0;
}