#include <stdio.h>
#include <math.h>

int main(void) { 
    double valor;
    double principal = 1000.0;
    int ano;

    printf("%4s%21s\n", "Ano", "Valor na conta"); 

    for (int j = 5; j <= 10; j++)
    {
        for (ano = 1; ano <= 10; ano++) {
            valor = principal * pow(1.0 + j/100.0, ano);
            printf("%4d%21.2f\n", ano, valor);
        }
    }
     

    return 0;
} 
