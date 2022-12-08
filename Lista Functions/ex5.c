#include<stdio.h>
#include <stdlib.h>

void exclamacao(int valor){

    int i, j;

    for(i = 1; i<=valor; i++){

        for(j = 0; j<i; j++){
            printf("! ");
        }
        printf("\n");
    }
}

int main(){

    int vUser;

    printf("Informe o valor: ");

    scanf("%d", &vUser);

    exclamacao(vUser);

    return 0;

}
