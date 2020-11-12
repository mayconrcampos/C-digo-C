#include <stdio.h>

int main(){
    FILE *arquivo;
    
    int caixa;
    int tipo;
    int qtde;
    char titulo[30];
    char ed[10];
    char autor[20];
    char editora[20];
    char isbn[10];
    int ano;

    int get_caixa;
    int get_tipo;
    int get_qtde;
    char get_tit[30];
    char get_ed[10];
    char get_autor[20];
    char get_editora[20];
    char get_isbn[10];
    int get_ano;

    char imprime[100];

    arquivo = fopen("arquivo01.txt", "r");

    if(arquivo != NULL){
        while(fscanf(arquivo, "%d %d %d", &get_caixa, &get_tipo, &get_qtde)!= EOF){
            fgets(imprime, 100, arquivo);
            //printf("Caixa: %d | Tipo: %d | Qtde: %d | Título: %s | Ed.: %s | Autor: %s | Editora: %s | ISBN: %s | Ano: %d\n", get_caixa, get_tipo, get_qtde, get_tit, get_ed, get_autor, get_editora, get_isbn, get_ano);
            printf("%d %d %d %s\n",get_caixa, get_tipo, get_qtde, imprime);
        }
    
    }else{
        printf("Arquivo não existe.\n");
    }
    fclose(arquivo);

    return 0;
}