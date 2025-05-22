#include<stdio.h>

// A dificuldade a que se refere a questão seria que o fatorial cresce rapidamente podento gerar valores maiores 
//do que um int pode suportar

int main()
{
    int fatorial = 1;

    for (int i = 1; i <= 5; i++)
    {
        fatorial*=i;   
        printf("Fatorial de %d: %d\n", i, fatorial);
    }
    

    return 0;
}