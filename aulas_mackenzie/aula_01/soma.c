#include <stdio.h>

int main(){
    int numero1;
    int numero2;

    printf("Digite o número 1: ");
    scanf("%d", &numero1);

    printf("Digite o número 2: ");
    scanf("%d", &numero2);

    int resultado = numero1 + numero2;
    
    printf("A soma dos numeros:\n%d + %d = %d\n", numero1, numero2, resultado);
    return 0;
}