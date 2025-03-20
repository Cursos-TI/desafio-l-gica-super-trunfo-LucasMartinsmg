#include <stdio.h>
int main (){

int num1, num2, resultado1, resultado2, resultadofinal;
printf("insira numero1: \n");
scanf("%d", &num1);
printf("insira numero2: \n");
scanf("%d", &num2);
printf("Numero1: %d - numero2: %d\n", num1, num2);
resultado1 = num1 > num2 ? 1 : -1 ;
printf("RESULTADO1: %d\n", resultado1);

printf("insira numero1: \n");
scanf("%d", &num1);
printf("insira numero2: \n");
scanf("%d", &num2);
printf("Numero1: %d - numero2: %d\n", num1, num2);
resultado2 = num1 > num2 ? 1 : -1 ;
printf("RESULTADO2: %d\n", resultado2);
resultadofinal = resultado1 + resultado2;

printf("resultado final: %d", resultadofinal);








    return 0;
}