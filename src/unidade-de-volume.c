// Unidades de velocidade
// Conversão km/h, m/s, mph
#include <stdio.h>
#include "unidade-de-volume.h"

void converterVolume()
{
    int SelectInputUnits;
    int SelectOutputUnits;
    float InputValue;
    float OutputValue;

    printf("ESCOLHA QUAL UNIDADE DE ENTRADA \n");
    printf("[1] Litros \n[2] MiliLitros\n[3] MetrosCubicos\n");
    scanf("%d", &SelectInputUnits);

    switch (SelectInputUnits)
    {
    case 1:
        printf("DIGITE O VALOR DA ENTRADA EM Litros : ");
        scanf("%F", &InputValue);
        printf("ESCOLHA QUAL UNIDADE DE SAÍDA\n");
        printf("[1] MiliLitros \n[2] MetrosCubicos\n");
        scanf("%d", &SelectOutputUnits);

        if (SelectOutputUnits == 1)
        {
            OutputValue = InputValue * 1000;
            printf("O valor da saída em MiliLitros é %f", OutputValue);
        }
        else if (SelectOutputUnits == 2)
        {
            OutputValue = InputValue / 1000;
            printf("O valor da saída em MetrosCubicos é %f", OutputValue);
        }
        else
        {
            printf("Entrada inválda");
        }
        break;

    case 2:
        printf("DIGITE O VALOR DA ENTRADA EM MiliLitros: ");
        scanf("%F", &InputValue);
        printf("ESCOLHA QUAL UNIDADE DE SAÍDA\n");
        printf("[1] Litros \n[2] MetrosCubicos\n");
        scanf("%d", &SelectOutputUnits);

        if (SelectOutputUnits == 1)
        {
            OutputValue = InputValue / 1000;
            printf("O valor da saída em Litros = %f", OutputValue);
        }
        else if (SelectOutputUnits == 2)
        {
            OutputValue = InputValue / 1000000;
            printf("O valor da saída em MetrosCubicos = %f", OutputValue);
        }
        else
        {
            printf("ENTRADA INVALIDA!");
        }
        break;

    case 3:
        printf("DIGITE O VALOR DA ENTRADA EM MetrosCubicos: ");
        scanf("%F", &InputValue);
        printf("ESCOLHA QUAL UNIDADE DE SAIDA\n");
        printf("[1] Litros \n[2] MiliLitros\n");
        scanf("%d", &SelectOutputUnits);

        if (SelectOutputUnits == 1)
        {
            OutputValue = InputValue * 1000;
            printf("O valor da saída em Litros = %f", OutputValue);
        }
        else if (SelectOutputUnits == 2)
        {
            OutputValue = InputValue * 1000000;
            printf("O valor da saída em MiliLitros = %f", OutputValue);
        }
        else
        {
            printf("ENTRADA INVALIDA!");
        }
        break;

    default:
        printf("ENTRADA INVALIDA!");
    }
}