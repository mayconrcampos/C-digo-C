#include <stdio.h>
#include <string.h>

int main(){
    char nome[21];
    char nome1[21];

    printf("Digite um nome: ");
    gets(nome);
    printf("Digite outro nome: ");
    gets(nome1);

    if(strcmp(nome, nome1) == 0){
        printf("São iguais!\n");
    }else{
        printf("São diferentes!\n");
    }

    return 0;
}
