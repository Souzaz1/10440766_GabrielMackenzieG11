#include <stdio.h>
#include <string.h>

#define N 5

typedef struct {
    char titulo[100];
    char genero[100]; 
    int ano;
    int duracao;
}Filme;


void povoar(Filme filmes[], int n) {
    for(int i = 0; i < n; i++) {
        printf("Filme %d:\n", i + 1);

        printf("  Título: ");
        fgets(filmes[i].titulo, 100, stdin);
        filmes[i].titulo[strcspn(filmes[i].titulo, "\n")] = 0; // remove o \n

        printf("  Gênero: ");
        fgets(filmes[i].genero, 100, stdin);
        filmes[i].genero[strcspn(filmes[i].genero, "\n")] = 0;

        printf("  Ano: ");
        scanf("%d", &filmes[i].ano);
        getchar(); // limpa o \n deixado pelo scanf

        printf("  Duração (min): ");
        scanf("%d", &filmes[i].duracao);
        getchar(); // limpa o \n deixado pelo scanf

        printf("\n");
    }
} 

void imprimir(Filme filmes[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Título: %s\n", filmes[i].titulo);
        printf("Gênero: %s\n", filmes[i].genero);
        printf("Ano: %d\n", filmes[i].ano);
        printf("Duração: %d minutos\n\n", filmes[i].duracao);
    }
}

void imprimirFilmesAcimaDeDuasHoras(Filme filmes[], int n) {
    printf("\n--- Filmes com mais de 2 horas ---\n\n");
    for (int i = 0; i < n; i++) {
        if (filmes[i].duracao > 120) {
            printf("Título: %s (%d minutos)\n", filmes[i].titulo, filmes[i].duracao);
        }
    }
    printf("\n");
}

int main() {
    int n = 5;
    Filme filmes[N] = {
        {"O Hobbit", "Fantasia", 2001, 170},          // 2h50min = 170min
        {"Matrix", "Ficção Científica", 1999, 136},
        {"Gladiador", "Ação", 2000, 155},
        {"Divertida Mente", "Animação", 2015, 95},
        {"Pantera Negra", "Ação", 2018, 134}
    };

    imprimir(filmes, n);

    imprimirFilmesAcimaDeDuasHoras(filmes, n);
}
