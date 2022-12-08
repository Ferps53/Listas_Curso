#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[8];
    int x, y, soma = 0.0;

    printf("digite um valor de 1 a 8 para X: ");
    scanf("%d", &x);

    printf("digite um valor de 1 a 8 para Y: ");
    scanf("%d", &y);

    system("cls");

    for(int i = 1; i <= 8; i++ ){
        printf("Faltam %d numeros para serem digitados \n", (8-i+1));
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    system("cls");

    soma = vetor[x] + vetor[y];

    printf("A soma da Pos X e Pos Y e: %d", soma);
return 0;
}


