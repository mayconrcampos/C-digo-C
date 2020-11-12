#include <stdio.h>

int main(){
    int num, cont, troca;
    printf("Digite o valor de N: ");
    scanf("%d", &num);
    troca = num;
    cont = 0;

    while (troca > 0){
        printf("%d - 2 = ", troca);
        troca = troca - 2;
        printf("%d\n", troca);
        if(troca > 0){
            cont++;
        }
    }
    printf("Foi possível subtrair 2 de %d por %d vezes.\n", num, cont);

    return 0;
}
