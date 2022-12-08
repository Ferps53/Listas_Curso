#include<stdio.h>
#include <stdlib.h>

int func(int *valor){
    if (*valor > 0){
        *valor *= 5;
    }
    else{
        *valor = 0;
    }

}

int main(){

    int vUser = 0;

    printf("Informe uma quantia: ");
    scanf("%d", &vUser);
    func(&vUser);
    printf("O valor alterado eh: %d ", vUser);

    return 0;

}

