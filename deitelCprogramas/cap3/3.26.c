#include<stdio.h>


int main (void)
{
    int contador = 1, A = 3;

    printf("A\tA+2\tA+4\tA+6\n");
    while (contador <= 5)
    {
        printf("%d\t%d\t%d\t%d\n", contador*A, contador*A + 2, contador*A + 4, contador*A + 6);
        contador++;
    }
    

    return 0;
}