#include <stdio.h>

int main(){
    float peso, altura, imc;

    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if(imc < 17){
        printf("Seu IMC é: %.2f - Muito abaixo do peso!\n", imc);
    }else if ((imc >= 17) && imc <= 18.49){
        printf("Seu IMC é: %.2f - Abaixo do peso!\n", imc);
    }else if((imc >= 18.5) && imc <= 24.99){
        printf("Seu IMC é: %.2f - Peso Normal!\n", imc);
    }else if((imc >= 25) && imc <= 29.99){
        printf("Seu IMC é: %.2f - Acima do Peso!\n", imc);
    }else if((imc >= 30) && imc <= 34.99){
        printf("Seu IMC é: %.2f - Obesidade - I\n", imc);
    }else if((imc >= 35) && imc <= 39.99){
        printf("Seu IMC é: %.2f - Obesidade - II - Severa!\n", imc);
    }else if(imc >= 40){
        printf("Seu IMC é: %.2f - Obesidade - III - Mórbida!\n", imc);
    }
    return 0;
}
