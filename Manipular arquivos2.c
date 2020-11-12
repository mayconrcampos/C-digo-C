#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    //FILE *arq;
    int caixa;
    int tipo;
    int qtde;
    char titulo[30];
    char ed[10];
    char autor[20];
    char editora[20];
    char isbn[10];
    int ano;
    
    
    //char formatado[100];
        printf("Caixa a ser inserido: ");
        scanf("%d", &caixa);

        printf("Tipo: 1 - Livro | 2 - Revista: ");
        scanf("%d", &tipo);

        printf("Quantidade: ");
        scanf("%d", &qtde);


        printf("Titulo: ");
        gets(titulo);
        __fpurge(stdin);

        printf("Edição:");
        gets(ed);
        __fpurge(stdin);

        printf("Autor: ");
        gets(autor);
        __fpurge(stdin);

        printf("Editora: ");
        gets(editora);
        __fpurge(stdin);

        printf("ISBN: ");
        gets(isbn);
        __fpurge(stdin);

        printf("Ano da Obra: ");
        scanf("%d", &ano);
        __fpurge(stdin);

        

        

    return 0;
}
