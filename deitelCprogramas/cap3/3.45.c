#include<stdio.h>


int main()
{
    float lado1, lado2, lado3, soma_1com2, soma_1com3, soma_2com3;

    scanf("%f", &lado1);
    scanf("%f", &lado2);
    scanf("%f", &lado3);

    soma_1com2 = lado1 + lado2;
    soma_1com3 = lado1 + lado3;
    soma_2com3 = lado2 + lado3;

    if (lado1 < soma_2com3 && lado2 < soma_1com3 && lado3 < soma_1com2){
        if (lado1*lado1 == lado2*lado2 + lado3*lado3 || lado2*lado2 == lado1*lado1 + lado3*lado3 ||
            lado3*lado3 == lado1*lado1 + lado2*lado2)
        {
            printf("É triãngulo retângulo");
        }else
        {
            printf("Não é retângulo");
        }
        
        
    }
    else
        printf("Não é triângulo\n");

    return 0;

    return 0;
}