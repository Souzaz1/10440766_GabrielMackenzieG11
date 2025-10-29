#include <stdio.h>

int rValidador (int verificacao) {
    if (verificacao == 0){
      return 0;
    }
    return (verificacao % 10) + rValidador(verificacao / 10);
    

}

int main () {
    int verificacao;
    
    printf("Digite o número inteiro: ");
    scanf("%d", &verificacao);
    printf("%d", rValidador(verificacao));
}