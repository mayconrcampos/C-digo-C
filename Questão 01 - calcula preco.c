#include <stdio.h>

float calculaPreco(float valorFabrica, float percentagemDist, float impostos){
    float preco_final, porcent, imp;

    porcent = (valorFabrica / 100) * percentagemDist;
    imp = ((porcent + valorFabrica) / 100) * impostos;
    preco_final = valorFabrica + porcent + imp;

    return preco_final;
}

int main(){
    float vlfabrica, percentDist, imposto;
    printf("Digite o valor de Fábrica (R$): ");
    scanf("%f", &vlfabrica);
    printf("Digite a Percentagem da Distribuidora (%%): ");
    scanf("%f", &percentDist);
    printf("Digite a Alíquota de Imposto (%%): ");
    scanf("%f", &imposto);

    printf("O valor final do veículo será: R$ %.2f\n", calculaPreco(vlfabrica, percentDist, imposto));

    return 0;
}
