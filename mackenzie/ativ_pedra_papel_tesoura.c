#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int opcao, maquina;
    srand(time(NULL));
    maquina = rand() %3 + 1;

    printf("Escolha uma das opções do jogo, (1-PEDRA), (2-PAPEL), (3-TESOURA): ");
    scanf("%d", &opcao);

    if (opcao <= 0 || opcao >3) {
        printf("Opção inválida!!\n");
        return 1;
    } else if (opcao == 1 && maquina == 3) {
        printf("Você Venceu!!.\nA maquina escolheu %d e você escolheu %d\n", maquina, opcao);
    } else if (opcao == 3 && maquina == 2) {
        printf("Você Venceu!!.\nA maquina escolheu %d e você escolheu %d\n", maquina, opcao);
    } else if (opcao == 2 && maquina == 1) {
        printf("Você Venceu!!.\nA maquina escolheu %d e você escolheu %d\n", maquina, opcao);
    } else if (opcao == maquina) {
        printf("EMPATE!!.\nA maquina escolheu %d e você escolheu %d\n", maquina, opcao);
    } else {
        printf("Você PERDEU!!.\nA maquina escolheu %d e você escolheu %d\n", maquina, opcao);
    }
    
    return 0;

}