#include <stdio.h>
#include "unidade-de-massa.h"

void exibirMenu();

int main() {
    int opcao;

    while (1) {
        exibirMenu();
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 2:
                converterMassa();
                break;
            case 7:
                converterArea();
                break;
            case 0:
                printf("Saindo do programa.\n");
                return 0;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    }

    return 0;
}

void exibirMenu() {
    printf("\n--- Conversor de Unidades ---\n");
    printf("2. Converter Massa\n");
    printf("7. Converter Área\n");
    printf("0. Sair\n");
}
