/*
 Escreva um programa que leia dois inteiros, 
determine e imprima se o primeiro for um múltiplo do 
segundo. [Dica: use o operador módulo.]
*/

#include<stdio.h>

int main (void) {

    int num1, num2;

    printf("Digite dois números: \n");

    scanf("%d%d", &num1, &num2);

    if (num1 % num2 == 0)
    {
        printf("%d é multiplo de %d!\n", num1, num2);
    }

    if (num1 % num2 != 0)
    {
        printf("%d não é multiplo de %d!\n", num1, num2);
    }
    

    return 0;

}