#include <stdio.h>
#include <stdlib.h>

int main(){

      int tamanhoArray = 10;
    float array[10] = {3.14, 12.2, 312, 23124, 45, 3.24, 124, 56.5, 5543, 10};
    int *pointer;
    pointer = array;



    for(int i = 0; i < tamanhoArray; i++){
            printf("O endereco do elemento: %.2f e : %d \n"  , array[i], pointer++);
    }

return 0;
}
