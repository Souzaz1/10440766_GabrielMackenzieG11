#include <stdio.h>

int main(){
    float B1_N1;
    float B1_N2;
    float B2_N1;
    float B2_N2;

    printf("Insita a nota 1 do primeiro bimestre: ");
    scanf("%f", &B1_N1);
    printf("Insita a nota 2 do primeiro bimestre: ");
    scanf("%f", &B1_N2);
    printf("Insita a nota 1 do segundo bimestre: ");
    scanf("%f", &B2_N1);
    printf("Insita a nota 2 do segundo bimestre: ");
    scanf("%f", &B2_N2);

    float media = (B1_N1 + B1_N2 + B2_N1 + B2_N2)/4;
    printf("A média do ano foi de: %.1f\n", media);
    return 0;
}