#include <stdio.h>

/*-----------------------------------------------------
|    Aluno: Maycon Robson Campos                         |
|    Curso: Bacharelado em Engenharia de Software        |   
|    R.A.: 20054745-5                                    |
|                                                        |      
|    Algoritmo que exibe uma listagem de lanches,        |
|    Apresenta 5 opções ao usuário. Pede para o usuário  |   
|    escolher uma opcão e exibe na tela lanche e preço.  |
-------------------------------------------------------*/
int main(){
    int opcao;

    printf("Lista de Lanches!\n");
    printf("1 - Misto Quente\n2 - X-Salada\n3 - X-Burguer\n4 - X-Bacon\n5 - X-Tudo\n");
    printf("-=-= Faça seu pedido -=-=\n");
    printf("1-2-3-4-5: ");
    scanf("%d", &opcao);

    if((opcao < 1) || opcao > 5){
        printf("Opção inválida!\nTente Novamente!\n");
    }
    if(opcao == 1){
        printf("Misto Quente - Preço: R$8,00\n");
    }
    if(opcao == 2){
        printf("X-Salada - Preço: R$10,00\n");
    }
    if(opcao == 3){
        printf("X-Burguer - Preço: R$12,00\n");
    }
    if(opcao == 4){
        printf("X-Bacon - Preço: R$15,00\n");
    }
    if(opcao == 5){
        printf("X-Tudo - Preço: R$18,00\n");
    }
    
    return 0;
}