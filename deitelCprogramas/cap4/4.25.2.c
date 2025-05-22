#include<stdio.h>


int main()
{
    for (int i = 1; i <= 256; i++)
    {
        int posicao = 1;
        int bit;
        int numBinario = 0;

        printf("%d em octal: \n", i);
        for (int j = i; j >= 1; j/=8)
        {
            bit = j%8;
            numBinario += posicao*bit;
            posicao *= 10;
        }
        printf("%d", numBinario);
        printf("\n");
    }
    

    return 0; 
}