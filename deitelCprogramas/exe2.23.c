/*
Escreva um programa 
que leia cinco inteiros e depois determine e imprima o 
maior e o menor inteiro no grupo. Use apenas as técnicas 
de programação que você aprendeu neste capítulo.
*/

#include<stdio.h>

int main (void) {

    int num1, num2, num3, num4, num5, maior, menor;

    printf("Digite 5 números inteiros: \n");

    scanf("%d%d%d%d%d", &num1, &num2, &num3, &num4, &num5);

    maior = num1;

    menor = num1;

    if (num2 > maior)
    {
        maior = num2;
    }

    if (num3 > maior)
    {
        maior = num3;
    }

    if (num4 > maior)
    {
        maior = num4;
    }

    if (num5 > maior)
    {
        maior = num5;
    }

    if (num2 < menor)
    {
        menor = num2;
    }

    if (num3 < menor)
    {
        menor = num3;
    }

    if (num4 < menor)
    {
        menor = num4;
    }

    if (num5 < menor)
    {
        menor = num5;
    }

    printf("O maior é %d\n", maior);

    printf("O menor é %d\n", menor);    

    return 0;

}