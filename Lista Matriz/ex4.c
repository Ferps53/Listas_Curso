#include <stdio.h>
#include <stdlib.h>

int printRandoms(int lower, int upper,
                            int count)
{
    int i;
    for (i = 0; i < count; i++) {
        int num = (rand() %
        (upper - lower + 1)) + lower;
        return num;
    }
}

int main(){

    int matriz[4][4];
    int qntd10 = 0;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            matriz[i][j] = printRandoms(0,15,1);
        }
    }

     for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("%d ", matriz[i][j]);
            if(matriz[i][j]>10){
                qntd10++;
            }
        }
    }
printf("\n\n Quantidade de valores maiores que 10: %d", qntd10);
return 0;
}


