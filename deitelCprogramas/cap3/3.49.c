#include<stdio.h>

/*P = digitoUmAntes*10 + digitoUm*/

int descodifica(int numero)
{
    int digitoUm;
    int digitoDois;
    int digitoTres;
    int digitoQuatro;
    int temporario;

    digitoUm = numero/1000;
    numero = numero%1000;

    digitoDois = numero/100;
    numero = numero%100;

    digitoTres = numero/10;
    numero = numero%10;

    digitoQuatro = numero;

    temporario = digitoUm;
    digitoUm = digitoTres;
    digitoTres = temporario;

    temporario = digitoDois;
    digitoDois = digitoQuatro;
    digitoQuatro = temporario;

    digitoUm = (digitoUm + 3)%10;
    digitoDois = (digitoDois + 3)%10;
    digitoTres = (digitoTres + 3)%10;
    digitoQuatro = (digitoQuatro + 3)%10;

    digitoUm = digitoUm*1000;
    digitoDois = digitoDois*100;
    digitoTres = digitoTres*10;

    numero = digitoDois+digitoUm+digitoTres+digitoQuatro;

    return numero;
}


int main()
{
    int numero;
    int digitoUm;
    int digitoDois;
    int digitoTres;
    int digitoQuatro;
    int temporario;

    scanf("%d", &numero);

    digitoUm = numero/1000 + 7;
    numero = numero%1000;

    digitoDois = numero/100 + 7;
    numero = numero%100;

    digitoTres = numero/10 + 7;
    numero = numero%10;

    digitoQuatro = numero + 7;

    digitoUm = digitoUm%10;
    digitoDois = digitoDois%10;
    digitoTres = digitoTres%10;
    digitoQuatro = digitoQuatro%10;

    temporario = digitoUm;
    digitoUm = digitoTres;
    digitoTres = temporario;

    temporario = digitoDois;
    digitoDois = digitoQuatro;
    digitoQuatro = temporario;

    digitoUm = digitoUm*1000;
    digitoDois = digitoDois*100;
    digitoTres = digitoTres*10;

    numero = digitoDois+digitoUm+digitoTres+digitoQuatro;

    printf("%d\n", numero);

    numero = descodifica(numero);

    printf("%d\n", numero);

    return 0;
}