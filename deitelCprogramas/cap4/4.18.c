#include<stdio.h>


int main()
{
    int numero = 0;
    int i = 0;

    while(i<5)
    {
        scanf("%d", &numero);

        if (1<=numero && numero<=30)
        {
            for (int j = 0; j < numero; j++)
            {
                printf("*");
            }
            printf("\n");
            i++;
        }
        else
        {
            continue;
        }
    }
    

    return 0;
}