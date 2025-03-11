#include <stdio.h>

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char estadoA, estadoB;
    char codico_cartaA[3], codico_cartaB[3];
    char cidadeA[10], cidadeB[10];
    int populacaoA, populacaoB;
    float areaA, areaB;
    float pibA, pibB;
    int pontos_turisticosA, pontos_turisticosB;

    printf("Insira estado carta 1: [A]: ");
    scanf(" %c", &estadoA); // Adicione um espaço antes de %c
    printf("Insira codico da carta: [A01]: ");
    scanf(" %s", codico_cartaA);
    printf("Nome da Cidade: ");
    scanf(" %s", cidadeA);
    printf("População: ");
    scanf(" %d", &populacaoA);
    printf("Area km: ");
    scanf(" %f", &areaA);
    printf("PIB: ");
    scanf(" %f", &pibA);
    printf("Numero de pontos turísticos: ");
    scanf(" %d", &pontos_turisticosA);
    printf("\n\n");

    // IMPRESSAO DE DADOS DE CADA CARTA
    printf("CARTA 1\n");
    printf("Estado: %c\n", estadoA);
    printf("Codico: %s\n", codico_cartaA);
    printf("Cidade: %s\n", cidadeA);
    printf("População: %d\n", populacaoA);
    printf("Area km: %f\n", areaA);
    printf("PIB: %f\n", pibA);
    printf("Pontos Turisticos: %d\n", pontos_turisticosA);

    return 0;
}