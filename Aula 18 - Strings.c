#include <stdio.h>
#include <string.h>

int main(){
    char nome[10];
    char sobrenome[10];

    printf("Digite o nome: ");
    gets(nome);
    printf("Digite o sobrenome: ");
    gets(sobrenome);

    strcat(nome, sobrenome);

    printf("%s \n", nome);

    return 0;
}
