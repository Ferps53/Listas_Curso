#include <stdio.h>
#include <stdlib.h>
#define LIN 3
#define COL 3
int main(){

    float matriz[LIN][COL] = {3.14, 12.2, 312, 23124, 45, 3.24, 124, 56.5, 5543};
    int *pointer;
    pointer = matriz;



    for(int i = 0; i < LIN; i++){
            for(int j = 0; j < COL; j++){
                    printf("    \nO endereco do elemento: %.2f e : %d \n"  , matriz[i][j], pointer++);
            }
    }

return 0;
}

