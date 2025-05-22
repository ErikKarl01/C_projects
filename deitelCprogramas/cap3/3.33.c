#include<stdio.h>

int main(void)
{
    int contador_externo = 0, contador_interno = 0, lado;

    printf("Escolha o tamanho do lado do quadrado: \n");
    scanf("%d", &lado);

    while(contador_externo < lado)
    {

        while (contador_interno < lado)
        {
            
            printf("*");

            contador_interno++;

        }
        
        printf("\n");

        contador_externo++;
        contador_interno = 0;

    }

    return 0;
}