#include <stdio.h>

void menu(){
    int opc;
    printf("Olár! Sou um pequeno Menu!\n");
    printf("Digite sua opção.\n");
    printf("1. Ir ao submenu\n");
    printf("0. sair\n");
    scanf("%d", &opc);
    switch (opc){
        case 0:
            printf("Você escolheu sair! Thau!\n");
            break;
        case 1:
            submenu();
            break;
        default:
            printf("Opção inválida!");
            break;
    }
}
void submenu(){
    int opc;
    printf("Bem vindo ao submenu!\n");
    printf("Digite sua opção.\n");
    printf("1. Volta ao menu\n0. Sair\n");
    scanf("%d", &opc);
    switch (opc){
        case 0:
            printf("Tchauzinho!");
            break;
        case 1:
            menu();
            break;
        default:
            printf("Opção inválida!");
            break;
    }
}
int main(){
    menu();

    return 0;
}
