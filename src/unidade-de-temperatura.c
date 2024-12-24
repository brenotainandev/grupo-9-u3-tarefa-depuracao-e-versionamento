//Unidade de temperatura (Celsius, Fahrenheit, Kelvin)
#include <stdio.h>
#include <math.h>
//#include "unidade-de-temperatura.h"


void converterTemperatura(){

    int opcao;
    float num, F, C, K, Ce;

    printf("\n--- Conversor de Temperatura ---\n");
    printf("1. Celsius para Fahrenheit\n");
    printf("2. Fahrenheit para Celsius\n");
    printf("3. Celsius para Kelvin\n");
    printf("4. Kelvin para Celsius\n");
    printf("-----------------------------------\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Digite o valor em Celsius: ");
            scanf("%f", &num);
            F = (num * 9/5) + 32;
            printf("O valor %.2lf em escala celsius corresponde a %.2lf em escala Fahrenheit.\n", num, F);
            break;
        case 2:
             printf("Digite o valor em Fahrenheit: ");
            scanf("%f", &num);
            C = (num - 32) * 5/9;
            printf("O valor %.2lf em escala fahrenheit corresponde a %.2lf em escala celsius.\n", num, C);
            break;
        case 3:
             printf("Digite o valor em Celsius: ");
            scanf("%f", &num);
            K = num + 273.15;
            printf("O valor %.2lf em escala celsius corresponde a %.2lf em escala kelvin.\n", num, K);
            break;
        case 4:
             printf("Digite o valor em Kelvin: ");
            scanf("%f", &num);
            Ce = num - 273.15;
            printf("O valor %.2lf em escala kelvin corresponde a %.2lf em escala celsius.\n", num, Ce);
            break;
        default:
            printf("Opção inválida.\n");
    }
}