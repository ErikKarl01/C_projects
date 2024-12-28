/*Escreva um programa que peça ao usuá-
rio que digite dois números, obtenha esses números e 
imprima a soma, o produto, a diferença, o quociente e o 
módulo (resto da divisão).*/

#include<stdio.h>

int main(void){

    int numero1, numero2, soma, produto, diferenca, quociente, modulo;

    printf("Digite dois números: \n");

    scanf("%d%d", &numero1, &numero2);

    soma = numero1 + numero2;

    produto = numero1*numero2;

    diferenca = numero1 - numero2;

    quociente = numero1/numero2;

    modulo = numero1%numero2;

    printf("A soma entre eles é: %d\n", soma);

    printf("A produto entre eles é: %d\n", produto);

    printf("A diferença entre eles é: %d\n", diferenca);

    printf("A quociente entre eles é: %d\n", quociente);

    printf("O módulo entre eles é: %d\n", modulo);

    return 0;

};