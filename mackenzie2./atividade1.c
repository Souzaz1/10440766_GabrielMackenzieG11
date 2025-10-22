#include <stdio.h>

int rMDC(int a, int b) {
    if (b > a) 
      return rMDC(b, a);
    if (b == 0) 
      return a;
    return rMDC(b, a % b);
}

int main () {
    int a = 0;
    int b = 40;
    printf("%d", rMDC(a, b));
    return 0;
}