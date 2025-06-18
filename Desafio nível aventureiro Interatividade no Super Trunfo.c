#include <stdio.h>
#include <string.h>

int main() {
    // Dados da carta 1
    char pais1[] = "Brasil";
    int populacao1 = 214000000;
    float area1 = 8515767.0;
    float pib1 = 1868.0; // em bilhões
    int pontos1 = 50;
    float densidade1 = populacao1 / area1;

    // Dados da carta 2
    char pais2[] = "Argentina";
    int populacao2 = 46000000;
    float area2 = 2780400.0;
    float pib2 = 487.0; // em bilhões
    int pontos2 = 30;
    float densidade2 = populacao2 / area2;

    int escolha;
    printf("=== Super Trunfo: Comparacao de Cartas ===\n\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &escolha);

    printf("\nComparando %s e %s\n", pais1, pais2);

    switch (escolha) {
        case 1:
            printf("Atributo: Populacao\n");
            printf("%s: %d\n", pais1, populacao1);
            printf("%s: %d\n", pais2, populacao2);
            if (populacao1 > populacao2)
                printf("Resultado: %s venceu!\n", pais1);
            else if (populacao2 > populacao1)
                printf("Resultado: %s venceu!\n", pais2);
            else
                printf("Resultado: Empate!\n");
            break;
        case 2:
            printf("Atributo: Area\n");
            printf("%s: %.2f km²\n", pais1, area1);
            printf("%s: %.2f km²\n", pais2, area2);
            if (area1 > area2)
                printf("Resultado: %s venceu!\n", pais1);
            else if (area2 > area1)
                printf("Resultado: %s venceu!\n", pais2);
            else
                printf("Resultado: Empate!\n");
            break;
        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões\n", pais1, pib1);
            printf("%s: %.2f bilhões\n", pais2, pib2);
            if (pib1 > pib2)
                printf("Resultado: %s venceu!\n", pais1);
            else if (pib2 > pib1)
                printf("Resultado: %s venceu!\n", pais2);
            else
                printf("Resultado: Empate!\n");
            break;
        case 4:
            printf("Atributo: Pontos Turisticos\n");
            printf("%s: %d\n", pais1, pontos1);
            printf("%s: %d\n", pais2, pontos2);
            if (pontos1 > pontos2)
                printf("Resultado: %s venceu!\n", pais1);
            else if (pontos2 > pontos1)
                printf("Resultado: %s venceu!\n", pais2);
            else
                printf("Resultado: Empate!\n");
            break;
        case 5:
            printf("Atributo: Densidade Demografica\n");
            printf("%s: %.4f hab/km²\n", pais1, densidade1);
            printf("%s: %.4f hab/km²\n", pais2, densidade2);
            if (densidade1 < densidade2)
                printf("Resultado: %s venceu!\n", pais1);
            else if (densidade2 < densidade1)
                printf("Resultado: %s venceu!\n", pais2);
            else
                printf("Resultado: Empate!\n");
            break;
        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}