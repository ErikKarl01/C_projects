#include<stdio.h>
#include<stdbool.h>


//Detecção de palíndromo
int main(void)
{
    int dois_primeiros_numeros, dois_ultimos_numeros, numero;


    while(true){

        scanf("%d", &numero);

        dois_primeiros_numeros = numero/1000; //Recebe os dois primeiros valores
        dois_ultimos_numeros = numero%100;  //Recebe os dois últimos valores

        if (dois_primeiros_numeros == dois_ultimos_numeros)
        {
            printf("É palíndromo!\n");
        }
        else
        {
            printf("Não é pallíndromo!\n");
        }

        if (numero == -1)
        {
            break;
        }
        
        
    }

    return 0;
}