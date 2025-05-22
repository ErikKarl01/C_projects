#include<stdio.h>


int main()
{
    for (int i = 1; i <= 100; i++)
    {
        int numero = i;
        if (numero == 100)
        {
            printf("C");
            break;
        }
        if (numero>=90)
        {
            printf("XC");
            numero-=90;
        }
        if (numero>=50)
        {
            printf("L");
            numero-=50;
        }
        if (numero>=40)
        {
            printf("XD");
            numero-=40;
        }
        if (numero>=30)
        {
            printf("XXX");
            numero-=30;
        }
        if (numero>=20)
        {
            printf("XX");
            numero-=20;
        }
        if (numero>=10)
        {
            printf("X");
            numero-=10;
        }
        if (numero==9)
        {
            printf("IX");
            numero-=9;
        }
        if (numero>=5)
        {
            printf("V");
            numero-=5;
        }
        if (numero==4)
        {
            printf("IV");
            numero-=4;
        }
        while (numero>0)
        {
            printf("I");
            numero--;
        }
        printf("\n");
    }

    return 0;
}