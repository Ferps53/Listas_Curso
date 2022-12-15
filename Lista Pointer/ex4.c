#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main (){
    int array[SIZE], i;
    int *pointer;
    pointer = array;

    printf("\tDigite %d elementos:\n",SIZE);

    for(i = 0; i < SIZE; i++){
        printf("%d: ",i+1);
        scanf("%d", &array[i]);
    }
    system("cls");
    printf("\n\tELEMENTOS:\n\n");
    for(i = 0; i < SIZE; i++){
        printf("%d  ",array[i]);
    }

    printf("\n\nENDERECOS DO ARRAY:\n");

    for(i = 0; i < SIZE; i++){
         printf("%d : %d : %d\n",i+1, array[i], pointer++);
     }

     printf("\nENDERECOS DO ARRAY PAR:\n");

     pointer = array;

     for(i = 0; i < SIZE; i++){
        if(array[i] %2 == 0){
           printf("\nNumero %d eh par : Posicao = %d",array[i], pointer);
        }
        pointer++;
     }
return 0;
}
