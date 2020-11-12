#include <stdio.h>
#include <stdlib.h>

int main(){
    float preco, desconto, acrescimo, parcela;
    int opcao;
 

    printf("Digite o valor da Compra: ");
    scanf("%f", &preco);
    system("clear");

    printf("------------- Condições de Pagamento --------------\n");
    printf("Total da compra:..............................%.2f\n", preco);
    printf("--------------------------------------------------- \n");
    printf("1. A Vista - Dinheiro ou Cheque: 10%% de desconto.\n");
    printf("2. A Vista - Cartão de Crédito : 5%% de desconto.\n");
    printf("3. Parcelado 2x                : Preço Normal.\n");
    printf("4. Parcelado 3x                : Juros 10%%.\n");
    printf("----------------------------------------------------\n");
    printf("\n");
    printf("Escolha sua opção de Pagamento: 1-2-3-4: \n");
    scanf("%d", &opcao);

    switch (opcao){
    case 1:
        desconto = 0;
        system("clear");
        printf("Pagamento: Á VISTA Dinheiro: (10%% Desconto)\n");
        printf("-----------------------------------------------\n");
        printf("Valor da Compra:...................: R$ %.2f.\n", preco);
        desconto = preco - (preco / 100 * 10);
        printf("Valor Total a Pagar (10%% Desconto): R$%.2f.\n", desconto);
        break;
    case 2:
        desconto = 0;
        system("clear");
        printf("Pagamento: Á VISTA Cartão: (5%% Desconto)\n");
        printf("-----------------------------------------------\n");
        printf("Valor da Compra:...................: R$ %.2f.\n", preco);
        desconto = preco - (preco / 100 * 5);
        printf("Valor Total a Pagar (5%% Desconto): R$%.2f.\n", desconto);
        break;
    case 3:
        system("clear");
        printf("Pagamento: Parcelado: 2x\n");
        printf("-----------------------------------------------\n");
        printf("Valor da Compra:...................: R$ %.2f.\n", preco);
        parcela = preco / 2;
        printf("Valor Total a Pagar - Parcelado 2x: R$%.2f.\n", preco);
        printf("2 Parcelas de : R$%.2f\n", parcela);
        break;
    case 4:
        system("clear");
        printf("Pagamento: Parcelado: 3x\n");
        printf("-----------------------------------------------\n");
        printf("Valor da Compra:...................: R$ %.2f.\n", preco);
        acrescimo = preco + (preco / 100 * 10);
        parcela = acrescimo / 3;
        printf("Valor Total a Pagar - Parcelado 3x: R$%.2f.\n", acrescimo);
        printf("3 Parcelas de : R$%.2f\n", parcela);
        break;
    default:
        printf("Opção Inválida! Tente Novamente!");
        break;
    }
    return 0;
}
