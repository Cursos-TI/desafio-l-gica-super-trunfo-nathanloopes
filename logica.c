#include <stdio.h>
#include <stdlib.h>

int main()
{
    int populacao, Pturisticos, comparacao1, comparacao2, comparacao3, comparacao4;
    char cidade[70], estado[70];
    float pib, dencidade, vlpib;
    int vl1, vl2, vl3, vl4, vl5, vl6;

    int populacao2, Pturisticos2;
    char cidade2[70], estado2[70];
    float pib2, dencidade2, vlpib2;
    int vl7, vl8, vl9, vl10, vl11, vl12;

    int ValorTotalC1 = 0, ValorTotalC2 = 0;
    int spoder, spoder2;

    // Leitura da primeira carta
    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", cidade);

    printf("Digite o estado:\n");
    scanf(" %[^\n]", estado);

    printf("Digite a população:\n");
    scanf("%d", &populacao);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite os pontos turísticos:\n");
    scanf("%d", &Pturisticos);

    printf("Digite a densidade demográfica:\n");
    scanf("%f", &dencidade);

    printf("Digite o PIB per capita:\n");
    scanf("%f", &vlpib);

    printf("Digite o superpoder:\n");
    scanf("%d", &spoder);

    // Leitura da segunda carta
    printf("Digite o nome da segunda cidade:\n");
    scanf(" %[^\n]", cidade2);

    printf("Digite o estado:\n");
    scanf(" %[^\n]", estado2);

    printf("Digite a população:\n");
    scanf("%d", &populacao2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Digite os pontos turísticos:\n");
    scanf("%d", &Pturisticos2);

    printf("Digite a densidade demográfica:\n");
    scanf("%f", &dencidade2);

    printf("Digite o PIB per capita:\n");
    scanf("%f", &vlpib2);

    printf("Digite o superpoder:\n");
    scanf("%d", &spoder2);

    // Impressão das cartas
    printf("\nCarta 1:\n");
    printf("Cidade: %s\n", cidade);
    printf("Estado: %s\n", estado);
    printf("População: %d\n", populacao);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turísticos: %d\n", Pturisticos);
    printf("Densidade Demográfica: %.2f\n", dencidade);
    printf("PIB per Capita: %.2f\n", vlpib);
    printf("Superpoder: %d\n", spoder);

    printf("\nCarta 2:\n");
    printf("Cidade: %s\n", cidade2);
    printf("Estado: %s\n", estado2);
    printf("População: %d\n", populacao2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", Pturisticos2);
    printf("Densidade Demográfica: %.2f\n", dencidade2);
    printf("PIB per Capita: %.2f\n", vlpib2);
    printf("Superpoder: %d\n", spoder2);

    // Menus dinâmicos para a escolha dos atributos
    int opcoes[6] = {1, 2, 3, 4, 5, 6};

    // Primeira comparação
    printf("\nEscolha um atributo para comparar:\n");
    printf("1. População\n2. PIB\n3. Pontos turísticos\n4. Densidade demográfica\n5. PIB per capita\n6. Superpoder\n");
    scanf("%d", &comparacao1);

    // Marcar a opção escolhida
    opcoes[comparacao1 - 1] = 0;

    // Exibir o atributo escolhido
    switch (comparacao1)
    {
    case 1:
        printf("Carta 1: %d | Carta 2: %d\n", populacao, populacao2);
        break;
    case 2:
        printf("Carta 1: %.2f | Carta 2: %.2f\n", pib, pib2);
        break;
    case 3:
        printf("Carta 1: %d | Carta 2: %d\n", Pturisticos, Pturisticos2);
        break;
    case 4:
        printf("Carta 1: %.2f | Carta 2: %.2f\n", dencidade, dencidade2);
        break;
    case 5:
        printf("Carta 1: %.2f | Carta 2: %.2f\n", vlpib, vlpib2);
        break;
    case 6:
        printf("Carta 1: %d | Carta 2: %d\n", spoder, spoder2);
        break;
    default:
        printf("Opção inválida.\n");
        break;
    }

    // Segunda comparação
    printf("\nEscolha outro atributo para comparar (sem repetir o anterior):\n");
    for (int i = 0; i < 6; i++)
    {
        if (opcoes[i] != 0)
        {
            printf("%d. ", opcoes[i]);
            switch (opcoes[i])
            {
            case 1:
                printf("População\n");
                break;
            case 2:
                printf("PIB\n");
                break;
            case 3:
                printf("Pontos turísticos\n");
                break;
            case 4:
                printf("Densidade demográfica\n");
                break;
            case 5:
                printf("PIB per capita\n");
                break;
            case 6:
                printf("Superpoder\n");
                break;
            }
        }
    }
    scanf("%d", &comparacao2);

    // Exibir o atributo escolhido
    switch (comparacao2)
    {
    case 1:
        printf("Carta 1: %d | Carta 2: %d\n", populacao, populacao2);
        break;
    case 2:
        printf("Carta 1: %.2f | Carta 2: %.2f\n", pib, pib2);
        break;
    case 3:
        printf("Carta 1: %d | Carta 2: %d\n", Pturisticos, Pturisticos2);
        break;
    case 4:
        printf("Carta 1: %.2f | Carta 2: %.2f\n", dencidade, dencidade2);
        break;
    case 5:
        printf("Carta 1: %.2f | Carta 2: %.2f\n", vlpib, vlpib2);
        break;
    case 6:
        printf("Carta 1: %d | Carta 2: %d\n", spoder, spoder2);
        break;
    default:
        printf("Opção inválida.\n");
        break;
    }

    // Comparação final de valor total
    ValorTotalC1 = populacao + (int)pib + Pturisticos + (int)dencidade + (int)vlpib + spoder;
    ValorTotalC2 = populacao2 + (int)pib2 + Pturisticos2 + (int)dencidade2 + (int)vlpib2 + spoder2;

    printf("\nValor total da carta 1: %d\n", ValorTotalC1);
    printf("Valor total da carta 2: %d\n", ValorTotalC2);

    if (ValorTotalC1 > ValorTotalC2)
    {
        printf("\nCarta 1 venceu!\n");
    }
    else if (ValorTotalC2 > ValorTotalC1)
    {
        printf("\nCarta 2 venceu!\n");
    }
    else
    {
        printf("\nEmpate!\n");
    }

    return 0;
}
