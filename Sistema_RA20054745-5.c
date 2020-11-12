#include <stdio.h>
#include <stdlib.h>

/*
    __________________________________________________________________________
    |    Sistema operacional utilizado para o desenvolvimento:                |
    |    -- Kubuntu 19.10 x86_64 Eoan Ermine                                  |
    |    -- Kernel: x86_64 Linux 5.3.0-62-generic                             |
    |    -- Ambiente: KDE 5.67.0 / Plasma 5.18.3                              |
    __________________________________________________________________________|
    |    - IDE: VSCode.                                                       |
    |    - Escrito no dia 06/07/2020.                                         |
    |    - Foram utilizados vários conceitos aprendidos nas aulas, não todos. |
    |    - Structs                                                            |
    |    - Protótipo de função.                                               |
    |    - Procedimentos.                                                     |
    |    - Laços de repetição do while e while.                               |
    |    - Estruturas de decisão múltiplas switch case                        |
    |    - Estruturas de decisão simples e composta.                          |  
    __________________________________________________________________________|

*/

void add_livro();
void gravar();
void listar_livros();
void listar_revistas();
void listar_obras_cx();
void listando(opcao);

typedef struct{
    int caixa;
    int tipo;
    int qtde;
    char titulo[50];
    char ed[25];
    char autor[30];
    char editora[30];
    char isbn[20];
    int ano;
}livros;

int main(){
    FILE *arquivo;
    int opt;

    do{
        printf("*******************************************************************\n");
        printf("Nome: Maycon R. Campos - RA:20054745-5 - Curso: Eng. de Software.\n");
        printf("*******************************************************************\n");
        printf("-=-=-=-=-=-=-=-=- Acervo de Livros do Prof. José =-=-=-=-=-=-=-=-=-\n");
        printf("1. Incluir registro.\n");
        printf("2. Listar Livros.\n");
        printf("3. Listar Revistas.\n");
        printf("4. Listar Obras por Caixa.\n");
        printf("0. Sair.\n");
        printf("*******************************************************************\n");
        printf("Opção: 1.2.3.4-0: ");
        scanf("%d", &opt);
        system("clear");

        switch (opt){
            case 0:
                printf("Você saiu do sistema.\n");
                break;
            case 1:
                add_livro();
                break;
            case 2:
                listar_livros();
                break;
            case 3:
                listar_revistas();
                break;
            case 4:
                listar_obras_cx();
                break;
            default:
                printf("Opção Inválida!\n");
                break;
        }
    
    } while (opt != 0);
    
    return 0;
}

void add_livro(){
    livros catalogo;

    printf("-=-= 1. Incluir Registro de Obra -=-=\n");
    printf("*************************************\n");
    printf("Caixa a ser inserido.\n");
    printf("1 - 2 - 3 : ");
    scanf("%d", &catalogo.caixa);

    printf("Tipo: 1:Livro | 2:Revista: ");
    scanf("%d", &catalogo.tipo);

    printf("Quantidade: ");
    scanf("%d", &catalogo.qtde);
    __fpurge(stdin);

    printf("Titulo: ");
    gets(catalogo.titulo);
    __fpurge(stdin);

    printf("Edição:");
    gets(catalogo.ed);
    __fpurge(stdin);

    printf("Autor: ");
    gets(catalogo.autor);
    __fpurge(stdin);

    printf("Editora: ");
    gets(catalogo.editora);
    __fpurge(stdin);

    printf("ISBN: ");
    gets(catalogo.isbn);
    __fpurge(stdin);

    printf("Ano da Obra: ");
    scanf("%d", &catalogo.ano);
    __fpurge(stdin);

    gravar(catalogo.caixa, catalogo.tipo, catalogo.qtde, catalogo.titulo, catalogo.ed, catalogo.autor, catalogo.editora, catalogo.isbn, catalogo.ano);
}

void gravar(int cx, int tp, int qtde, char tit[30], char ed[10], char aut[20], char edit[20], char isbn[10], int ano){
    FILE * arquivo;
    arquivo = fopen("arquivo02.txt", "a");

    fprintf(arquivo, "%d %d %d Título: %s Ed.: %s Autor: %s Editora: %s ISBN: %s Ano: %d\n", cx, tp, qtde, tit, ed, aut, edit, isbn, ano);

    fclose(arquivo);
}

