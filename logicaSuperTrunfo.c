#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estadoA , estadoB;
    char codico_cartaA[3] , codico_cartaB[3];
    char cidadeA[10], cidadeB[10];
    int populacaoA, populacaoB;
    float areaA, areaB;
    float pibA, pibB;
    int pontos_turisticosA, pontos_turisticosB;

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    printf("Insira estado carta 1: [A]: ");
    scanf("%c", &estadoA);
    printf("Insira codico da carta: [A01]");
    scanf("%s", &codico_cartaA);
    printf("Nome da Cidade: ");
    scanf("%s", &cidadeA);
    printf("População: ");
    scanf("%d", &populacaoA);
    printf("Area km: ");
    scanf("%f", &areaA);
    printf("PIB: ");
    scanf("%f", &pibA);
    printf("Numero de pontos turísticos: ");
    scanf("%d", &pontos_turisticosA);
    printf("\n\n");

    // IMPRESSAO DE DADOS DE CADA CARTA

    printf("CARTA 1\n");
    printf("Estado: %c\n", estadoA);
    printf("Codico: %s", codico_cartaA);
    printf("\nCidade: %s\n", cidadeA);
    printf("População: %d\n", populacaoA);
    printf("Area km: %f\n", areaA);
    printf("PIB: %f\n", pibA);
    printf("Pontos Turisticos: %d\n", pontos_turisticosA);




    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
