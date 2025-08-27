#include <stdio.h>

int minutos (int hora, int min) {
    int total = 0;
    total += hora * 60;
    total += min;

    return total;
}

diferenca (int total1, int total2) {
    int diferenca;
    diferenca = total1 - total2;
    return diferenca;
}

int main () {
    int total1, total2, hora, min;
    int dif;

    printf("Digite a primeira hora: ");
    scanf("%d:%d", &hora, &min);
    total1 = minutos(hora, min);
    printf("Digite a segunda hora: ");
    scanf("%d:%d", &hora, &min);
    total2 = minutos(hora, min);

    dif = diferenca(total1, total2);

    printf("As horas deram %d minutos e a segunda deu %d uma diferença de %d em minutos\n", total1, total2, dif);
    
}