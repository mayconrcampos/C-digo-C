#include <stdio.h>

int main(){
    float preco;
    int codigo;

    printf("Digite o preço: ");
    scanf("%f", &preco);
    printf("Digite o código de origem: ");
    scanf("%d", &codigo);

    switch (codigo){
    case 1:
        printf("COD de Origem: 1 - Procedência: Sul.\n");
        printf("Valor R$: %.2f\n", preco);
        break;
    case 2:
        printf("COD de Origem: 2 - Procedência: Norte.\n");
        printf("Valor R$: %.2f\n", preco);
        break;
    case 3:
        printf("COD de Origem: 3 - Procedência: Leste\n");
        printf("Valor R$: %.2f\n", preco);
        break;
    case 4:
        printf("COD de Origem: 4 - Procedência: Oeste\n");
        printf("Valor R$: %.2f\n", preco);
        break;
    case 5:
    case 6:
        printf("COD de Origem: %d - Procedência: Nordeste.\n", codigo);
        printf("Valor R$: %.2f\n", preco);
        break;
    default:
        printf("COD de Origem: %d - Procedência: IMPORTADO.\n", codigo);
        printf("Valor R$: %.2f\n", preco);
        break;
    }
    return 0;
}
