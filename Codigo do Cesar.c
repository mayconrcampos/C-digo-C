#include <stdio.h>
#include<stdlib.h>
#include<string.h>
struct contatos{
    int codigo;
    char nome[30],telefone[15],email[30];
    
};

int main (){
    int op,contador = 0, i;
    struct contatos pessoa[5];
    do{
    printf("escolha uma opção\n");
    printf("digite 1 inserir novo cadastro;\n");
    printf("digite 2 para mostar todos cadastro\n");
    printf("digite 0 para sair\n\n");
    scanf ("%d", &op);
    system("clear");
    setbuf(stdin,NULL);
    switch (op)
    {
    case 1:
        if(contador <= 4){

        printf("cadastro de contato\n");
        printf("codigo:%d\n",contador);
        printf("imforme o nome:\n");
        fgets(pessoa[contador].nome,30,stdin);
        setbuf(stdin,NULL);
        printf("informe o telefone:\n ");
        fgets(pessoa[contador].telefone,15, stdin);
        setbuf(stdin,NULL);
        printf("informe o email:\n ");
        /*ussa ffush(stdin); usado no windows
         para lipar a cache do teclado
        usado para cada um fgets*/
        fgets(pessoa[contador].email,100,stdin);
        setbuf(stdin,NULL);
        contador++;

        }else {
            printf("agenda lotada\n\n");
        }
       
        printf("\n");
     break;
    case 2:if (contador == 0){
        printf("agenda vazia...\n\n");
    }else{
         printf("mostar lista de cadastrado na agenda\n");

        for (i = 0 ;i < contador; i++) {
            printf("codigo: %d\n",i);
            printf("nome: %s",pessoa[i].nome);
            printf("telefone: %s",pessoa[i].telefone);
            printf("email: %s\n",pessoa[i].email);
        }

    }
       
        
     break;
    case 0:
        printf("encerramento do programa\n");
       
    default:
        printf("Erro: opção inválida!\n\n");
    
    }    
    }while (op != 0);
    
      return(0);
}