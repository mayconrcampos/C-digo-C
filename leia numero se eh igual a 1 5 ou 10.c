#include <stdio.h>

int main(){
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);

    switch (numero){
    case 1:
        printf("Um!\n");
        break;
    case 5:
        printf("Cinco!\n");
        break;
    case 10:
        printf("Dez!\n");
        break;
    default:
        printf("%d\n", numero);
        break;
    }

    return 0;
}
