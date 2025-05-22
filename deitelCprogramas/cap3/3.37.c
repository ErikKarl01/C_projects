#include<stdio.h>

int main(void)
{

    int i = 1;

    while ( i <= 300000000)
    {
        if (i ==  100000000 || i == 200000000 || i == 300000000)
        {
            printf("%d", i);
        }

        i++;
        
    }
    

    return 0;
}