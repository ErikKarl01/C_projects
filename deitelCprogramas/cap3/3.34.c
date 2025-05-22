#include<stdio.h>


//imprime um quadrado oco de asteriscos

int main(void)
{
    int contador_externo = 0, contador_interno = 0, lado;

    printf("Escolha o tamanho do lado do quadrado: \n");
    scanf("%d", &lado);

    //faz a parte superior
    while (contador_interno< lado)
    {

        printf("*"); 
        
        contador_interno++;

    }

    contador_interno  = 0;    

    if(lado > 1){
        //faz o meio
        while(contador_externo < lado - 2)
        {
            printf("\n");
            printf("*");

            while (contador_interno < lado - 2)
            {
                
                printf(" ");

                contador_interno++;

            }

            printf("*");

            contador_externo++;
            contador_interno = 0;

        }

        contador_interno  = 0;

        printf("\n");

        //Faz o lado inferior
        while (contador_interno< lado)
        {
            
            printf("*"); 
            
            contador_interno++;

        }

        contador_interno  = 0;


    }
    
    return 0;
}