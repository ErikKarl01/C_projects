#include<stdio.h>


int main(void)
{
    int pre_incremento, pos_incremento;

    printf("Digite um valor para teste: ");
    scanf("%d", &pre_incremento);

    pos_incremento = pre_incremento;

    printf("Valor pre-incrementado: %d, valor pos-incrementado(ainda não incrementado): %d\n",
    ++pre_incremento, pos_incremento++);

    printf("Valor pos-incrementado após operação: %d", pos_incremento);

}