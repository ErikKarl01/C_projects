#include<stdio.h>


int main()
{
    int contador = 4;
    for (int i = 1; i <= 9 ; i+=2)
    {
        for (int j = contador; j > 0; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
        contador--;
    }
    
    contador = 1;

    for (int i = 7; i > 0; i-=2)
    {
        for (int j = 0; j < contador; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
        contador++;
    }
    

    return 0;
}