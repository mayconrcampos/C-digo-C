#include <stdio.h>

float convertepeso(float x){
    float gramas;
    gramas = x * 1000;
    return gramas;
}
int main(){
    float opc, peso;

    do
    {
        printf("Digite o peso em (kg): ");
        scanf("%f", &peso);

        printf("%.2fkg convertido em gramas = %.2fg\n",peso, convertepeso(peso));
    } while (opc == 0);
    
    return 0;
}
