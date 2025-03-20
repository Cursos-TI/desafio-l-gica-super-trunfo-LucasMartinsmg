#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char pais1[20], pais2[20];
    int populacaoA, populacaoB;
    float areaA, areaB;
    float pibA, pibB;
    int pontos_turisticosA, pontos_turisticosB;
    float densidade_Demografica1 , densidade_Demografica2;
    float percapita1 , percapita2 ;
    int resultado1 = 0, resultado2 = 0, ganhador;
    char duelo1, duelo2; 

// PREENCHIMENTO DE CADASTRO CARTA 1.

    printf("CADASTRO CARTA 1:\n");
    printf("Nome da País: ");
    scanf(" %s", &pais1);
    printf("População: ");
    scanf(" %d", &populacaoA);
    printf("Area km: ");
    scanf(" %f", &areaA);
    printf("PIB: ");
    scanf(" %f", &pibA);
    printf("Numero de pontos turísticos: ");
    scanf(" %d", &pontos_turisticosA);
    printf("\n\n");

    // PREENCHIMENTO DE CADASTRO CARTA 2.

    printf("CADASTRO CARTA 2:\n");
    printf("Nome do País: ");
    scanf(" %s", &pais2);
    printf("População: ");
    scanf(" %d", &populacaoB);
    printf("Area km: ");
    scanf(" %f", &areaB);
    printf("PIB: ");
    scanf(" %f", &pibB);
    printf("Numero de pontos turísticos: ");
    scanf(" %d", &pontos_turisticosB);
    printf("\n\n");

    //CALUCULOS DE ATRIBUTOS DENSIDADE POPULACIONAL E PIB PER CAPITA
    densidade_Demografica1 =  (float) populacaoA / areaA ;
    percapita1 = ( float) pibA / populacaoA ;
    densidade_Demografica2 =  (float) populacaoB / areaB ;
    percapita2 = ( float) pibB / populacaoB ;


    // IMPRESSAO DE DADOS DE CADA CARTA 1

    printf("CARTA 1\n");
    printf("Pais: %s\n", pais1);
    printf("População: %d\n", populacaoA);
    printf("Area km: %.2f\n", areaA);
    printf("Densidade demografica: %.1f\n", densidade_Demografica1);
    printf("PIB: %.3f\n", pibA);
    printf("Pib per capita: %.3f\n", percapita1);
    printf("Pontos Turisticos: %d\n", pontos_turisticosA);
    printf("\n");

    // IMPRESSAO DE DADOS DE CADA CARTA 2

    printf("CARTA 2\n");
    printf("Pais: %s\n", pais2);
    printf("População: %d\n", populacaoB);
    printf("Area km: %.2f\n", areaB);
    printf("Densidade demografica: %.1f\n", densidade_Demografica2);
    printf("PIB: %.3f\n", pibB);
    printf("Pib per capita: %.3f\n", percapita2);
    printf("Pontos Turisticos: %d\n", pontos_turisticosB);
    printf("\n");
    
// DUELO1 COM MENU INTERATIVO COM SWITCH

printf("Agora defina qual atributo deseja realizar o combate entre os Países Duelo1: \n A- População \n B- Area \n C- Densidade demografica\n D- Pib \n E- Pib per Capita \n F- Pontos turisticos \n");
scanf(" %c", &duelo1);
switch (duelo1)
{
case 'A':
case 'a':
    printf("Voce selecionou Duelo1 em População:\n");
    printf("População Carta1 %s: %d \n", pais1, populacaoA);
    printf("População Carta2 %s: %d \n", pais2, populacaoB);
    
    resultado1 = populacaoA > populacaoB ? 1 : -1;
    if (resultado1 >= 1)
    {
        printf("Duelo 1 ganhou a carta %s!!!\n\n", pais1);
    } else {
        printf("Duelo 1 ganhou a carta %s!!!\n\n", pais2);
    }
    


    break;

case 'B':
case 'b':
    printf("Voce selecionou Duelo1 em Area:\n");
    printf("Area Carta1 %s: %.2f \n", pais1, areaA);
    printf("Area Carta2 %s: %.2f \n", pais2, areaB);
     
    resultado1 = areaA > areaB ? 1 : -1;
    if (resultado1 >= 1)
    {
        printf("Duelo 1 ganhou a carta %s!!!\n\n", pais1);
    } else {
        printf("Duelo 1 ganhou a carta %s!!!\n\n", pais2);
    }
   
    break;

case 'C':
case 'c':
    printf("Voce selecionou Duelo1 em Densidade Demografica: \n");
    printf("Densidade Demografica Carta1 %s: %.1f \n", pais1, densidade_Demografica1);
    printf("Densidade Demografica Carta2 %s: %.1f \n", pais2, densidade_Demografica2);

    resultado1 = densidade_Demografica1 > densidade_Demografica2 ? 1 : -1;
    if (resultado1 >= 1)
    {
        printf("Duelo 1 ganhou a carta %s!!!\n\n", pais1);
    } else {
        printf("Duelo 1 ganhou a carta %s!!!\n\n", pais2);
    }
   
    break;

case 'D':
case 'd':
    printf("Voce selecionou Duelo1 em PIB: ");
    resultado1 = pibA > pibB ? 1 : -1;
   
break;
    break;

case 'E':
case 'e':
    printf("Voce selecionou Duelo1 em Pib Per Capita: ");
    resultado1 = percapita1 > percapita2 ? 1 : -1;
  
    break;

case 'F':
case 'f':
    printf("Voce selecionou Duelo1 em Pontos Turisticos: ");
    resultado1 = pibA > pibB ? 1 : -1;
   
    break;


default:
    printf("Opção invalida!!!!\n");
    break;
}
// SELEÇÃO DE ATRIBUTO DUELO2
printf("Defina qual atributo deseja realizar o combate entre os Países Duelo2: \n A- População \n B- Area \n C- Densidade demografica\n D- Pib \n E- Pib per Capita \n F- Pontos turisticos \n");
scanf(" %c", &duelo2);

if (duelo1 == duelo2)
{
    printf("Você escolheu o mesmo atributo, escolha outro que não tenha escolhido no Duelo1: \n");
} else 
{
    switch (duelo2)
    {
    case 'A':
    case 'a':
    printf("Voce selecionou Duelo1 em População: ");
    resultado2 = populacaoA > populacaoB ? 1 : -1;
    
        break;

    case 'B':
    case 'b':
    printf("Voce selecionou Duelo1 em Area: ");
    resultado2 = areaA > areaB ? 1 : -1;
   
        break;
        
    case 'C':
    case 'c':
    printf("Voce selecionou Duelo1 em Densidade Demografica: ");
    resultado2 = densidade_Demografica1 > densidade_Demografica2 ? 1 : -1;
   
        break;    
    
    case 'D':
    case 'd':
    printf("Voce selecionou Duelo1 em PIB: ");
    resultado2 = pibA > pibB ? 1 : -1;
   
        break;
        
    case 'E':
    case 'e':
    printf("Voce selecionou Duelo1 em Pib Per Capita: ");
    resultado2 = percapita1 > percapita2 ? 1 : -1;
    
        break;
        
    case 'F':
    case 'f':
    printf("Voce selecionou Duelo1 em Pontos Turisticos: ");
    resultado2 = pibA > pibB ? 1 : -1;
    
        break;
        
        
    default:
        break;
    }
}













    return 0;
}