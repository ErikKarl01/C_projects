/*
Escreva um progra￾ma que leia um número de cinco dígitos, separe o número 
em dígitos individuais e imprima os dígitos separados um 
do outro por três espaços cada um. [Dica: use combinações 
da divisão inteira e da operação módulo.] Por exemplo, se o 
usuário digitar 42139, o programa deverá exibir
4 2 1 3 9
*/

#include<stdio.h>

int main (void) {

    int numero, alg1, alg2, alg3, alg4, alg5;

    printf("Digite um número: \n");

    scanf("%d", &numero);

    alg1 = numero / 10000;
    numero = numero % 10000;  

    alg2 = numero / 1000;
    numero = numero % 1000; 

    alg3 = numero / 100;
    numero = numero % 100; 

    alg4 = numero / 10;
    alg5 = numero % 10; 

    printf("%d  %d  %d  %d  %d\n", alg1, alg2, alg3, alg4, alg5);

    return 0;

}