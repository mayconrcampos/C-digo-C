#include <stdio.h>

int main(){
    int vetorUM[15];
    int vetorDOIS[15];
    int vetorTRES[15];

    for(int i = 0; i < 15; i++){
        printf("Digite o %dº Número para o VETOR 1: ", i+1);
        scanf("%d", &vetorUM[i]);
        printf("Digite o %dº Número para o VETOR 2: ", i+1);
        scanf("%d", &vetorDOIS[i]);

        vetorTRES[i] = vetorUM[i] + vetorDOIS[i];

    }
    for(int i=0; i < 15; i++){
        printf("%d + %d = %d\n", vetorUM[i], vetorDOIS[i], vetorTRES[i]);
    }

    return 0;
}
