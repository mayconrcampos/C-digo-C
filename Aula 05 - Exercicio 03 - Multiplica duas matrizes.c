#include <stdio.h>

int main(){
    int matrizUM[3][3];
    int matrizDOIS[3][3];
    int matrizTRES[3][3];

    for(int i=0; i < 3; i++){
        for(int j=0; j < 3; j++){
            printf("Matriz 1: Número: [%d][%d]: ", i, j);
            scanf("%d", &matrizUM[i][j]);
            printf("Matriz 2: Número: [%d][%d]: ", i, j);
            scanf("%d", &matrizDOIS[i][j]);
            matrizTRES[i][j] = matrizUM[i][j] + matrizDOIS[i][j];
        }
    }
    printf("Matriz UM.\n");
    for(int i=0; i < 3; i++){
        for(int j=0; j < 3; j++){
            printf("%d ", matrizUM[i][j]);
        }
        printf("\n");
    }
    printf("Matriz DOIS.\n");
    for(int i=0; i < 3; i++){
        for(int j=0; j < 3; j++){
            printf("%d ", matrizDOIS[i][j]);
        }
        printf("\n");
    }
    printf("Matriz TRÊS. A soma das duas primeiras.\n");
    for(int i=0; i < 3; i++){
        for(int j=0; j < 3; j++){
            printf("%d ", matrizTRES[i][j]);
        }
        printf("\n");
    }
    return 0;
}
