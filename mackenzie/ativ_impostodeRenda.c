#include <stdio.h>
#include <math.h>

int main() {
    float salario_bruto, desconto, salario_liqui, valor_tirado;
    int opcao = 1;

    while (opcao = 1) {
        printf("--------------Calculo de Imposto de Renda--------------\n");
        printf("Digite seu sálario Bruto: ");
        scanf("%f", &salario_bruto);

        if (salario_bruto <= 2000.00) {
            printf("Você está isento de imposto\n");
            salario_liqui = salario_bruto;
            printf("Seu sálario liquido é de %.2f\n", salario_liqui);
        } else if (salario_bruto > 2000.00 && salario_bruto <= 4000.00) {
            valor_tirado = (7.5/100)*salario_bruto;
            salario_liqui = salario_bruto - valor_tirado;
            printf("Seu sálario liquido é de %.2f\n", salario_liqui);
            printf("O desconto foi de 7.5 porcento""e foi tirado %.2f\n", valor_tirado);

        } else if (salario_bruto > 4000.00 && salario_bruto <= 6000.00) {
            valor_tirado = (15.00/100)*salario_bruto;
            salario_liqui = salario_bruto - valor_tirado;
            printf("Seu sálario liquido é de %.2f\n", salario_liqui);
            printf("O desconto foi de 15 porcento e foi tirado %.2f\n", valor_tirado);
        } else if (salario_bruto > 6000.00 && salario_bruto <= 10000.00) {
            valor_tirado = (22.5/100)*salario_bruto;
            salario_liqui = salario_bruto - valor_tirado;
            printf("Seu sálario liquido é de %.2f\n", salario_liqui);
            printf("O desconto foi de 22.5 porcento e foi tirado %.2f\n", valor_tirado);
        }else {
            valor_tirado = (27.5/100)*salario_bruto;
            salario_liqui = salario_bruto - valor_tirado;
            printf("Seu sálario liquido é de %.2f\n", salario_liqui);
            printf("O desconto foi de 27.5 porcento e foi tirado %.2f\n", valor_tirado);

        }
        printf("Deseja Continuar (1-SIM) (0-NÃO): ");
        scanf("%d", &opcao);
        if (opcao != 1) {
            break;
        }

    }
    return 0;
    
}