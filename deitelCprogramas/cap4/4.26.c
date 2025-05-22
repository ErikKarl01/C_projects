#include<stdio.h>

//São necessários muitos termos para estabilizar a qunta casa de pi, pois com 1000000 ainda não está estável

int main()
{
    double pi = 4;
    int constante = -1;

    for (int i = 3; i < 1000000; i+=2)
    {
        pi += constante*4.0/i;
        printf("Pi aproximado com %d termos: %f\n", i, pi);
        constante *= -1;
    }
    

    return 0;
}