#include <stdio.h>

int main() {
    float N1;
    float N2;
    printf("Digite sua N1: ");
    scanf("%f", &N1);
    printf("Digite sua N2: ");
    scanf("%f", &N2);
    float media = (N1 + N2)/ 2;
    printf("Sua media: %.1f\n", media);

    if (media >= 6.0){
        printf("Aprovado\n");
    }
    else {
        printf("reprovado\n");
    }
    return 0;
}