#include <stdio.h>
#include "unidade-de-area.h"


void converterArea() {
    int opcao;
    float valor;

    printf("\n--- Conversor de Área ---\n");
    printf("1. Metros quadrados para Centímetros quadrados\n");
    printf("2. Centímetros quadrados para Metros quadrados\n");
    printf("3. Metros quadrados para Hectares\n");
    printf("4. Hectares para Metros quadrados\n");
    printf("5. Metros quadrados para Pés quadrados\n");
    printf("6. Pés quadrados para Metros quadrados\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Digite o valor em metros quadrados: ");
            scanf("%f", &valor);
            printf("%.6f metros quadrados equivalem a %.6f centimetros quadrados\n", valor, valor * 10000);
            break;
        case 2:
            printf("Digite o valor em centímetros quadrados: ");
            scanf("%f", &valor);
            printf("%.6f centímetros quadrados equivalem a %.6f metros quadrados\n", valor, valor / 10000);
            break;
        case 3:
            printf("Digite o valor em metros quadrados: ");
            scanf("%f", &valor);
            printf("%.6f metros quadrados equivalem a %.6f hectares\n", valor, valor / 10000);
            break;
        case 4:
            printf("Digite o valor em hectares: ");
            scanf("%f", &valor);
            printf("%.6f hectares equivalem a %.6f metros quadrados\n", valor, valor * 10000);
            break;
        case 5:
            printf("Digite o valor em metros quadrados: ");
            scanf("%f", &valor);
            printf("%.6f metros quadrados equivalem a %.6f pés quadrados\n", valor, valor * 10.7639);
            break;
        case 6:
            printf("Digite o valor em pés quadrados: ");
            scanf("%f", &valor);
            printf("%.6f pés quadrados equivalem a %.6f metros quadrados\n", valor, valor / 10.7639);
            break;
        default:
            printf("Opção inválida.\n");
    }

}