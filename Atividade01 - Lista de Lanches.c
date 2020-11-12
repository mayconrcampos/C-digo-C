#include <stdio.h>

// Aluno: Maycon Robson Campos
// Curso: Bacharelado em Engenharia de Software
// R.A.: 20054745-5

/*  Algoritmo que exibe uma listagem de lanches
    Apresenta 5 opções ao usuário. Mostra na tela
    o lanche correspondente juntamente com seu preço.
*/

int main(){
    int preco[5] = {9, 12, 15, 18, 20};
    int opcao;

    printf("Lista de Lanches!\n");
    printf("1 - Misto Quente\n2 - X-Salada\n3 - X-Burguer\n4 - X-Bacon\n5 - X-Tudo\n");
    printf("-=-= Faça seu pedido -=-=\n");
    printf("1-2-3-4-5: ");
    scanf("%d", &opcao);

    switch (opcao){
    case 1:
        printf("Misto Quente - Preço: R$%d,00\n", preco[0]);
        break;
    case 2:
        printf("X-Salada - Preço: R$%d,00\n", preco[1]);
        break;
    case 3:
        printf("X-Burguer - Preço: R$%d,00\n", preco[2]);
        break;
    case 4:
        printf("X-Bacon - Preço: R$%d,00\n", preco[3]);
        break;
    default:
        printf("X-Tudo - Preço: R$%d,00\n", preco[4]);
        break;
    }

    return 0;
}
