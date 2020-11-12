#include <stdio.h>

int main(){
    int n1, n2, n3;

    printf("Digite 3 numeros inteiros: ");
    scanf("%d%d%d", &n1, &n2, &n3);

    if ((n1 == n2) && n2 == n3){
        printf("%d é igual a %d\nque também é igual a %d. São três iguais\n", n1, n2, n3);
    }else if (n1 == n2){
        printf("%d é igual a %d.\nSão dois iguais. Primeiro e Segundo.\n",n1, n2);
    }else if (n1 == n3){
        printf("%d é igual a %d.\nSão dois iguais. Primeiro e terceiro.\n", n1, n3);
    }else if (n2 == n3){
        printf("%d é igual a %d.\nSão dois iguais. Segundo e terceiro.\n", n2, n3);
    }else{
        printf("Nenhum dos três números são iguais.\n");
    }
    return 0;
}
