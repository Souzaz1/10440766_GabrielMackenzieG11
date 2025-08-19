#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num, chute;
    int contador = 0;
    chute = 0;

    srand(time(NULL));
    num = rand() % 100 + 1;

    while (chute != num) {
        printf("Tente acertar o número sorteado (entre 1 e 100): ");
        scanf("%d", &chute);

        if (chute < 1 || chute > 100) {
            printf("Valor inválido! Digite um número entre 1 e 100.\n");
            continue;  // Pula o restante do loop e pede outro número
        }

        contador++;

        if (chute < num) {
            printf("Você chutou muito baixo!\n");
        } else if (chute > num) {
            printf("Você chutou muito alto!\n");
        } else {
            printf("Parabéns!!! Você acertou em %d tentativas!\n", contador);
        }
    }

    return 0;
}
