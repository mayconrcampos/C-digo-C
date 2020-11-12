#include <stdio.h>
#include <string.h>

struct controle {
    int codigo;
    char nome[10];
    int qtde;
    float preco_custo;
    float preco_venda;
};

int main(){
    struct controle produto1;
    
    printf("Codigo: ");
    scanf("%d", &produto1.codigo);

    printf("Nome: ");
    scanf("%s", &produto1.nome);

    printf("Quantidade: ");
    scanf("%d", &produto1.qtde);

    printf("Preço de Custo:R$: ");
    scanf("%f", &produto1.preco_custo);

    printf("Preço de Revenda:R$: ");
    scanf("%f", &produto1.preco_venda);

    printf("COD: %2d | NOME: %10s | Qtde: %2d | Custo:R$ %.2f | Venda:R$ %.2f.\n",produto1.codigo, produto1.nome, produto1.qtde, produto1.preco_custo, produto1.preco_venda);
    
    return 0;
}
