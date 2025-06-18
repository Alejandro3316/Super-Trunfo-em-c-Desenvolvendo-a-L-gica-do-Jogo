#include <stdio.h>

int main() {
    char pais1[] = "Brasil";
    int populacao1 = 214000000;
    float area1 = 8515767.0;
    float pib1 = 1868.0;
    int pontos1 = 50;
    float densidade1 = populacao1 / area1;

    char pais2[] = "Argentina";
    int populacao2 = 46000000;
    float area2 = 2780400.0;
    float pib2 = 487.0;
    int pontos2 = 30;
    float densidade2 = populacao2 / area2;

    int opcao1, opcao2;

    printf("=== SUPER TRUNFO: COMPARACAO DE DOIS ATRIBUTOS ===\n\n");
    printf("Escolha o primeiro atributo:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao1);

    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i != opcao1) {
            switch (i) {
                case 1: printf("%d - Populacao\n", i); break;
                case 2: printf("%d - Area\n", i); break;
                case 3: printf("%d - PIB\n", i); break;
                case 4: printf("%d - Pontos Turisticos\n", i); break;
                case 5: printf("%d - Densidade Demografica\n", i); break;
            }
        }
    }

    printf("Opcao: ");
    scanf("%d", &opcao2);

    float valor1_1 = 0, valor1_2 = 0;
    float valor2_1 = 0, valor2_2 = 0;
    char atributo1[30], atributo2[30];

    switch (opcao1) {
        case 1: valor1_1 = populacao1; valor2_1 = populacao2; sprintf(atributo1, "Populacao"); break;
        case 2: valor1_1 = area1; valor2_1 = area2; sprintf(atributo1, "Area"); break;
        case 3: valor1_1 = pib1; valor2_1 = pib2; sprintf(atributo1, "PIB"); break;
        case 4: valor1_1 = pontos1; valor2_1 = pontos2; sprintf(atributo1, "Pontos Turisticos"); break;
        case 5: valor1_1 = densidade1; valor2_1 = densidade2; sprintf(atributo1, "Densidade Demografica"); break;
        default: printf("Opcao invalida.\n"); return 1;
    }

    switch (opcao2) {
        case 1: valor1_2 = populacao1; valor2_2 = populacao2; sprintf(atributo2, "Populacao"); break;
        case 2: valor1_2 = area1; valor2_2 = area2; sprintf(atributo2, "Area"); break;
        case 3: valor1_2 = pib1; valor2_2 = pib2; sprintf(atributo2, "PIB"); break;
        case 4: valor1_2 = pontos1; valor2_2 = pontos2; sprintf(atributo2, "Pontos Turisticos"); break;
        case 5: valor1_2 = densidade1; valor2_2 = densidade2; sprintf(atributo2, "Densidade Demografica"); break;
        default: printf("Opcao invalida.\n"); return 1;
    }

    int vencedor1 = (opcao1 == 5) ? (valor1_1 < valor2_1) : (valor1_1 > valor2_1);
    int vencedor2 = (opcao2 == 5) ? (valor1_2 < valor2_2) : (valor1_2 > valor2_2);

    float soma1 = valor1_1 + valor1_2;
    float soma2 = valor2_1 + valor2_2;

    printf("\nComparando %s e %s\n", pais1, pais2);
    printf("\nAtributo 1: %s\n", atributo1);
    printf("%s: %.2f | %s: %.2f --> %s venceu\n", pais1, valor1_1, pais2, valor2_1,
           vencedor1 ? pais1 : (valor1_1 == valor2_1 ? "Empate" : pais2));

    printf("\nAtributo 2: %s\n", atributo2);
    printf("%s: %.2f | %s: %.2f --> %s venceu\n", pais1, valor1_2, pais2, valor2_2,
           vencedor2 ? pais1 : (valor1_2 == valor2_2 ? "Empate" : pais2));

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", pais1, soma1);
    printf("%s: %.2f\n", pais2, soma2);

    printf("\nResultado final: ");
    if (soma1 > soma2) {
        printf("%s venceu a rodada!\n", pais1);
    } else if (soma2 > soma1) {
        printf("%s venceu a rodada!\n", pais2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}