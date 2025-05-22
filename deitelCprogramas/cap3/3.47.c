#include<stdio.h>


int main()
{
    unsigned long long populacaoMundial;
    float taxaDeCrecimentoAnual;
    int anos = 1;

    printf("População mundial(escreva todos os dígitos): \n");
    scanf("%llu", &populacaoMundial);

    printf("Taixa de crecimento(escreva valor em decimal): \n");
    scanf("%f", &taxaDeCrecimentoAnual);

    while (anos<=5)
    {
        populacaoMundial += populacaoMundial*taxaDeCrecimentoAnual;
        printf("População daqui a %d anos: %llu", anos, populacaoMundial);
        anos++;
    }
    

    return 0;
}