#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char nomes[100][20];
    float valores[100];
    int opc, ind, conta;
    char nome[20];
    float valor, total;

    // enchendo matriz de nomes vazios
    for(ind=0; ind < 100 ; ind ++){
        strcpy(nomes[ind], "");
    }

    // enchendo vetor de números 0.
    for(ind=0; ind < 100; ind++){
        valores[ind] = 0;
    }

    do{
        printf("1. Adicionar Nota.\n");
        printf("2. Visualizar Notas.\n");
        printf("3. Visualizar Nota - Por Nome.\n");
        printf("4. Excluir Notas de um Cliente.\n");
        printf("0. Sair.\n");
        printf("Opção: 1-2-3-4-0: ");
        scanf(" %d", &opc);
        system("clear");
        
        switch (opc){
            case 0:
                printf("Você saiu do sistema.\n");
                break;
            case 1:
                conta = 0;
                printf("Adicionar Notas: \n");
                printf("Digite o primeiro Nome: ");
                scanf("%s", nome);
                fflush(stdin);
                printf("Digite o valor: ");
                scanf("%f", &valor);

                for(ind=0; ind < 100; ind++){
                    if(valores[ind] == 0){
                        strcpy(nomes[ind], nome);
                        valores[ind] = valor;
                        break;
                    }
                }
                printf("\n\n\n\n");
                break;
            case 2:
                conta = 0;
                total = 0;
                printf("Visualizando Todas as Notas Cadastradas.\n");
                for(ind=0; ind < 100; ind++){
                    if(valores[ind] != 0){
                        printf("Nome: %10s :: Valor:R$: %.2f.\n", nomes[ind], valores[ind]);
                        total += valores[ind];
                        conta++;
                    }
                }
                if(conta == 0){
                        printf("Não existem Notas Cadastradas.\n\n\n\n");
                }else{
                    printf("Total: %3d Notas Cadastradas.\n", conta);
                    printf("Total:R$ %.2f.\n\n\n\n", total);
                }
                break;
            case 3:
                total = 0;
                conta = 0;
                printf("Visualizando Nota por Cliente.\n");
                printf("Digite o Nome: ");
                fflush(stdin);
                scanf("%s", nome);
                
                for(ind=0; ind<100; ind++){
                    if(strcmp(nomes[ind], nome) == 0){
                        printf("Nome: %10s :: Valor:R$ %.2f.\n", nomes[ind], valores[ind]);
                        total += valores[ind];
                        conta++;
                    }
                }
                if(conta == 0){
                    printf("Nenhum Registro encontrado em nome de %s.\n\n\n\n", nome);
                }else{
                    printf("Total de Notas: %3d :: Total:R$ %.2f.\n\n\n\n",conta, total);
                }
                break;
            case 4:
                conta = 0;
                total = 0;
                printf("Excluindo Todas as notas de um Cliente - Dar Baixa em Débito.\n");
                printf("Digite o nome: ");
                scanf("%s", nome);
                for(ind=0; ind<100; ind++){
                    if(strcmp(nomes[ind], nome) == 0){
                        strcpy(nomes[ind], "");
                        total += valores[ind];
                        valores[ind] = 0;
                        conta++;
                    }
                }
                if(conta == 0){
                    printf("Não há Notas em Aberto no nome de %10s.\n\n\n\n", nome);
                }else{
                    printf("Total de Notas: %d :: Total:R$ %.2f.\n\n\n\n", conta, total);
                }
                break;
            default:
                printf("Opção Inválida!\n");
                break;
            }
    } while (opc != 0);
    

    return 0;
}
