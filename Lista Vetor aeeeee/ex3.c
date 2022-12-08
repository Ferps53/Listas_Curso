#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[5];
    float valor = 0.0;
    float media;

    for(int i = 1; i <= 5; i++ ){
        printf("Faltam %d numeros para serem digitados \n", (5-i+1));
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    system("cls");

    for(int i = 5; i >= 1; i--){

        printf(" %d \n", vetor[i]);
        valor = valor + vetor[i];
    }

    media = valor / 5;

    printf(" Media = %.2f", media);
return 0;
}

