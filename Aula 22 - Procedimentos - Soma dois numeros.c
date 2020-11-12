#include <stdio.h>

void somadoisnumeros(){
    int n1, n2, soma;
    printf("Digite dois números inteiros: \n");
    scanf("%d%d", &n1, &n2);
    printf("%d + %d = %d\n",n1, n2, soma);
}
int main(){
     int opc;
    
    do{
        somadoisnumeros() ;
        printf("Deseja continuar? 1-SIM | 0-NÃO:");
        scanf("%d", &opc); 
           
    } while (opc != 0);
    return 0;
}
