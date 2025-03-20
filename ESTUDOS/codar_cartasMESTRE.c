#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main (){

    int numeroJogador, numeroComputador, Resultado;
    char tipoComparacao;

    //GERAR NUMERO ALEATORIO
    srand(time(0));
    numeroComputador = rand() % 100 + 1; // logica de divisao por 100 entre resultado de 0 a 99 somando +1 garante que possa entregar de 0 a 100
    
    // INICIO DO JOGO
    printf("Bem-Vindo ao jogo Maior, Menor ou igual!\n");
    printf("Voce deve escolher um numero e o tipo de comparaçao.\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    printf("ESCOLHA UMA OPÇÃO M,N OU I: ");
    scanf("%c", &tipoComparacao);



    printf("Digite seu numero (entre 1 e 100)\n: ");
    scanf("%d", &numeroJogador);

    // EXIBIR NUMERO DO COMPUTADOR
    printf("Numero comprutador: %d \n", numeroComputador);

    switch (tipoComparacao)
    {
    case 'M':
    case 'm':
    
        Resultado = numeroJogador > numeroComputador ? 1 : 0 ;
        if (Resultado == 1)
        {
            printf("VOCE VENCEU!!!!!!\n");
        } else 
        {
            printf("VOCE PERDEU!!!!!!!\n");
        }
        
        break;
    case 'N':
    case 'n':
        Resultado = numeroJogador < numeroComputador ? 1 : 0 ;
        break;
    case 'I':
    case 'i':
    Resultado = numeroJogador == numeroComputador ? 1 : 0 ;
        break;
           
    default:
        break;
    }

    //RESULTADO JOGO
    if (Resultado == 1)
    {
        printf("VOCE VENCEU!!!!!!\n");
    } else 
    {
        printf("VOCE PERDEU!!!!!!!\n");
    }
    

    
















return 0;

}