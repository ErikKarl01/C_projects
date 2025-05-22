#include<stdio.h>

int main(void)
{
    float lado1, lado2, lado3, soma_1com2, soma_1com3, soma_2com3;

    scanf("%f", &lado1);
    scanf("%f", &lado2);
    scanf("%f", &lado3);

    soma_1com2 = lado1 + lado2;
    soma_1com3 = lado1 + lado3;
    soma_2com3 = lado2 + lado3;

    if (lado1 < soma_2com3 && lado2 < soma_1com3 && lado3 < soma_1com2)
        printf("É triângulo\n");
    else
        printf("Não é triângulo\n");

    return 0;
}