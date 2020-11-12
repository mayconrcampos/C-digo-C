#include <stdio.h>
#include <string.h>

int main(){
    float notas, soma, media = 0;
    char nome[30];
    int i = 0;

    printf("Aluno: ");
    scanf("%s", nome);
    printf("Informe a Nota: 0 pra Sair: ");
    scanf("%f", &notas);

    while(notas != 0){
        printf("Informe a Nota: 0 pra Sair: ");
        scanf("%f", &notas);
        soma = soma + notas;
        i++;
    }
    media = soma / i;

    printf("Foram %i notas digitadas para o Aluno: %s.\n\n", i, nome);
    printf("Total: %.2f : Média: %.2f.\n", soma, media);

    return 0;
}

