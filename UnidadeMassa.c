#include <stdio.h>

int main()
{
    float metros;
    printf("Digite o valor em metros: ");
    scanf("%f", &metros);
    printf("Quer converter para:\n1 - Quilogramas\n2 - Gramas\n3 - Miligramas\n4 - Centimetros\n");
    printf("Digite a opcao desejada: ");
    int opcao;
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
        printf("O valor em quilogramas eh: %g\n", metros / 1000);
        break;
    case 2:
        printf("O valor em gramas eh: %g\n", metros * 1000);
        break;
    case 3:
        printf("O valor em miligramas eh: %g\n", metros * 1000000);
        break;
    case 4:
        printf("O valor em centimetros eh: %g\n", metros * 100);
        break;
    default:
        printf("Opcao invalida\n");
        break;
    }
    return 0;
}