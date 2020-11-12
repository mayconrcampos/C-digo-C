#include <stdio.h>

int main(){
    int tabuada, numero, i;
    printf("Digite um número para saber sua tabuada: ");
    scanf("%d", &numero);

    for(i=1; i <= 10; i++){
        tabuada = numero * i;
        printf("%d x %d = %d\n", numero, i, tabuada);
    }

    return 0;
}
