#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[20];
    int turma;
    float notas[4];
} Boletim;

int main(){
    Boletim alunos[100];
    int i, j, opt, conta;
    float media, total;
    char nome[20];

    for(i=0; i<100; i++){
        alunos[i].turma = 0;
    }

    do{ 
        printf("1. Cadastrar Aluno.\n");
        printf("2. Ver Alunos e Médias.\n");
        printf("3. Ver média de um aluno / Por Nome.\n");
        printf("0. Sair.\n");
        __fpurge(stdin);
        scanf("%d", &opt);
        system("clear");
        switch (opt){
        // Sair
        case 0:
            printf("Você saiu do sistema.\n");
            break;
        // Cadastrar aluno
        case 1:

            for(i=0; i<100; i++){
                if(strcmp("", alunos[i].nome) == 0){
                    printf("Digite o nome do aluno: ");
                    __fpurge(stdin);
                    gets(alunos[i].nome);

                    printf("Turma: ");
                    __fpurge(stdin);
                    scanf("%d", &alunos[i].turma);

                    media = 0;
                    total = 0;
                    for(j=0; j<4; j++){
                        printf("Nota %d: ", j+1);
                        __fpurge(stdin);
                        scanf("%f", &alunos[i].notas[j]); 
                    }break;
                }            
            }
            break;
        // Ver Todos alunos e notas
        case 2:
            printf("-=-=-=-= Lista de Alunos, Notas e Média -=-=-=-=\n");
            conta = 0;
            for(i=0; i<100; i++){
                if (alunos[i].turma != 0){
                    conta += 1;
                    printf("Aluno: %.20s | Turma: %.3d | Aluno Nº: %3d\n", alunos[i].nome, alunos[i].turma, conta);
                    
                    total = 0; 
                    media = 0;
                    for(j=0; j<4; j++){
                        printf("Nota %.2d: %.2f\n", j+1, alunos[i].notas[j]);
                        total += alunos[i].notas[j];
                    }
                    if(conta > 0){
                        media = (total / 4);
                        printf("Média: %.2f.\n", media);
                        printf("\n");
                    }
                }
            }if(conta == 0){
                printf("Não existem alunos cadastrados.\n");
            }
            break;
        // Ver notas por Nome
        case 3:
            printf("Digite o nome do aluno: ");
            __fpurge(stdin);
            gets(nome);

            conta = 0;
            for(i=0; i<100; i++){
                if (strcmp(nome, alunos[i].nome) == 0){
                    conta += 1;
                    printf("Aluno: %.20s | Turma: %.3d | Aluno Nº: %3d\n", alunos[i].nome, alunos[i].turma, conta);

                    total = 0;
                    media = 0;
                    for(j=0; j<4; j++){
                        printf("Nota %.2d: %.2f\n", j+1, alunos[i].notas[j]);
                        total += alunos[i].notas[j];
                    }
                    if(conta){
                        media = (total / 4);
                        printf("Média: %.2f.\n", media);
                        printf("\n");
                    }
                } 
            }if(conta == 0){
                printf("Não existem cadastros em nome de %s.\n", nome);
            }

            break;
        default:
            printf("Opção Inválida!\n");
            break;
        }

    } while (opt != 0);
    
    return 0;
}
