#include<stdio.h>


int main()
{
    int anoNacimento;
    int diaNascimento;
    int mesNascimento;
    int idade;

    float freqMaxima;
    float freqNormalSup;
    float freqNormalInf;

    int anoAtual;
    int diaAtual;
    int mesAtual;

    scanf("%d", &anoNacimento);
    scanf("%d", &diaNascimento);
    scanf("%d", &mesNascimento);

    scanf("%d", &anoAtual);
    scanf("%d", &diaAtual);
    scanf("%d", &mesAtual);

    idade = anoAtual - anoNacimento - 1;

    if (mesAtual>mesNascimento)
    {
        idade++;
    }
    else if (mesAtual == mesNascimento && diaAtual>=diaNascimento)
    {
        idade++;
    }

    freqMaxima = 220 - (idade);

    freqNormalSup = 0.85*freqMaxima;
    freqNormalInf = 0.5*freqMaxima;

    printf("Sua idade: %d;\nSua frequencia cardiaca maxima: %.2f;\nSua frequencia cardiaca normal está"
        " entre %.2f e %.2f", idade, freqMaxima, freqNormalInf, freqNormalSup);

    return 0;
}