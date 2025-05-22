#include<stdio.h>
#include<math.h>

float calcularTaxas(float horas_cliente);


int main(){
    float horas_cliente_um;
    float horas_cliente_dois;
    float horas_cliente_tres;

    scanf("%f", &horas_cliente_um); 
    scanf("%f", &horas_cliente_dois);
    scanf("%f", &horas_cliente_tres);   
    
    float soma_horas = horas_cliente_dois+horas_cliente_tres+horas_cliente_um;
    float soma_taxas = calcularTaxas(horas_cliente_um)+calcularTaxas(horas_cliente_dois)+calcularTaxas(horas_cliente_tres);

    printf("%-9s%-9s%-9s\n", "Carro", "Horas", "Taxa");
    printf("%-9d%-9.2f%-9.2f\n", 1, horas_cliente_um, calcularTaxas(horas_cliente_um));
    printf("%-9d%-9.2f%-9.2f\n", 2, horas_cliente_dois, calcularTaxas(horas_cliente_dois));
    printf("%-9d%-9.2f%-9.2f\n", 3, horas_cliente_tres, calcularTaxas(horas_cliente_tres));
    printf("%-9s%-9.2f%-9.2f\n", "Total:", soma_horas, soma_taxas);
    
    return 0;
}

float calcularTaxas(float horas_cliente){

    if (horas_cliente <= 3)
    {
        return 2;
    }
    else{
        float valor_total = 0;
        float resto = horas_cliente - 3;
        
        valor_total = 2 + ceil(resto)*0.5;

        if (valor_total <= 10)
        {
            return valor_total;
        }
        else
        {
            return 10;
        }
    }
}