#include <stdio.h>
#include <stdlib.h>

int main(){

    int matriz[4][4] = {100,2,3,4,5,6,99,8,9,10,12,13,14,15,16};
    int max = 0;
    int v1, v2;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(matriz[i][j] > max){
                max = matriz[i][j];
                v1 = i;
                v2 = j;
                system("cls");
                printf("Posicao: %d %d \n", v1, v2);
                printf("Maior numero = %i", max);
            }
        }
    }
return 0;
}

