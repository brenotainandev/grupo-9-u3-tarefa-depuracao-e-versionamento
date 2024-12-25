#include <stdio.h>
#include "unidade-de-comprimento.h"

void converterComprimento()
{
    int origem;
    int destino;
    float valor;

    printf("\n--- Conversor de Comprimento ---\n");
    char *opcoes[] = {"Km", "Hm", "Dam", "m", "Dm", "Cm", "Mm"};

    for (int i = 0; i < 7; i++)
    {
        printf("%d - %s\n", i, opcoes[i]);
    }
    printf("Escolha a unidade de medida de origem: ");
    scanf("%d", &origem);

    for (int i = 0; i < 7; i++)
    {
        printf("%d - %s\n", i, opcoes[i]);
    }
    printf("Escolha a unidade de medida de destino: ");
    scanf("%d", &destino);

    printf("Digite o valor em %s: ", opcoes[origem]);
    scanf("%f", &valor);

    if (origem < destino)
    {
        for (int i = origem; i < destino; i++)
        {
            valor *= 10;
        }
    }
    else if (origem > destino)
    {
        for (int i = origem; i > destino; i--)
        {
            valor /= 10;
        }
    }

    printf("\n\nValor convertido: %g %s\n\n", valor, opcoes[destino]);
    printf("Digite 0 para sair...");
    int sair;
    scanf("%d", &sair);

    return;
}