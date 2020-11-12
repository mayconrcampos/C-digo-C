#include <stdio.h>

void preenchematriz(int matriz[3][3]);
void imprimematriz(int matriz[3][3]);
void multiplicaimpar(int matriz[3][3]);

int main(){
    int matriz[3][3];

    preenchematriz(matriz);
    printf("Matriz Original.\n");
    imprimematriz(matriz);
    multiplicaimpar(matriz);
    return 0;
}
void preenchematriz(int matriz[3][3]){
    int i, j;
    for(i=0; i < 3; i++){
        for(j=0; j < 3; j++){
            matriz[i][j] = rand() % 100;
        }
    }
}
void imprimematriz(int matriz[3][3]){
    int i, j;
    for(i=0; i < 3; i++){
        for(j=0; j < 3; j++){
            printf("%.4d ", matriz[i][j]);
        }printf("\n");
    }
}
void multiplicaimpar(int matriz[3][3]){
    int matriz2[3][3];
    int i, j, total;
    total = 0;
    for(i=0; i < 3; i++){
        for(j=0; j < 3; j++){
            if(matriz[i][j] % 2 != 0){
                matriz2[i][j] = matriz[i][j] * 2;
            }else if(matriz[i][j] % 2 == 0){
                matriz2[i][j] = matriz[i][j] * 3;
            }
        }
    }
    printf("Matriz 2 com...\nElemento Impar * 2.\nElemento Par * 3.\n");
    imprimematriz(matriz2);

}