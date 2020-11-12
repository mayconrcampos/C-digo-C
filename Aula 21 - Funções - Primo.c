#include <stdio.h>

int primo(int x){
    int ind;
    int conta = 0;

    printf("Divisores de %d = ", x);
    for(ind=1; ind <= x; ind++){
        if(x % ind == 0){
            printf("%d ", ind);
            conta++;
        }
    }
    if(conta > 2){
        return 0;
    }else{
        return 1;
    }
}
int main(){
    int opc, n;

    do{
        printf("Digite um número para ver se é primo: ");
        scanf("%d", &n);
        
        if(primo(n) == 1){
            printf("É Primo!\n\n");
        }else{
            printf("Não é primo!\n\n");
        }
        
        printf("Deseja continuar? 1-SIM | 0-NÃO: ");
        scanf("%d", &opc);

    } while (opc != 0);
    
    return 0;
}
