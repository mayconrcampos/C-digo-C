#include <stdio.h>

int main(){
    int vetor[10];
    int maior = 0;

    for(int i=0; i < 10; i++){
        printf("%dº Número: ", i+1);
        scanf("%d", &vetor[i]);
        if(vetor[i] > 100){
            maior++;
        }
    }
    printf("São %d números maiores que 100.\n", maior);

    return 0;
}
