#include <stdio.h>
#include <stdlib.h>

int main(){
    float notas[3][2];

    for(int i=0; i < 3; i++){
        for(int j=0; j < 2; j++){
            printf("Aluno:[%d] - Nota: [%d]: ",i+1, j+1 );
            scanf("%f", &notas[i][j]);
        }
    }
    for(int i=0; i < 3; i++){
        for(int j=0; j < 2; j++){
            printf("Nota: %.2f ", notas[i][j]);
        }
        printf(" \n");
    }
    
    
    return 0;
}
