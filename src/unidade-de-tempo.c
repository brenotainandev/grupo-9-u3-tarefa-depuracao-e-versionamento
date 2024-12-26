//Unidade de tempo (segundos, minutos, horas)
#include <stdio.h>
#include "unidade-de-tempo.h"

void converterTempo() {
    int opcao;
    float valor, resultado;

    printf("\n--- Conversor de Tempo ---\n");
    printf("1. Segundos para Minutos\n");
    printf("2. Minutos para Segundos\n");
    printf("3. Minutos para Horas\n");
    printf("4. Horas para Minutos\n");
    printf("5. Horas para Segundos\n");
    printf("6. Segundos para Horas\n");
    printf("-----------------------------------\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Digite o valor em Segundos: ");
            scanf("%f", &valor);
            resultado = valor / 60;
            printf("%.2f segundos correspondem a %.2f minutos.\n", valor, resultado);
            break;
        case 2:
            printf("Digite o valor em Minutos: ");
            scanf("%f", &valor);
            resultado = valor * 60;
            printf("%.2f minutos correspondem a %.2f segundos.\n", valor, resultado);
            break;
        case 3:
            printf("Digite o valor em Minutos: ");
            scanf("%f", &valor);
            resultado = valor / 60;
            printf("%.2f minutos correspondem a %.2f horas.\n", valor, resultado);
            break;
        case 4:
            printf("Digite o valor em Horas: ");
            scanf("%f", &valor);
            resultado = valor * 60;
            printf("%.2f horas correspondem a %.2f minutos.\n", valor, resultado);
            break;
        case 5:
            printf("Digite o valor em Horas: ");
            scanf("%f", &valor);
            resultado = valor * 3600;
            printf("%.2f horas correspondem a %.2f segundos.\n", valor, resultado);
            break;
        case 6:
            printf("Digite o valor em Segundos: ");
            scanf("%f", &valor);
            resultado = valor / 3600;
            printf("%.2f segundos correspondem a %.2f horas.\n", valor, resultado);
            break;
        default:
            printf("Opcao invalida.\n");
    }
}
