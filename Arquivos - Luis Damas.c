#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    FILE * fp;
    char nome[100];
    int nota;

    if (argc != 2){
        printf("Sintaxe: \n\n%s Arquivo\n\n", argv[0]);
        exit(1);
    }
    if((fp = fopen(argv[1], "r"))== NULL){
        printf("Impossível abrir arquivo.\n");
    }

    while (fscanf(fp, "%s %d", nome, &nota)!= EOF){
        printf("%s %d\n", nome, nota);
    }
    fclose(fp);
    




    return 0;
}