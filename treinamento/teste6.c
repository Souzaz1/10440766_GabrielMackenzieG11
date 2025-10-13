#include <stdio.h>

void bubblesort(int v[], int n) {
    int troca;
    for (int i = 0; i < n-1; i++){
        troca = 0;
        for (int j = 0; j < n-i-1; j++){
        if(v[j] > v[j+1]){
            int temp = v[j];
            v[j] = v[j+1];
            v[j+1] = temp;
            troca = 1;
       }
     }
     if(troca == 0) {
        break;
     }
   }
}

int main() {
    int n = 5;
    int v[5] = {3, 5, 8, 1, 4};
    bubblesort(v, n);
    printf("%d %d %d %d %d", v[0], v[1], v[2], v[3], v[4]);
}