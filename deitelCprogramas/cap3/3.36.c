#include<stdio.h>


int main(void)
{

    int acumulador = 0, potencia = 1, bit, valor_binario, encerrar = 0;

    scanf("%d", &valor_binario);

    while (encerrar != -1)
    {

        if (valor_binario < 10)
        {
            bit = valor_binario;
            encerrar = -1;
        }
        else
        {
            bit = valor_binario%10;
        }
        
        acumulador += bit*potencia;
        potencia *= 2;
        valor_binario /= 10;

    }

    printf("Valor decimal: %d\n", acumulador);

    return 0;
}


/* Versão mais simples do código, a divisão interia de um valor menos que 10 por 10 dá zero
#include <stdio.h>

int main(void) {
    int acumulador = 0, potencia = 1, bit, valor_binario;

    scanf("%d", &valor_binario);

    while (valor_binario > 0) {
        bit = valor_binario % 10;
        acumulador += bit * potencia;
        potencia *= 2;
        valor_binario /= 10;
    }

    printf("Decimal: %d\n", acumulador);
    return 0;
}

*/