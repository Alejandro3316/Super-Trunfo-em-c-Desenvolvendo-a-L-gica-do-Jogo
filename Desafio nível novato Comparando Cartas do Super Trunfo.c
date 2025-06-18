#include <stdio.h>
#include <string.h>

float calcularDensidade(unsigned int populacao, float area) {
    return populacao / area;
}

float calcularPibPerCapita(float pib, unsigned int populacao) {
    return pib / populacao;
}

int main() {
    char estado1[] = "SC";
    char codigo1[] = "A01";
    char cidade1[] = "Itajai";
    unsigned int populacao1 = 158000;
    float area1 = 277.56;
    float pib1 = 8.45;
    int pontos1 = 10;

    char estado2[] = "SC";
    char codigo2[] = "B02";
    char cidade2[] = "Balneario Camboriu";
    unsigned int populacao2 = 145000;
    float area2 = 45.40;
    float pib2 = 5.20;
    int pontos2 = 15;

    float densidade1 = calcularDensidade(populacao1, area1);
    float densidade2 = calcularDensidade(populacao2, area2);

    float pibPerCapita1 = calcularPibPerCapita(pib1 * 1e9, populacao1);
    float pibPerCapita2 = calcularPibPerCapita(pib2 * 1e9, populacao2);

    char atributoComparar[] = "populacao";

    printf("Comparacao de cartas (Atributo: %s):\n\n", atributoComparar);

    printf("Carta 1 - %s (%s):\n", cidade1, estado1);
    printf("Populacao: %u\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f\n\n", pibPerCapita1);

    printf("Carta 2 - %s (%s):\n", cidade2, estado2);
    printf("Populacao: %u\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f\n\n", pibPerCapita2);

    float valor1, valor2;
    int carta1Vence = 0;

    if (strcmp(atributoComparar, "populacao") == 0) {
        valor1 = populacao1;
        valor2 = populacao2;
        carta1Vence = (valor1 > valor2) ? 1 : 0;
    }
    else if (strcmp(atributoComparar, "area") == 0) {
        valor1 = area1;
        valor2 = area2;
        carta1Vence = (valor1 > valor2) ? 1 : 0;
    }
    else if (strcmp(atributoComparar, "pib") == 0) {
        valor1 = pib1;
        valor2 = pib2;
        carta1Vence = (valor1 > valor2) ? 1 : 0;
    }
    else if (strcmp(atributoComparar, "densidade") == 0) {
        valor1 = densidade1;
        valor2 = densidade2;
        carta1Vence = (valor1 < valor2) ? 1 : 0;
    }
    else if (strcmp(atributoComparar, "pibPerCapita") == 0) {
        valor1 = pibPerCapita1;
        valor2 = pibPerCapita2;
        carta1Vence = (valor1 > valor2) ? 1 : 0;
    }
    else {
        printf("Atributo invalido para comparacao.\n");
        return 1;
    }

    if (carta1Vence) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    return 0;
}