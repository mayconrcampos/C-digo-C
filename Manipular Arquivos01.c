#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

    char imprime[100];

    printf("Caixa a ser inserido: ");
    scanf("%d", &caixa);

    printf("Tipo: 1 - Livro | 2 - Revista: ");
    scanf("%d", &tipo);

    printf("Quantidade: ");
        scanf("%d", &qtde);
    __fpurge(stdin);


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

    arquivo = fopen("arquivo01.txt", "a");

    fprintf(arquivo, "%d %d %d Título: %s | Ed.: %s | Autor: %s | Editora: %s | ISBN: %s | Ano: %d\n", caixa, tipo, qtde, titulo, ed, autor, editora, isbn, ano);

    printf("Fim da gravação.\n");

    printf("Início da Leitura.\n");

    fclose(arquivo);

    arquivo = fopen("arquivo01.txt", "r");

    if(arquivo != NULL){
        while(fscanf(arquivo, "%d %d %d\n", &get_caixa, &get_tipo, &get_qtde)!= EOF){
            fgets(imprime, 100, arquivo);
            if(get_caixa == 1){
                printf("Somente da caixa 1\n");
                printf("%s\n",imprime);
            }else if(get_tipo == 2){
                printf("Somente revistas\n");
                printf("%s\n",imprime);
            }
        }
    
    }else{
        printf("Arquivo não existe.\n");
    }
    fclose(arquivo);
    
    return 0;
}
