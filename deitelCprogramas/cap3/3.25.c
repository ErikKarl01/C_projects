#include<stdio.h>


int main (void)
{
    int contador = 1, unidades = 1, dezenas = 10, centenas = 100, milhar = 1000;

    printf("N\t10*N\t100*N\t1000*N\n");

    while (contador <= 10)
    {
        printf("%d\t%d\t%d\t%d\n", unidades*contador, dezenas*contador, centenas*contador, milhar*contador);
        contador++;
    }

    return 0;
}