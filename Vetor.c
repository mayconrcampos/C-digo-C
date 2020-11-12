#include<stdio.h>

int main(){
    int ind;
    float total, media;
    float notas[4];
    //Preenchendo vetor
    for(ind=0; ind <4 ; ind++){
        printf("Digite a %dº Nota: ", ind + 1);
        scanf("%f", &notas[ind]);
    }
    // Calculando Total das Notas e Média
    for(ind=0; ind < 4; ind++){
        total = total + notas[ind];
    }
    media = total / 4;
    printf("A média é: %.2f\n", media);

    return 0;
}
