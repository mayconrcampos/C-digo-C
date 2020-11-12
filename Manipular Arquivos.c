#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *arquivo;
    char texto[100];

    int opt, conta;

    arquivo = fopen("arquivo.txt", "a");

    opt = 1;
    while (opt != 0){
        printf("Digite uma frase: \n");
        gets(texto);
  
        fprintf(arquivo, "%s\n", texto);
        __fpurge(stdin);

        printf("continua? 1 ou 0?");
        scanf("%d", &opt);
        __fpurge(stdin);
    }

    fclose(arquivo);
    printf("Fim da gravação.\n");

    printf("Início da Leitura.\n");

    arquivo = fopen("arquivo.txt", "r");

    conta = 1;
    if(arquivo != NULL){
        while(!feof(arquivo)){
            fgets(texto, 100, arquivo);
            printf("Item %d: %s", conta, texto);
            conta++;
        }
    }else{
        printf("Arquivo não existe.\n")
    }
    
    fclose(arquivo);
    
    return 0;
}
