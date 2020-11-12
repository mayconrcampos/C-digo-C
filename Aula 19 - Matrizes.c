#include <stdio.h>

int main(){
    int minha_matriz[3][3];
    int i, j, conta;

    conta = 1;
    for(i=0; i < 3; i++){
        for(j=0; j < 3; j++){
            minha_matriz[i][j] = conta++; 
        }
    }

    for(i=0; i < 3; i++){
        for(j=0; j < 3; j++){
            printf("%d ", minha_matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
