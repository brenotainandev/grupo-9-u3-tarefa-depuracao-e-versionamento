// Unidades de potencia
// Conversão Watts Kilowatts CavaloVapor
#include <stdio.h>
#include "unidade-de-potencia.h"

void converterPotencia()
{
    int SelectInputUnits;
    int SelectOutputUnits;
    float InputValue;
    float OutputValue;

    printf("ESCOLHA QUAL UNIDADE DE ENTRADA \n");
    printf("[1] W \n[2] kW \n[3] cv\n");
    scanf("%d", &SelectInputUnits);

    switch (SelectInputUnits)
    {
    case 1:
        printf("DIGITE O VALOR DA ENTRADA EM W: ");
        scanf("%f", &InputValue);
        printf("ESCOLHA QUAL UNIDADE DE SAÍDA\n");
        printf("[1] kW \n[2] cv\n");
        scanf("%d", &SelectOutputUnits);

        if (SelectOutputUnits == 1)
        {
            OutputValue = InputValue / 1000;
            printf("O valor da saída em [kW] é %f", OutputValue);
        }
        else if (SelectOutputUnits == 2)
        {
            OutputValue = InputValue / 735.5;
            printf("O valor da saída em [cv] é %f", OutputValue);
        }
        else
        {
            printf("Entrada inválda");
        }
        break;

    case 2:
        printf("DIGITE O VALOR DA ENTRADA EM kW: ");
        scanf("%f", &InputValue);
        printf("ESCOLHA QUAL UNIDADE DE SAÍDA\n");
        printf("[1] W \n[2] cv\n");
        scanf("%d", &SelectOutputUnits);

        if (SelectOutputUnits == 1)
        {
            OutputValue = InputValue * 1000;
            printf("O valor da saída em [W] = %f", OutputValue);
        }
        else if (SelectOutputUnits == 2)
        {
            OutputValue = InputValue / 0.7355;
            printf("O valor da saída em [cv] = %f", OutputValue);
        }
        else
        {
            printf("ENTRADA INVALIDA!");
        }
        break;

    case 3:
        printf("DIGITE O VALOR DA ENTRADA EM cv: ");
        scanf("%f", &InputValue);
        printf("ESCOLHA QUAL UNIDADE DE SAIDA\n");
        printf("[1] W \n[2] kW\n");
        scanf("%d", &SelectOutputUnits);

        if (SelectOutputUnits == 1)
        {
            OutputValue = InputValue * 735.5;
            printf("O valor da saída em [W] = %f", OutputValue);
        }
        else if (SelectOutputUnits == 2)
        {
            OutputValue = InputValue * 0.7355;
            printf("O valor da saída em [kW] = %f", OutputValue);
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