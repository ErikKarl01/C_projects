#include <stdio.h>
#include <math.h>

int main(void) { 
    int valor;
    int valoInteiro;
    int valorFracionario;
    int principal = 100000;
    int taxa = 5;
    int ano;

    printf("%4s%21s\n", "Ano", "Valor na conta");

    for (ano = 1; ano <= 10; ano++) {
        valor = principal;

        for (int i = 0; i < ano; i++)
        {
            valor = (valor*(100+taxa))/100;
        }
        

        valorFracionario = valor%100;
        valoInteiro = valor/100;

        printf("%4d%21d,%d\n", ano, valoInteiro, valorFracionario);
    }

    return 0;
}
