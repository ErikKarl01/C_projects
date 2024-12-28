/* 
Escreva um pro￾grama que leia três inteiros diferentes do teclado, depois 
apresente a soma, a média, o produto, o menor e o maior 
desses números. Use apenas a forma de seleção única da 
instrução if que você aprendeu neste capítulo. O diálogo 
na tela deverá aparecer da seguinte forma:
Digite três inteiros diferentes: 13 27 14
A soma é 54
A média é 18
O produto é 4914
O menor é 13
O maior é 27
*/

#include<stdio.h>

int main(void) {

    int numero1, numero2, numero3, soma, produto, media, maior, menor;

    printf("Digite três inteiros diferentes: \n");

    scanf("%d%d%d", &numero1, &numero2, &numero3);

    soma = numero1 + numero2 + numero3;

    produto = numero1 * numero2 * numero3;

    media = (numero1 + numero2 + numero3)/3;

    printf("A soma é %d\n", soma);

    printf("A média é %d\n", media);

    printf("O produto é %d\n", produto);

    maior = numero1;

    menor = numero1;

    if (numero2 > maior)
    {

        maior = numero2;

    }

    if (numero3 > maior)
    {

        maior = numero3;

    }

    if (numero2 < menor)
    {

        menor = numero2;

    }

    if (numero3 < menor)
    {

        menor = numero3;

    }
    
    printf("É o menor: %d\n", menor);

    printf("É o maior: %d\n", maior);

    return 0;


}