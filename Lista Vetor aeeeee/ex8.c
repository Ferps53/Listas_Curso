#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){

    int vetorA[10], vetorB[10], vetorC[10];
    int tamanhoArray = 10;

    for(int i = 1; i <= tamanhoArray; i++){
        printf("Array A\n");
        printf("Faltam %d valores de %d \n", (tamanhoArray-i+1), tamanhoArray);
        printf("Informe os valores: ");
        scanf("%d", &vetorA[i]);
        system("cls");
    }

    for(int i = 1; i <= tamanhoArray; i++){
        printf("Array B\n");
        printf("Faltam %d valores de %d \n", (tamanhoArray-i+1), tamanhoArray);
        printf("Informe os valores: ");
        scanf("%d", &vetorB[i]);
        system("cls");
    }

    for(int i = 1; i <= tamanhoArray; i++){
        vetorC[i] = vetorA[i] + vetorB[i];
        printf("%d ", vetorC[i]);
        system("cls");
    }

    for(int i = 1; i <= tamanhoArray; i++){
        printf ("%d ", vetorC[i]);

    }

return 0;
}
