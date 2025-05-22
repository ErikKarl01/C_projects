/*
Escreva um programa que leia um in￾teiro, determine e imprima se ele é par ou ímpar. [Dica:
use o operador módulo. Um número par é um múlti￾plo de dois. Qualquer múltiplo de dois gera resto zero 
quando dividido por 2.]
*/

#include<stdio.h>

int main (void) {

    int numeroInteiro;

    printf("Digite um número inteiro: \n");

    scanf("%d", &numeroInteiro);

    if (numeroInteiro % 2 == 0)
    {
        
        printf("%d é par!\n", numeroInteiro);

    }

    if (numeroInteiro % 2 != 0)
    {

        printf("%d é impar!\n", numeroInteiro);

    }
    

    return 0;

}