#include <stdio.h>

int divisivel(int x);

int main(){
    int num;
    printf("Digite um número: \n");
    scanf("%d", &num);

    if(divisivel(num) == 1){
        printf("%d é divisível por 3 e por 5.\n", num);
    }else{
        printf("%d não é divisível por 3 e por 5.\n", num);
    }
    return 0;
}
int divisivel(int x){
    if((x % 5 == 0)&& x % 3 == 0){
        return 1;
    }else{
        return 0;
    }
}
