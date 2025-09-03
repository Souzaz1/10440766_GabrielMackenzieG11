#include <stdio.h>

float calcularMediaTurma (int vetor[], int n) {
    float media;
    float soma;
    for (int i = 0; i < n; i++) {
        soma += vetor[i];
        media = soma/n;
    }
    
    return media;
}

void imprimirResultados(int vetor[], int n) {
    for (int i = 0; i < n; i++) {
        if (vetor[i] < 7 ) {
            printf("aluno #%d Está de recuperação!\n", i+1);
        }else {
            printf("aluno #%d Está aprovado!\n", i+1);
        }
    }
}

int main() {
    int quantidade_alunos;
    float media;

    printf("Digite o número de estudantes da sala: ");
    scanf("%d", &quantidade_alunos);

    int vetor[quantidade_alunos];

    for (int i = 0; i < quantidade_alunos; i++){
        printf("Digite a nota do #%d: ", i+1);
        scanf("%d", &vetor[i]);
        
    }

    media = calcularMediaTurma(vetor, quantidade_alunos);
    printf("\nA média da turma foi de: %.2f \n\n", media);

    imprimirResultados(vetor, quantidade_alunos);
    return 0;
}