#include <stdio.h>

int main(){
    int num, soma;
    soma = 0;
    while (soma < 100){
        printf("Digite um numero inteiro: ");
        scanf("%d", &num);
        soma = soma + num;
    }
    printf("Valor total: %d\n", soma);

    return 0;
}
