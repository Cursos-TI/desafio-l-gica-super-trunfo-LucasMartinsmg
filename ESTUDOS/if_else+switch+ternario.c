#include <stdio.h>
int main (){

/*Para um bom desenvolvedor é importante saber combinar diferentes estruturas de decisão para criar programas 
com lógica mais robusta e eficiente. As estruturas if, if-else e switch são fundamentais para tomar decisões baseadas em condições variadas.
Na sequência, vamos explorar como integrar essas estruturas em um único programa para resolver problemas complexos.
Desenvolveremos um programa que gerencia as notas de estudantes e determina seu status (aprovado, em recuperação ou reprovado) com base nas notas.
O programa também terá um menu para o usuário escolher entre diferentes operações.*/

int opcao;
float nota1, nota2, media;

printf(" 1- Calcular media \n 2- Determinar Status\n 3- Sair\n Escolha uma das opções: ");
scanf("%d", &opcao);

switch (opcao)
{
case 1: // solicitar notas e criar logica para mostrar a media das notas usando IF ELSE
    printf("Calcular a Media\n");
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota nota: ");
    scanf("%f", &nota2);
    if ((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <=10)) 
    {
        media = (nota1 + nota2) / 2 ; 
        printf("A media de suas notas são: %.2f", media);
    } else {
        printf(" Nota invalida, digite nota de 0 a 10");
    }
    break;
case 2: // USANDO TERNARIO
    printf("Determinar status\n");
    printf("Entre com a media de notas: ");
    scanf("%f", &media);
    media >= 5 ? printf("Voce foi aprovado!!!\n") : printf("Voce tirou menos de 5 pontos!!!");

    break;
case 3: 
    printf("Saindo do programa...\n");
    break;
default:
    printf("Opção invalida\n");
    break;
}

















}