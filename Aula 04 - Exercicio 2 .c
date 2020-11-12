#include <stdio.h>
#include <string.h>

int main(){
    int filhos[100];
    float salarios[100];
    int ind, filho, totalFilhos, conta;
    float mediaSalario, mediaFilhos, percentual;
    float salario, totalSalario;

    for(ind=0; ind < 100; ind++){
        salarios[ind] = 0;
        filhos[ind] = 0;
    }

    do{
        printf("Nº Filhos: ");
        scanf("%d", &filho);
        printf("Salário:R$: ");
        scanf("%f", &salario);
        if(salario < 0){
            printf("Fim da pesquisa:\n");
            break;
        }
        for(ind=0 ; ind < 100 ; ind++){
            if(salarios[ind] == 0){
                salarios[ind] = salario;
                filhos[ind] = filho;
                totalSalario = totalSalario + salarios[ind];
                totalFilhos = totalFilhos + filhos[ind];
                conta++;
                break;
            }
        }
    } while (salario >= 0);

    for(ind=0; ind< 100; ind++){
        if(salarios[ind] != 0)
            printf("Pos: %d : Salario: %.2f : Filhos: %d.\n",ind, salarios[ind], filhos[ind]);
    }
    printf("Media Salarial: R$%.2f.\n", totalSalario / conta);
    mediaFilhos = totalFilhos / conta;
    printf("Média de Filhos: %.2f.\n", mediaFilhos);
    printf("Total Salarios: %.2f.\n", totalSalario);
    
    return 0;
}
