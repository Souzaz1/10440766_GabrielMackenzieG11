#include <stdio.h>

void binario(int n) {
    if (n < 2) {
        printf("%d", n);
        return;
    }
    binario(n/2);
    printf("%d", n % 2);
}

int main () {
    int n = 34;
    binario(n);
    return 0;
}