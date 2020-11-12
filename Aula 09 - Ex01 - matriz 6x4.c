#include <stdio.h>

void mediamatriz(int mat[6][4]);
void preenchematriz(int mat[6][4]);
void imprimematriz(int mat[6][4]);

int main(){
    int matriz[6][4];

    preenchematriz(matriz);
    imprimematriz(matriz);
    mediamatriz(matriz);

    return 0;
}
void mediamatriz(int mat[6][4]){
    int total = 0;
    float media = 0;
    int k = 0;
    for(int i=0; i < 6; i++){
        for(int j=0; j < 4; j++){
            total += mat[i][j];
            k++;
        }
    }
    media = total / k;
    printf("Total: %.5d\n", total);
    printf("Media: %5.2f\n", media);
}
void preenchematriz(int mat[6][4]){
    for(int i=0; i < 6; i++){
        for(int j=0; j < 4; j++){
            mat[i][j] = rand() % 100;
        }
    }
}
void imprimematriz(int mat[6][4]){
    for(int i=0; i < 6; i++){
        for(int j=0; j < 4; j++){
            printf("%.3d ", mat[i][j]);
        }printf("\n");
    }
}
