#include <stdio.h>

int main(){
    int matriz[3][2];
    int maior = 0;

    for(int i=0; i < 3; i++){
        for(int j=0; j < 2; j++){
            printf("Número: [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
            if(matriz[i][j] > 10){
                maior++;
            }
        }
    }
    for(int i=0; i < 3; i++){
        for(int j=0; j < 2; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("Temos %d números maiores que 10.\n", maior);
    
    return 0;
}
