#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char nomes[10];
    float notas[4];
    int matricula;
}alunos;

void add();
void visualiza_todos();
void visualiza_aluno();
struct alunos;

// Função principal com o esqueleto do fluxo do programa.
int main(){
    int opc;
    float total, medialuno;
    alunos medias[100];

    for(int i = 0; i < 100; i++){
        strcpy(medias[i].nomes, "");
        medias[i].matricula = 0;
        for (int ind = 0; ind < 4; ind++){
            medias[i].notas[ind] = 0;
        }
    }

    do{
        printf("-=-= Médias dos Alunos -=-=\n");
        printf("1. Add Aluno e Notas.\n");
        printf("2. Visualiza Todos.\n");
        printf("3. Visualiza um Aluno.\n");
        printf("0. Sair do sistema\n");
        printf("Opção: 1-2-3-0: ");
        scanf("%d", &opc);
        system("clear");

        switch (opc){
        case 0:
            printf("Você saiu do sistema!\n\n\n\n");
            break;
        case 1:
            add();
            break;
        case 2:
            visualiza_todos();
            break;
        case 3:
            visualiza_aluno();
            break;
        default:
            printf("Opção Inválida!\n\n\n\n");
            break;
        }

    } while (opc != 0);

    return 0;
}
// Procedimento que adiciona mais um Aluno, matrícula e notas.
void add(){
    alunos medias[100];
    printf("-=-= Adicionar Aluno e Notas -=-=\n");
    for (int i = 0; i < 100; i++){
        if (strcmp(medias[i].nomes, "") == 0){
            printf("Nome: ");
            scanf(" %s", &medias[i].nomes);
            printf("Matrícula Nº: ");
            scanf("%d", medias[i].matricula);
            for (int ind = 0; ind < 4; ind++){
                printf("Nota %d: ", ind+1);
                scanf("%f", &medias[i].notas[ind]);
            }
        break;
        }
    }
}
void visualiza_todos(){
    alunos medias[100];
    float total, media;
    int conta;
    printf("-=-= Listando todos os Alunos e Notas -=-=\n");
    for (int i = 0; i < 100; i++){
        if(strcmp(medias[i].nomes, "") == 0){
            break;
        }else{
            printf("Nome: %s\n", medias[i].nomes);
            printf("Matrícula Nº: %d.\n", medias[i].matricula);
            conta++;
            for (int ind = 0; ind < 4; ind++){
                printf("Nota: %d : ", ind+1);
                printf("%.2f\n", medias[i].notas[ind]);
                total += medias[i].notas[ind];
            }
            media = total / 4;
            printf("Nota Total: %.2f | Média: %.2f\n\n", total, media);
            total = 0;
            media = 0;
        } 
    }
    if(conta == 0){
        printf("Não existe nenhum registro.\n\n\n\n");
    }else{
        printf("Total de Alunos Cadastrados: %d.\n", conta);
    }
}
void visualiza_aluno(){
    alunos medias[100];
    float total, media;
    int conta, matri;
    printf("-=-= Listando Notas de um Aluno -=-=\n");
    printf("Digite a Matrícula: ");
    scanf("%d", &matri);
    for (int i = 0; i < 100; i++){
        if(matri != medias[i].matricula){
            break;
        }else{
            printf("Nome: %s", medias[i].nomes);
            printf("Matrícula Nº: %d", medias[i].matricula);
            conta++;
            for (int ind = 0; ind < 4; ind++){
                printf("Nota %d: %.2f\n", i+1, medias[i].notas[ind]);
                total += medias[i].notas[ind];
            }
            media = total / 4;
            printf("Nota Total: %.2f | Média: %.2f.\n\n", total, media);
            media = 0;
            total = 0;   
        }
    }
    if (conta == 0){
        printf("Não existe nenhum registro referente a Matrícula Nº %d.\n\n\n\n",matri);
    }else{
        printf("Total de %d Boletins do Aluno Matrícula: %d.\n", conta, matri);
    }
}
