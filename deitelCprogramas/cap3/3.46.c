#include<stdio.h>
#include<math.h>

int fatorial(int n){
    int produto = 1;

    while (n>0)
    {
        produto *= n;
        n--;
    }
    
    return produto;
}

float valorDeE(int n){
    float euler = 1;

    if (n>=1)
    {
        while (n>=1)
        {
            float fatN = fatorial(n);
            euler += 1/fatN;
            n--;
        }

    }else{
        return 1;
    }

    return euler;
}

float valorDeEexponencial(int interacoes, float n) {
    float euler = 1.0; 
    int i = 1;

    while (i <= interacoes) { 
        float fatN = (float)fatorial(i); 
        euler += pow(n, i) / fatN;
        i++;
    }

    return euler;
}

int main(){
    float valor;
    int escolha;
    int interacoes;

    printf("0 para fatorial, 1 para valor de e, 2 para valor de e exponencial");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 0:
        printf("Escolha o valor do fatorial");   
        scanf("%f", &valor); 

        valor = fatorial(valor);
        break;
    
    case 1:
        printf("Escolha o número de interações");
        scanf("%d", &interacoes);

        valor = valorDeE(interacoes);
        break;

    case 2: 
        printf("Escolha o valor do expoente");   
        scanf("%f", &valor); 

        printf("Escolha o número de interações");
        scanf("%d", &interacoes);

        valor = valorDeEexponencial(interacoes, valor);
        break;

    default:
        break;
        return 1;
    }

    printf("%.6f\n", valor);

    return 0;
}