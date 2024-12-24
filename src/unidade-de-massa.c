#include <stdio.h>
#include "unidade-de-massa.h"


void converterMassa() {
    int opcao;
    double valor;

    printf("\n--- Conversor de Massa ---\n");
    printf("1. Quilogramas para Gramas\n");
    printf("2. Quilogramas para Toneladas\n");
    printf("3. Gramas para Quilogramas\n");
    printf("4. Toneladas para Quilogramas\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Digite o valor em quilogramas: ");
            scanf("%lf", &valor);
            printf("%.2lf kg equivalem a %.2lf g\n", valor, valor * 1000);
            break;
        case 2:
            printf("Digite o valor em quilogramas: ");
            scanf("%lf", &valor);
            printf("%.2lf kg equivalem a %.2lf toneladas\n", valor, valor / 1000);
            break;
        case 3:
            printf("Digite o valor em gramas: ");
            scanf("%lf", &valor);
            printf("%.2lf g equivalem a %.2lf kg\n", valor, valor / 1000);
            break;
        case 4:
            printf("Digite o valor em toneladas: ");
            scanf("%lf", &valor);
            printf("%.2lf toneladas equivalem a %.2lf kg\n", valor, valor * 1000);
            break;
        default:
            printf("Opção inválida.\n");
    }
}
