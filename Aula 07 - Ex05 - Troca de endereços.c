#include <stdio.h>

int trocar(int *a, int *b);

int main(){
    int a, b;
    a = 10;
    b = 20;

    printf("A = %d - B = %d\n", a, b);
    trocar(&a, &b);
    printf("A = %d - B = %d\n", a, b);
    return 0;
}
int trocar(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}
