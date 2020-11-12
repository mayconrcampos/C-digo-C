#include <stdio.h>

int main(){
    int anoatual=2020, anonascimento, idade;
    char opcao;

    printf("Digite o ano de seu Nascimento: ");
    scanf("%d", &anonascimento);
    printf("Você já fez aniversário este ano? s ou n: ");
    scanf(" %c", &opcao);

    idade = anoatual - anonascimento;
    switch (opcao){
    case 'n':
        idade = anoatual - anonascimento - 1;
    case 's':
        if(idade < 16){
            printf("Você tem apenas %d anos. É Di Menó!\n", idade);
        }else if((idade >= 16)&& idade < 18){
            printf("Você tem %d anos! Já pode votar!\n", idade);
        }else if(idade >= 18){
            printf("Você tem %d anos! Já pode tirar sua carteira de Motorista!\n", idade);
        }
        break;
    default:
        printf("Opção Inválida! Tente novamente!");
        break;
    }
    return 0;
}
