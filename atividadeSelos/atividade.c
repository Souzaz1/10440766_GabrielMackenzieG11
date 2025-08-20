#include <stdio.h>

int main() {
    int valor;
    int melhor3, melhor5, minimoSelos;
    int sair = 1;
    int restante;

    do {
        printf("Digite a taxa de selos: ");
        scanf("%d", &valor);

        if (valor < 8) {
            printf("O valor mínimo é de 8 centavos.\n");
            continue;
        }

        minimoSelos = 10000;
        melhor3 = 0;
        melhor5 = 0;

        for (int selode5 = 0; selode5 <= valor / 5; selode5++) {
            restante = valor - (selode5 * 5);

            if (restante % 3 == 0) {
                int selode3 = restante / 3;
                int total = selode3 + selode5;

                if (total < minimoSelos) {
                    minimoSelos = total;
                    melhor3 = selode3;
                    melhor5 = selode5;
                }
            }
        }
        printf("%d centavos: %d selo(s) de 3 centavos e %d selo(s) de 5 centavos.\n\n", valor, melhor3, melhor5);

        printf("Deseja continuar? (1-Sim) (2-Não): ");
        scanf("%d", &sair);
        printf("\n");

    } while (sair == 1);

    return 0;
}
