#include <stdio.h>

int main(){
    int dia;
    printf("-=-= Dias da semana -=-=\n");
    printf("1 - Domingo\n");
    printf("2 - Segunda-Feira\n");
    printf("3 - Terça-Feira\n");
    printf("4 - Quarta-Feira\n");
    printf("5 - Quinta-Feira\n");
    printf("6 - Sexta-Feira\n");
    printf("7 - Sábado\n");
    printf("-=-=-=-=-Faça sua escolha =-=-=-=-=\n");
    printf("Opção: 1-2-3-4-5-6-7: ");
    scanf("%d", &dia);

    switch (dia){
        case 1:
            printf("Domingo!\n");
            break;
        case 2:
            printf("Segunda-Feira\n");
            break;
        case 3:
            printf("Terça-Feira\n");
            break;
        case 4:
            printf("Quarta-Feira\n");
            break;
        case 5:
            printf("Quinta-Feira\n");
            break;
        case 6:
            printf("Sexta-Feira\n");
            break;
        case 7:
            printf("Sábado!\n");
            break;
        default:
            printf("Dia Inexistente! Tente somente Números de 1 a 7.\n");
            break;
        }
    return 0;
}
