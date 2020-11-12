#include <stdio.h>
#include <stdlib.h>

void cabecalho();
void menu();

int main(){
    int opt;
    do{
        cabecalho();
        menu();
        scanf("%d", &opt);
        system("clear");
        switch (opt){
        case 0:
            printf("Você saiu!\n\n");
            break;
        case 1:
            printf("Você optou por 1. Cadastrar!\n");
            break;
        case 2:
            printf("Você optou por 2. Alterar!\n");
            break;
        case 3:
            printf("Você optou por 3. Excluir!\n");
            break;
        case 4:
            printf("Você optou por 4. Listar!\n");
            break;
        default:
            printf("Opção Inválida!\n");
            break;
        }
    } while (opt != 0);
    return 0;
}
void cabecalho(){
    printf("************************************************\n");
    printf("************ Controle de clientes***************\n");
    printf("************************************************\n");
}
void menu(){
    printf("1. Cadastrar.\n");
    printf("2. Alterar.\n");
    printf("3. Excluir.\n");
    printf("4. Listar.\n");
    printf("0. Sair\n");
}