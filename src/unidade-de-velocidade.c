// Unidades de velocidade
// Conversão km/h, m/s, mph
#include <stdio.h>
#include "unidade-de-velocidade.h"

void converterVelocidade()
{
    int SelectInputUnits;
    int SelectOutputUnits;
    float InputValue;
    float OutputValue;

    printf("ESCOLHA QUAL UNIDADE DE ENTRADA \n");
    printf("[1] km/h \n[2] m/s\n[3] mph\n");
    scanf("%d", &SelectInputUnits);

    switch (SelectInputUnits)
    {
    case 1:
        printf("DIGITE O VALOR DA ENTRADA: ");
        scanf("%F", &InputValue);
        printf("ESCOLHA QUAL UNIDADE DE SAÍDA\n");
        printf("[1] m/s \n[2] mph");
        scanf("%d", &SelectOutputUnits);

        if (SelectOutputUnits == 1)
        {
            OutputValue = InputValue / 3.6;
            printf("O valor da saída em [m/s] é %f", OutputValue);
        }
        else if (SelectOutputUnits == 2)
        {
            OutputValue = InputValue * 0.621371;
            printf("O valor da saída em [mph] é %f", OutputValue);
        }
        else
        {
            printf("Entrada inválda");
        }
        break;

    case 2:
        printf("DIGITE O VALOR DA ENTRADA: ");
        scanf("%F", &InputValue);
        printf("ESCOLHA QUAL UNIDADE DE SAÍDA\n");
        printf("[1] km/h \n[2] mph\n");
        scanf("%d", &SelectOutputUnits);

        if (SelectOutputUnits == 1)
        {
            OutputValue = InputValue * 3.6;
            printf("O valor da saída em [km/h] = %f", OutputValue);
        }
        else if (SelectOutputUnits == 2)
        {
            OutputValue = InputValue * 2.23694;
            printf("O valor da saída em [mph] = %f", OutputValue);
        }
        else
        {
            printf("ENTRADA INVALIDA!");
        }
        break;

    case 3:
        printf("DIGITE O VALOR DA ENTRADA: ");
        scanf("%F", &InputValue);
        printf("ESCOLHA QUAL UNIDADE DE SAIDA\n");
        printf("[1] m/s \n[2] km/h\n");
        scanf("%d", &SelectOutputUnits);

        if (SelectOutputUnits == 1)
        {
            OutputValue = InputValue * 0.447;
            printf("O valor da saída em [m/s] = %f", OutputValue);
        }
        else if (SelectOutputUnits == 2)
        {
            OutputValue = InputValue * 1.609;
            printf("O valor da saída em [km/h] = %f", OutputValue);
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