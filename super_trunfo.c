#include <stdio.h>

/*
 * Super Trunfo (nível Novato)
 * Cadastro de duas cartas 
 */

int main() {
    /* Carta 1 */
    char estado1;                 /* Letra A-H */
    char codigo1[4];              /* Ex: A01 (3 chars + terminador) */
    char nomeCidade1[100];        /* Nome da cidade */
    int populacao1;               /* Habitantes */
    float area1;                  /* km² */
    float pib1;                   /* PIB em bilhões */
    int pontosTuristicos1;        /* Número de pontos turísticos */

    /* Carta 2 */
    char estado2;
    char codigo2[4];
    char nomeCidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    /* Entrada de dados da Carta 1 */
    printf("Cadastro da Carta 1\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código (ex: A01): ");
    scanf(" %3s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %99s", nomeCidade1); /* Simplificação: lê até primeiro espaço */
    printf("População: ");
    scanf(" %d", &populacao1);
    printf("Área (km2): ");
    scanf(" %f", &area1);
    printf("PIB (em bilhões): ");
    scanf(" %f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos1);

    printf("\n");

    /* Entrada de dados da Carta 2 */
    printf("Cadastro da Carta 2\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código (ex: B02): ");
    scanf(" %3s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %99s", nomeCidade2);
    printf("População: ");
    scanf(" %d", &populacao2);
    printf("Área (km2): ");
    scanf(" %f", &area2);
    printf("PIB (em bilhões): ");
    scanf(" %f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos2);

    /* Saída formatada */
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
