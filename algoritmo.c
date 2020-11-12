#include <stdio.h>

int main(){
    int x;
    printf("Escreva o valor de x: ");
    scanf("%d", &x);

    if(x > 10 || x == 0){
        printf("É maior que 10 ou igual a 0\n");
    }
    
    return 0;
}
