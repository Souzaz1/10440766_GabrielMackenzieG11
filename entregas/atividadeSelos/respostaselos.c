#include <stdio.h>

int main () {
    int taxa;
    int selos5, selos3;
    int resto;

    printf("Digite a taxa de selos: ");
    scanf("%d", &taxa);

    if (taxa % 5 == 0) {
        selos5 = taxa / 5;
        selos3 = 0;
    } else if (taxa % 5 == 1) {
        selos5 = taxa/5-1;
        selos3 = 2;
    } else if (taxa % 5 == 2) {
        selos5 = taxa/5-2;
        selos3 = 4;
    } else if (taxa % 5 == 3) {
        selos5 = taxa/5;
        selos3 = 1;
    } else if (taxa % 5 == 4) {
        selos5 = taxa/5 - 1;
        selos3 = 1;
    }
    printf("Para uma taxa de %d\n", taxa);
    printf("Vai ser usado %d selos de 5 centavos, e %d selos de 3 centavos\n", selos5, selos3);
        
    return 0;
}