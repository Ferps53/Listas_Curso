#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[10];
    int qntdPares = 0.0;

    for(int i = 1; i <= 8; i++ ){
        printf("Faltam %d numeros para serem digitados \n", (8-i+1));
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    system("cls");

     for(int i = 8; i >= 1; i--){
        if(vetor[i] %2==0){
            printf("%d", vetor[i]);
            qntdPares++;
        }
    }
    system("cls");
    printf("A quantidade de pares encontrados no vetor = %d", qntdPares);


return 0;
}


