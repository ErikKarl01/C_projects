#include<stdio.h>


int main()
{
    long long int populacaoMundial = 8090000000;
    float taixaCrescimento = 0.009;
    long long int populacaoAtual;
    long long int aumento;
    int anoQueDobrou;

    printf("%4s%20s%20s\n", "Ano", "Populacao", "Aumento");

    for (int i = 1; i <= 75; i++)
    {
        populacaoAtual = populacaoMundial;
        populacaoMundial+=taixaCrescimento*populacaoMundial;
        aumento = populacaoMundial-populacaoAtual;

        printf("%4d%20lld%20lld\n", i, populacaoMundial, aumento);

        if (populacaoMundial == 8090000000*2)
        {
            anoQueDobrou = i;
        }
        
    }
    
    printf("Ano que dobrou: %d", anoQueDobrou);

    return 0;
}