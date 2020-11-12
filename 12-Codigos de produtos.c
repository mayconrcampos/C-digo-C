#include <stdio.h>

int main(){
    int codigo;

    printf("Digite o código do produto: \n");
    scanf("%d", &codigo);

    switch (codigo){
    case 1:
        printf("COD: %d - Classificação: Alimento não Perecível\n", codigo);
        break;
    case 2:
    case 3:
    case 4:
        printf("COD: %d - Classificação: Alimento Perecível\n", codigo);
        break;
    case 5:
    case 6:
        printf("COD: %d - Classificação: Vestuário\n", codigo);
        break;
    case 7:
        printf("COD: %d - Classificação: Higiene Pessoal\n", codigo);
        break;
    default:
        printf("COD: %d - Classificação: IMPORTADO!\n", codigo);
    }

    return 0;
}
