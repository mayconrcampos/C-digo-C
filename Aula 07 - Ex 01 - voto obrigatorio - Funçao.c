#include <stdio.h>
#include <stdlib.h>

int votacao(int idade);

int main(){
    int idade, opt;
    do{
        printf("Digite a idade do colaborador: ");
        scanf("%d", &idade);

        if(votacao(idade) == 1){
            printf("Voto obrigatório!\n");
        }else{
            printf("Voto não obrigatório!\n");
        }
        printf("Deseja digitar mais uma idade? 0- sair | 1 - Continuar.\n");
        scanf("%d", &opt);

    } while (opt != 0);
    

    return 0;
}
int votacao(int idade){
    if ((idade >= 18)&& idade < 70){
        return 1;
    }else{
        return 0;
    }
}
