/*
Apre￾sentamos a calculadora do índice de massa corporal 
(IMC) no Exercício 1.11. A fórmula para calcular o IMC é
IMC pesoEmQuilos
alturaEmMetros alturaEmMetros = ×
Crie uma aplicação para a calculadora de IMC que leia o 
peso do usuário em quilogramas e a altura em metros, e 
que depois calcule e apresente o seu índice de massa cor￾poral. Além disso,
a aplicação deverá exibir as seguintes 
informações do Ministério da Saúde para que o usuário 
possa avaliar seu IMC:
VALORES DE IMC
Abaixo do peso: menor que 18,5
Normal: entre 18,5 e 24,9
Acima do peso: entre 25 e 29,9
Obeso: 30 ou mais
[Nota: neste capítulo, você aprendeu a usar o tipo int 
para representar números inteiros. Os cálculos de IMC, 
quando feitos com valores int, produzirão resultados
em números inteiros. No Capítulo 4, você aprenderá a usar 
o tipo double para representar números fracionários. 
Quando os cálculos de IMC são realizados com doubles, 
eles produzem números com pontos decimais; estes 
são os chamados números de ‘ponto flutuante’.]
*/

#include<stdio.h>

int main (void) {

    int altura, peso, imc;

    printf("Digite sua altura em metos e seu peso em Kg: \n");

    scanf("%d%d", &altura, &peso);

    printf(" VALORES DE IMC\n"
            "Abaixo do peso: menor que 18,5\n"
            "Normal: entre 18,5 e 24,9\n"
            "Acima do peso: entre 25 e 29,9\n"
            "Obeso: 30 ou mais\n");

    imc = peso/(altura * altura);

    printf("Seu IMC: %d\n", imc);

    return 0;

}