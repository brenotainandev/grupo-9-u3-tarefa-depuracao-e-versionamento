#include <stdio.h>
#include "unidade-de-massa.h"
#include "unidade-de-velocidade.h"
#include "unidade-de-volume.h"
#include "unidade-de-area.h"
#include "unidade-de-temperatura.h"

void exibirMenu();
void limparBufferEntrada();

int main()
{
    int opcao;

    while (1)
    {
        exibirMenu();
        printf("Escolha uma opção: ");
        if (scanf("%d", &opcao) != 1)
        {
            printf("Entrada inválida. Tente novamente.\n");
            limparBufferEntrada();
            continue;
        }

        switch (opcao)
        {
        case 2:
            converterMassa();
            break; 
        case 3:
            converterVolume();
            break;
        case 4:
            converterTemperatura();
            break;
        case 5:
            converterVelocidade();
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

void exibirMenu()
{
    printf("\n--- Conversor de Unidades ---\n");
    printf("2. Converter Massa\n");
    printf("3. Converter Volume\n");
    printf("4. Converter Temperatura\n");
    printf("5. Converter Velocidade\n");
    printf("7. Converter Área\n");
    printf("0. Sair\n");
}

void limparBufferEntrada()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
    }
}