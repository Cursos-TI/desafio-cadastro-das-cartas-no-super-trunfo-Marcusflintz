#include <stdio.h>

// Desafio Super Trunfo - Países
// Cadastro de cartas de cidades com cálculo de densidade e PIB per capita

int main() {
    // Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[30];
    int populacao1;
    float area1;
    float PIB1;
    int pturisticos1;
    float dpopulacional1;
    float PIBpcapta1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[30];
    int populacao2;
    float area2;
    float PIB2;
    int pturisticos2;
    float dpopulacional2;
    float PIBpcapta2;

    // Entrada de dados - Carta 1
    printf("Digite o Estado (letra): ");
    scanf(" %c", &estado1);

    printf("Digite o Código: ");
    scanf("%s", codigo1);

    printf("Digite a Cidade: ");
    scanf("%s", cidade1);

    printf("Digite a População: ");
    scanf("%d", &populacao1);

    printf("Digite a Área (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &PIB1);

    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &pturisticos1);

    // Cálculo da densidade e PIB per capita - Carta 1
    dpopulacional1 = populacao1 / area1;
    PIBpcapta1 = (PIB1*1000000000)  / populacao1;


    printf("\n");

    // Entrada de dados - Carta 2
    printf("Digite o Estado (letra): ");
    scanf(" %c", &estado2);

    printf("Digite o Código: ");
    scanf("%s", codigo2);

    printf("Digite a Cidade: ");
    scanf("%s", cidade2);

    printf("Digite a População: ");
    scanf("%d", &populacao2);

    printf("Digite a Área (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &PIB2);

    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &pturisticos2);
    // Cálculo da densidade e PIB per capita - Carta 2
    dpopulacional2 = (populacao2 / area2);
    PIBpcapta2 = (PIB2*1000000000)  / populacao2;

    printf("\n");

    // Exibição dos Dados das Cartas:

    printf("===== CARTA 1 =====\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", PIB1);
    printf("Pontos Turísticos: %d\n", pturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", dpopulacional1);
    printf("PIB per Capita: R$ %.2f\n\n", PIBpcapta1);

    printf("===== CARTA 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", PIB2);
    printf("Pontos Turísticos: %d\n", pturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", dpopulacional2);
    printf("PIB per Capita: R$ %.2f\n", PIBpcapta2);

    return 0;
}