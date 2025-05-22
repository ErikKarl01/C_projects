#include<stdio.h>

int main(void)
{
    float raio, diametro, circunferencia, area;

    scanf("%f", &raio);

    area = 3.14159*raio*raio;
    diametro = 2*raio;
    circunferencia = 2*3.14159*raio;

    printf("Area: %f,Diametro: %f,circunferencia: %f\n", area, diametro, circunferencia);

    return 0;
}
