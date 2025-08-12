#include <stdio.h>

int main() {
    // Dados da carta 1 - São Paulo
    char codigo1[] = "SP";
    char nome1[] = "São Paulo";
    int populacao1 = 12300000;
    float area1 = 1521.11f;
    float pib1 = 700000.0f;
    int pontosTuristicos1 = 10;

    // Dados da carta 2 - Rio de Janeiro
    char codigo2[] = "RJ";
    char nome2[] = "Rio de Janeiro";
    int populacao2 = 6000000;
    float area2 = 1200.50f;
    float pib2 = 500000.0f;
    int pontosTuristicos2 = 15;

    // Exibição dos dados da carta 1
    printf("Carta 1:\n");
    printf("Código: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f milhões\n", pib1);
    printf("Pontos turísticos: %d\n\n", pontosTuristicos1);

    // Exibição dos dados da carta 2
    printf("Carta 2:\n");
    printf("Código: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f milhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);

    return 0;
}

