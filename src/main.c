#include <stdio.h>
#include "unidade-de-massa.h"
#include "unidade-de-velocidade.h"

void exibirMenu();
void limparBufferEntrada();

int main() {
    int opcao;

    while (1) {
        exibirMenu();
        printf("Escolha uma opção: ");
        if (scanf("%d", &opcao) != 1) {
            printf("Entrada inválida. Tente novamente.\n");
            limparBufferEntrada();
            continue;
        }

        switch (opcao) {
            case 2:
                converterMassa();
                break;
<<<<<<< HEAD
            case 7:
                converterArea();
=======
            case 5:
                converterVelocidade();
>>>>>>> 93fc4ac74037308cbd4d518a165fbbaae873903d
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
<<<<<<< HEAD
    printf("7. Converter Área\n");
=======
    printf("5. Converter Velocidade\n");
>>>>>>> 93fc4ac74037308cbd4d518a165fbbaae873903d
    printf("0. Sair\n");
}

void limparBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}