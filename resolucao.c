#include <stdio.h>

int soma_digitos(int n) {
    if (n < 10){
        return n;
    }
    return soma_digitos(n/10) + (n%10);
}

int main () {
    int n = 253;
    printf("Digite o número: ");
    scanf("%d", &n);
    printf("%d ",soma_digitos(n));
    return 0;
}