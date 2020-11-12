#include <stdio.h>
#include <stdlib.h>

int main(){
    int idades[5];
    float media, total;

    total = 0;
    media = 0;
    for(int i=0; i < 5; i++){
        printf("Digite a %dº idade: ", i+1);
        scanf("%d", &idades[i]);
        total += idades[i];
    }
    printf("As idades são: \n");
    for(int i = 0; i < 5; i++){
        printf("Idade: %dº -- %d\n",i+1, idades[i]);
    }
    media = total / 5;
    printf("A média de idade é %.2f\n", media);

    if(media < 15){
        printf("Será aplicada a prova de nível Fácil.\n");
    }else if((media >= 15)&& media <= 18){
        printf("Será aplicada a prova de nível Médio.\n");
    }else if(media > 18){
        printf("Será aplicada a prova de nível Difícil.\n");
    }

    return 0;
}
