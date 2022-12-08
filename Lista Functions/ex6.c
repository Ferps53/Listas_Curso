#include<stdio.h>
#include <stdlib.h>

int soma20(int *valor){
    *valor += 20;
    return valor;

    }

int main(){

    int vUser = 0;

    printf("Informe uma quantia: ");
    scanf("%d", &vUser);
    soma20(&vUser);
    printf("O valor alterado eh: %d ", vUser);

    return 0;

}

