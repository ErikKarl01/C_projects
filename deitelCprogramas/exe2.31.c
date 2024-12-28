/*
Usando apenas as técni￾cas que você aprendeu neste capítulo, escreva um programa 
que calcule os quadrados e os cubos dos números 0 a 10, e 
use tabulações para imprimir a seguinte tabela de valores:
número quadrado cubo
0 0 0
1 1 1
2 4 8
3 9 27
4 16 64
5 25 125
6 36 216
7 49 343
8 64 512
9 81 729
10 100 1000
*/

#include<stdio.h>

int main (void) {

    printf("número   quadrado   cubo\n");

    int x;
    x = 0;

    printf("%d        %d            %d\n", x, x*x, x*x*x);
    x++; 
    printf("%d        %d            %d\n", x, x*x, x*x*x);
    x++;
    printf("%d        %d            %d\n", x, x*x, x*x*x);
    x++;
    printf("%d        %d            %d\n", x, x*x, x*x*x);
    x++;
    printf("%d        %d            %d\n", x, x*x, x*x*x);
    x++;
    printf("%d        %d            %d\n", x, x*x, x*x*x);
    x++;
    printf("%d        %d            %d\n", x, x*x, x*x*x);
    x++;
    printf("%d        %d            %d\n", x, x*x, x*x*x);
    x++;
    printf("%d        %d            %d\n", x, x*x, x*x*x);
    x++;
    printf("%d        %d            %d\n", x, x*x, x*x*x);
    x++;
    printf("%d        %d            %d\n", x, x*x, x*x*x);


    return 0;

}