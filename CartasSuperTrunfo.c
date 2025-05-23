#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
   // Carta 1
    char nomeCidade1[50];
    char codigo1[4];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    // Carta 2
    char nomeCidade2[50];
    char codigo2[4];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1); // Lê a linha toda (com espaços)
    printf("Código (ex: A01): ");
    scanf("%s", codigo1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Código (ex: B02): ");
    scanf("%s", codigo2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\n=== Cartas Cadastradas ===\n");

    printf("\nCarta 1 - %s (Código: %s)\n", nomeCidade1, codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2 - %s (Código: %s)\n", nomeCidade2, codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);


    return 0;
}
