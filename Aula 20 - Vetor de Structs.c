#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    int codigo;
    char nome[10];
    int qtde;
    float custo;
    float revenda;
} estoque;

int main(){
    estoque lista[100];
    int opt, ind, totalitens, conta;

    for(ind=0; ind<100; ind++){
        lista[ind].codigo = 0;
        strcpy(lista[ind].nome, "");
        lista[ind].qtde = 0;
        lista[ind].custo = 0;
        lista[ind].revenda = 0;
    }

    do{
        printf("Escolha sua opção ...\n");
        printf("1. Adicionar Produto\n");
        printf("2. Listar Produtos\n");
        printf("0. Sair\n");
        printf("Opção: 1-2-0: ");
        scanf("%d", &opt);
        system("clear");

        switch (opt){
            case 0:
                printf("Você saiu da Aplicação!\n\n\n\n");
                break;
            case 1:
            for(ind=0; ind < 100; ind++){
                if(lista[ind].codigo == 0){
                    printf("Adicionando Novo Produto.\n");
                    printf("Código Produto: \n");
                    scanf("%d", &lista[ind].codigo);

                    printf("Nome Produto: \n");
                    scanf(" %s", &lista[ind].nome);

                    printf("Quantidade (Pçs): \n");
                    scanf("%d", &lista[ind].qtde);

                    printf("Preço de Custo:R$: \n");
                    scanf("%f", &lista[ind].custo);

                    printf("Preço de Revenda:R$: \n");
                    scanf("%f", &lista[ind].revenda);
                    break;
                }
            }
            
                break;
            case 2:
                conta = 0;
                totalitens = 0;
                printf("Visualizando Todos os Produtos.\n\n");
                for(ind=0; ind<100; ind++){
                    if(lista[ind].codigo != 0){
                        printf("COD: %3d | NOME: %10s | Qtde: %3d | Preço Custo:R$: %.2f | Preço Revenda:R$: %.2f.\n", lista[ind].codigo, lista[ind].nome, lista[ind].qtde, lista[ind].custo, lista[ind].revenda);
                        conta++;
                        totalitens += lista[ind].qtde;
                    }
                }
                if(conta == 0){
                    printf("Não há produtos Cadastrados em Estoque.\n\n\n\n");
                }else{
                    printf("Total de Itens: %d | Total de itens em Estoque: %d.\n\n\n\n", conta, totalitens);
                }
                break;
            default:
                printf("Opção Inválida!\n\n\n\n");
        }
    } while (opt != 0);
    return 0;
}
