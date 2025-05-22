#include<stdio.h>


int main(void)
{

    int sentinela = 0, contado_horizontal = 0;


    while (sentinela < 8)
    {
        if (sentinela%2 == 0)
        {
            
            while (contado_horizontal < 8)
            {
                printf("* ");
                contado_horizontal++;
            }
            

        }
        else
        { 
            
            printf(" ");
            while (contado_horizontal < 8)
            {
                printf("* ");
                contado_horizontal++;
            }
                

        }

        contado_horizontal = 0;

        printf("\n");
        sentinela++;
        
    }
    


    return 0;
}