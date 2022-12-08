#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[10];
    int tamanhoArray = 10;
    int max = 0;
    int min = 99999;
    for(int i = 1; i <= tamanhoArray; i++){
        printf("Faltam %d valores\n", tamanhoArray-i+1);
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
        system("cls");
    }

    for(int i = 1; i <= tamanhoArray; i++){
        if (vetor[i] > max){
            max = vetor[i];
            printf("%d\n", max);
        } else if(vetor[i] < min){
            min = vetor[i];
            printf("%d\n", min);
            system("cls");
        }
    }

    printf("O maior valor e %d\n", max);
    printf("O menor valor e %d\n", min);


return 0;
}
