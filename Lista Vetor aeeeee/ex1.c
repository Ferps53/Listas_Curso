#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[6];

    for(int i = 1; i <= 6; i++ ){
        printf("Faltam %d numeros para serem digitados \n", (6-i+1));
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    system("cls");

    for(int i = 1; i <= 6; i++ ){

        printf("%d \n", vetor[i]);
    }

return 0;
}
