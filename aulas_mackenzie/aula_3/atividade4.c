#include <stdio.h>

void troca (int *a, int *b) {
    int temp = a;
    *a = *b;
    *b = temp;
}

int main () {
    int a;
    int b;


    printf("Digite primeiro números (a): ");
    scanf("%d", &a);
    printf("Digite segundo números (b): ");
    scanf("%d", &b);
    troca(&a, &b);
    printf("O valores invertidos a = %d b = %d  \n", a, b);
    
    return 0;
}