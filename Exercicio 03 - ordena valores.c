#include <stdio.h>

int main(){
    int num1, num2, troca;
    
    printf("Digite dois valores inteiros: ");
    scanf("%d%d", &num1, &num2);

    if (num1 > num2){
        troca = num1;
        num1 = num2;
        num2 = troca;
        printf("Os valores foram ordenados para %d e %d: \n", num1, num2);
    }else{
        if(num1 < num2){
            printf("Não foi necessário ordenar os valores: %d e %d \n", num1, num2);

        }else{
            printf("Os números são exatamente iguais! %d e %d :\n", num1, num2);
        }
        
    }

    return 0;
}
