#include <stdio.h>

int fibonacci (int n) {
    if (n == 0)
      return 0;
    else if (n == 1)
      return 1;

    return fibonacci(n-1) + fibonacci (n - 2);
}

int main () {
    int resposta = 1;
    int n = 4;
    do{
        printf("Digite o elemento n: ");
        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
            printf("%d ", fibonacci(i));
        }
        printf("\n");
        printf("Deseja continuar?: (1 - SIM) (0 - NÃO): ");
        scanf("%d", &resposta);
    }while (resposta == 1);
    printf("%d", fibonacci(n));
}