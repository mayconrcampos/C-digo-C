#include <stdio.h>
#include <math.h>

int main(){
    int resultado, numero;

    printf("Digite o número: ");
    scanf("%d", &numero);

    resultado = pow(numero, 2);
    
    printf("%d elevado a 2 é igual a : %d", numero, resultado);

    return 0;
}