void listar_livros(){
    FILE * arquivo;
    int get_caixa, get_tipo, get_qtde, conta, total;
    char imprime[150];

    printf("-=-= 2. Listar todos os Livros Catalogados -=-=\n");
    printf("***********************************************\n");
    conta = 0;
    total = 0;
    arquivo = fopen("arquivo02.txt", "r");
    if(arquivo != NULL){
        while(fscanf(arquivo, "%d %d %d\n", &get_caixa, &get_tipo, &get_qtde)!= EOF){
            fgets(imprime, 150, arquivo);
            if(get_tipo == 1){
                printf("Qtde:%d Caixa:%d %s\n",get_qtde, get_caixa, imprime);
                conta ++;
                total += get_qtde;
            }
        }
        fclose(arquivo);
        if(conta){
            printf("*******************************************************************\n");
            printf("%d Registros encontrados.\n", conta);
            printf("%d Unidades.\n", total);
            printf("*******************************************************************\n");
        }else{
            printf("Não há livros catalogados.\n\n\n\n");
        }
    }else{
        printf("Arquivo inexistente.\n\n\n\n");
    }
    
}

void listar_revistas(){
    FILE * arquivo;
    int get_caixa, get_tipo, get_qtde, conta, total;
    char imprime[150];

    printf("-=-= 3. Listar todas as Revistas Catalogadas -=-=\n");
    printf("*************************************************\n");
    conta = 0; 
    total = 0;
    arquivo = fopen("arquivo02.txt", "r");
    if(arquivo != NULL){
        while(fscanf(arquivo, "%d %d %d\n", &get_caixa, &get_tipo, &get_qtde)!= EOF){
            fgets(imprime, 150, arquivo);
            if(get_tipo == 2){
                printf("Qtde:%d Caixa:%d %s\n",get_qtde, get_caixa, imprime);
                conta++;
                total += get_qtde;
            }
        }
        fclose(arquivo);
        if(conta){
            printf("*******************************************************************\n");
            printf("%d Registros encontrados.\n", conta);
            printf("%d Unidades.\n", total);
            printf("*******************************************************************\n");
        }else{
            printf("Não há Revistas catalogadas.\n\n\n\n");
        }
    }else{
        printf("Arquivo inexistente.\n\n\n\n");
    }
    
}

void listar_obras_cx(){
    int opcao;

    printf("-=-= 4. Listar Obras Por Caixa -=-=\n");
    printf("***********************************\n");
    printf("Digite o Número da Caixa para ver seu conteúdo.\n");
    printf("Opções: Caixa 1, 2 ou 3: ");
    scanf("%d", &opcao);
    system("clear");

    switch (opcao){
        case 1:
            printf("Listando todos os itens da Caixa: 01.\n");
            printf("*****************************************************\n\n");
            listando(1);
            break;
        case 2:
            printf("Listando todos os itens da Caixa: 02.\n");
            printf("*****************************************************\n\n");
            listando(2);
            break;
        case 3:
            printf("Listando todos os itens da Caixa: 03.\n");
            printf("*****************************************************\n\n");
            listando(3);
            break;
        default:
            printf("Opção Inválida! Digite Somente Caixas: 1, 2 ou 3.\n\n\n\n");
            break;
    }
}

void listando(int opcao){
    FILE * arquivo;
    int get_caixa, get_tipo, get_qtde, conta, total;
    char imprime[150];

    total = 0;
    conta = 0;
    arquivo = fopen("arquivo02.txt", "r");
    if(arquivo != NULL){
        while(fscanf(arquivo, "%d %d %d\n", &get_caixa, &get_tipo, &get_qtde)!= EOF){
            fgets(imprime, 150, arquivo);
            if(get_caixa == opcao){
                printf("Qtde:%d Tipo: %d %s",get_qtde, get_tipo, imprime);
                if(get_tipo == 1){
                    printf("    Tipo 01 - Livro.\n");
                }else{
                    printf("    Tipo 02 - Revista.\n");
                }
                conta++;
                total += get_qtde;
            }
        }
        fclose(arquivo);
        if(conta){
            printf("*******************************************************************\n");
            printf("%d Registro(s) encontrado(s) na Caixa %d.\n", conta, opcao);
            printf("%d Unidades.\n", total);
            printf("*******************************************************************\n");
        }else{
            printf("Não há Livros/Revistas catalogadas na Caixa %d.\n\n\n\n", opcao);
        }
    }else{
        printf("Arquivo Inexistente.\n\n\n\n");
    }
}
