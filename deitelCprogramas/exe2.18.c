/*
Escreva um programa que 
peça ao usuário que digite dois inteiros, obtenha os nú-
meros e depois imprima o maior número seguido das 
palavras ‘é maior’. Se os números forem iguais, impri￾ma a mensagem “Esses números são iguais”. Use 
apenas a forma de seleção única da instrução if que 
você aprendeu neste capítulo.
*/

#include<stdio.h>

int main(void) {

    int numero1, numero2;

    printf("Digite dois números: \n");

    scanf("%d%d", &numero1, &numero2);

    if (numero1 > numero2)
    {

        printf("%d é maior", numero1);

        return 0;

    }

    if (numero1 < numero2)
    {

        printf("%d é maior", numero2);

        return 0;

    } 

    if (numero1 == numero2)
    {

        printf("Esses números são iguais");

        return 0;

    } 

    return 0;

}