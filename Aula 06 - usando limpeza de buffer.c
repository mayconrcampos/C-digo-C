#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    char nome[20];
    int idade;
    char sexo;
}cadastro;

int main(){
    cadastro ficha;
    char opc;

    do{
        printf("Nome: ");
        __fpurge(stdin);
        gets(ficha.nome);

        printf("idade: ");
        scanf("%d", &ficha.idade);

        printf("Sexo: ");
        __fpurge(stdin);
        scanf("%c", &ficha.sexo);

        printf("Continua? s ou n: ");
        __fpurge(stdin);
        scanf("%c", &opc);
        switch (opc){
        case 's':
            printf("Nome: %s\n", ficha.nome);
            printf("Idade: %d\n", ficha.idade);
            printf("Sexo: %c\n", ficha.sexo);
            break;
        
        default:
            printf("Tchau\n");
            break;
        }
    } while (opc != 'n');
    return 0;
}