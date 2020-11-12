#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    char nome[20];
    int ddd;
    int telefone;
}telefones;

int main(){
    telefones agenda[15];
    int opt, i, conta;

    for(int i=0; i < 15; i++){
        strcpy(agenda[i].nome, "");
        agenda[i].ddd = 0;
        agenda[i].telefone = 0;
    }
    do{
        printf("-=-=-= Agenda Telefônica -=-=-=\n");
        printf("1. Cadastrar Nome/Número.\n");
        printf("2. Listar todos os telefones.\n");
        printf("3. Deletar registro.\n");
        printf("0. Sair da agenda.\n");
        __fpurge(stdin);
        scanf("%d", &opt);
        __fpurge(stdin);
        system("clear");
        switch (opt){
        case 0:
            printf("Você saiu do sistema.\n");
            break;
        case 1:
            printf("-=-= Cadastrando Novo Número -=-=.\n");
            for(i=0; i < 15; i++){
                if(agenda[i].ddd == 0){
                    printf("Nome: \n");
                    gets(&agenda[i].nome);
                    __fpurge(stdin);

                    printf("DDD: \n");
                    scanf("%d", &agenda[i].ddd);
                    __fpurge(stdin);

                    printf("Telefone: \n");
                    scanf("%d", &agenda[i].telefone);
                    break;
                }
                
            }
            break;
        case 2:
            conta = 0;
            for(i=0; i < 15; i++){
                if(agenda[i].ddd != 0){
                    printf("Nome: %.20s | Telefone: (%d) %d\n", agenda[i].nome, agenda[i].ddd, agenda[i].telefone);
                    conta++;
                }
                
            }if(conta){
                    printf("%d registros encontrados.\n", conta);
            }else{
                printf("Nenhum registro encontrado.\n");
            }

            break;
        case 3:
            break;
        
        default:
            printf("Opção Inválida!\n\n");
            break;
        }
        
    } while (opt != 0);
     
    return 0;
}
