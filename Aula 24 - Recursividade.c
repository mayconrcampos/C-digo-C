#include <stdio.h>

int fatorial(int x);

int main(){
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("%d\n", fatorial(num));

    return 0;
}
int fatorial(int x){
    if(x == 0){
        return 1;
    }else{
        return x * fatorial(x-1);
    }
}
