#include <stdio.h>

int main(){
    float media;
    printf("Digite a média final do aluno: ");
    scanf("%f", &media);

    if (media >= 7){
        printf("Aprovado!\n");
    }else{
        if ((media >= 4)&& media < 7){
            printf("Exame!\n");
        }else{
            if(media < 4){
                printf("Reprovado!\n");
            }
        }
        
    }
    
    return 0;
}
