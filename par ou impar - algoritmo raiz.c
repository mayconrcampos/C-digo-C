#include <stdio.h>

int main(){
    int num, resto;
    printf("Digite um número qualquer: ");
    scanf("%d", &num);

    resto = num / 2;
    resto = num - (resto * 2);
    
    if (resto == 0){
        printf("O Número %d é par!\n", num);
    }else{
        printf("O Número %d é ímpar\n", num);
    }

    return 0;
}
