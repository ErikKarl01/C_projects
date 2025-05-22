#include<stdio.h>


int main(void)
{

    int contador  = 0;

    while (contador < 100)
    {

        printf("*");

        if ( ( contador + 1) % 10 == 0)
            printf("\n");

        contador++;
        
    }
    

    return 0;
}