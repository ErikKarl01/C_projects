#include<stdio.h>
#include<math.h>

int arredInteiro(float numero ){return (int)floor(numero + .5);}
float arredDecimos(float numero ){return floor(numero*10 + .5)/10;} 
float arredCentesimos(float numero ){return floor(numero*100 + .5)/100;} 
float arredMilesimos(float numero ){return floor(numero*1000 + .5)/1000;} 

int main(){
    float numero;

    scanf("%f", &numero);
    
    printf("%d\n", numero);
    printf("%d\n", arredInteiro(numero));
    printf("%.1f\n", arredDecimos(numero));
    printf("%.2f\n", arredCentesimos(numero));
    printf("%.3f\n", arredMilesimos(numero));

    return 0;
}