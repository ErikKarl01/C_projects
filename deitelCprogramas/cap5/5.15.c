#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

double retorna_hipotenusa(double cateto_um, double cateto_dois)
{return sqrt(pow(cateto_um, 2) + pow(cateto_dois, 2));}

int main(){
    double cateto_um, cateto_dois, hipotenusa;

    do
    {
        scanf("%lf%lf", &cateto_um, &cateto_dois);

        if (cateto_dois == cateto_um)
        {
            printf("Não é triangulo retângulo!");
            continue;

        }else{
            hipotenusa = retorna_hipotenusa(cateto_um, cateto_dois);
            printf("%.2lf", hipotenusa);
            break;
        }
        
    } while (1);
    

    return 0;
}