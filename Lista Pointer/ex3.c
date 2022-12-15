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

     printf("\nENDERECOS DO ARRAY:\n");

     pointer = array;

     for(i = 0; i < SIZE; i++){
           printf("\nO numero dobrado %d : Posicao = %d",array[i]*2, pointer);
        pointer++;
     }
return 0;
}
