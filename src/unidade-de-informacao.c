// Unidades de informação
// Conversão Bits, bytes, kilobytes (KB), megabytes (MB), gigabytes (GB), terabytes (TB)
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "unidade-de-informacao.h"

void converterInformacao()
{
    bool converter = false;

    while(!converter)
    {
        int origem, destino; 
        float valor, resultado; 
        char *unidades[] = {"Bits", "Bytes", "Kilobytes (KB)", "Megabytes (MB)", "Gigabytes (GB)", "Terabytes (TB)"}; 
        float conversoes[] = {1, 8, 8192, 8388608, 8589934592, 8796093022208};  // Fatores de conversão para bits 
        
        
        printf("\n--- Conversor de Informação ---\n"); 
        do 
        { 
            printf("Escolha a unidade de origem:\n");
            
            for (int i = 0; i < 6; i++) 
            { 
                printf("%d. %s\n", i + 1, unidades[i]);
            } 
            
            printf("\n: \n");
            scanf("%d", &origem); 
            
            if (origem < 1 || origem > 6) 
            { 
                printf("Opção inválida. Tente novamente.\n");
            } 
        } 
        while (origem < 1 || origem > 6); 

        do 
        { 
            ("Escolha a unidade de destino:\n");
            for (int i = 0; i < 6; i++)
            {
                printf("%d. %s\n", i + 1, unidades[i]);
            } 
            
            printf("\nOpção: ");
            scanf("%d", &destino);
            
            if (destino < 1 || destino > 6)
            { 
                printf("Opção inválida. Tente novamente.\n");
            }
        } 
        while (destino < 1 || destino > 6); 
            
        printf("Digite o valor em %s: ", unidades[origem - 1]); 
            
        scanf("%f", &valor); 
            
        // Converter valor para bits 
        float valorEmBits = valor * conversoes[origem - 1]; 
            
        // Converter de bits para unidade de destino 
        resultado = valorEmBits / conversoes[destino - 1]; 

        if (resultado >= 1) 
        { 
            printf("\n%.2f %s equivalem a %.2f %s.\n", valor, unidades[origem - 1], resultado, unidades[destino - 1]); 
        }
        else
        { 
            printf("\n%.2f %s equivalem a %.6f %s.\n", valor, unidades[origem - 1], resultado, unidades[destino - 1]);
        }
 
        int resposta;
        do
        { 
            printf("\nDeseja fazer outra conversão?\n");
            printf("1. Sim\n");
            printf("2. Não\n");
            printf("Opção: \n");
            scanf("%d", &resposta);
            if (resposta < 1 || resposta > 2)
            {
                printf("\nOpção inválida. Tente novamente.\n");
            }
        } 
        while (resposta < 1 || resposta > 2);
        
        if (resposta == 2) 
        { 
            converter = true;
        }
        else
        {
            system("cls");
        }
    }
            
}
