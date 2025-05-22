#include<stdio.h>


int main()
{
    int limiteSuperior;

    do
    {
        scanf("%d", &limiteSuperior);

        if (1<=limiteSuperior && limiteSuperior<=19)
        {
            int contador = limiteSuperior/2;
            int decrecimoContador = (limiteSuperior%2) ? 0 : 1;
            for (int i = 1; i <= limiteSuperior ; i+=2)
            {
                for (int j = contador-decrecimoContador; j > 0; j--)
                {
                    printf(" ");
                }
                for (int k = 1; k <= i; k++)
                {
                    printf("*");
                }
                printf("\n");
                contador--;
            }

            contador = 1;
            decrecimoContador = (limiteSuperior%2 == 0) ? 1 : 2;
            int decrecimoEspaco = (limiteSuperior%2 == 0) ? 1 : 0;
            for (int i = limiteSuperior-decrecimoContador; i > 0; i-=2)
            {
                for (int j = 0; j < contador - decrecimoEspaco; j++)
                {
                    printf(" ");
                }
                for (int k = 1; k <= i; k++)
                {
                    printf("*");
                }
                printf("\n");
                contador++;
            }
        }
        else if (limiteSuperior!=-1)
        {
            printf("Escolha um inteiro de 1 a 19");
        }
        
    } while (limiteSuperior!=-1);

    return 0;
}