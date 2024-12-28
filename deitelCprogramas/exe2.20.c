/*Escreva um programa que leia o raio de um círculo e 
informe o diâmetro, a circunferência e a área do círculo. 
Utilize o valor constante 3,14159 para p. Realize cada 
um desses cálculos dentro das instruções printf e use
o especificador de conversão %f. [Nota: neste capítulo, 
discutimos apenas constantes e variáveis inteiras. No Ca￾pítulo 3, discutiremos os números em ponto flutuante, 
ou seja, valores que podem ter pontos decimais.]*/

#include<stdio.h>

int main (void) {

    int raioCirc;

    printf("Digite o raio do círculo: \n");

    scanf("%d", &raioCirc);

    printf("A área do círculo é de: %f\n", 3.14159 * raioCirc * raioCirc);

    printf("O diâmetro do círculo é de: %d\n", 2 * raioCirc);

    printf("A circunferência do círculo é de: %f\n", 3.14159 * 2 * raioCirc);

    return 0;

}