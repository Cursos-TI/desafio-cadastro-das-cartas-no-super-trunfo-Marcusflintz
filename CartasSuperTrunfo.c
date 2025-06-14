#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[30];
    int populacao1;
    float area1;
    float PIB1;
    int pturisticos1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[30];
    int populacao2;
    float area2;
    float PIB2;
    int pturisticos2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
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

    printf("\n");

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", PIB1);
    printf("Pontos Turísticos: %d\n\n", pturisticos1);

    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", PIB2);
    printf("Pontos Turísticos: %d\n", pturisticos2);


    
    return 0;

}
