/*
Pesquise diversos websites sobre transpor￾te solidário com carros de passeio. Crie uma aplicação 
que calcule a sua despesa diária com o automóvel, para 
que você possa estimar quanto dinheiro poderia eco￾nomizar com o transporte solidário, que também tem 
outras vantagens, como reduzir as emissões de carbono 
e os congestionamentos. A aplicação deverá solicitar as 
seguintes informações, e exibir os custos com o trajeto 
diário ao trabalho:
a) Total de quilômetros dirigidos por dia.
b) Custo por litro de combustível.
c) Média de quilômetros por litro.
d) Preço de estacionamento por dia.
e) Gastos diários com pedágios.
*/

#include<stdio.h>

int main (void) {

    int quilometragemTotal, custoCombustivel, valorQuilometrosPorLitro,
    precoEstacionamento, gastoPedagioDiario, gastoTotal, totalPessoas, gastoPorPessoa, custoPorLitro;

    printf("Insira respectivamente o total de quilometros rodados, o custo por litro"
            " a média de quilometros por litro, o total do prelo do estacionamento e total de pedágio: \n");

    scanf("%d%d%d%d%d", &quilometragemTotal, &custoPorLitro, &valorQuilometrosPorLitro,
    &precoEstacionamento, &gastoPedagioDiario);

    custoCombustivel = (quilometragemTotal * custoPorLitro) / valorQuilometrosPorLitro;

    gastoTotal = custoCombustivel + gastoPedagioDiario + precoEstacionamento;

    printf("O gasto total foi de %d, insira a quantidade de pessoas que pagarão a conta: \n", gastoTotal);

    scanf("%d", &totalPessoas);

    gastoPorPessoa = gastoTotal / totalPessoas;

    printf("Então fica %d por pessoa", gastoPorPessoa);

    return 0;
}