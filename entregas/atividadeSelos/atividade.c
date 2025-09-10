#include <stdio.h>

int main() {
    int valor, x, y, resto;
    int sair = 1;

    while (sair = 1){
        printf("Digite a taxa em centavos (8>): ");
        scanf("%d", &valor);
        printf("\n");
        if (valor < 8){
            printf("Valor mínimo e de 8 centavos!!\n");
            continue;
        }else {
            for(x = valor/5; x >= 0; x--){
                resto = valor - (5*x);
                if (resto % 3 == 0){
                    y = resto / 3;
                    printf("Para o valor de %d você recebe %d selo(s) de 5 centavos e %d selo(s) de 3 centavos!\n\n", valor, x, y);
                    return 0;
                }
            }
        }
        
        printf("Deseja continuar? (1-SIM) (2-NÃO): ");
        scanf("%d", &sair);
        if(sair != 1){
            break;
        }
    }

    return 0;
    
}


