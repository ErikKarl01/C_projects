#include<stdio.h>


int main()
{
    for (int i = 1; i <= 256; i++)
    {
        int posicao = 1;
        int bit;
        int numBinario = 0;

        printf("%d em binario: \n", i);
        for (int j = i; j >= 1; j/=2)
        {
            bit = j%2;
            numBinario += posicao*bit;
            posicao *= 10;
        }
        printf("%d", numBinario);
        printf("\n");

        posicao = 1;
        int numOctal = 0;

        printf("%d em binario: \n", i);
        for (int j = i; j >= 1; j/=8)
        {
            bit = j%8;
            numOctal += posicao*bit;
            posicao *= 10;
        }
        printf("%d", numOctal);
        printf("\n");
    }
    

    return 0; 
}