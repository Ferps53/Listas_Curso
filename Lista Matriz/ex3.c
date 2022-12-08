#include <stdio.h>
#include <stdlib.h>


int main(){

    int matriz[5][5];

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if( i == j){
                matriz[i][j] = rand();
            }else{matriz[i][j] = 0;}
        }
    }

     for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("%d, ",  matriz[i][j]);
            if(j==3){
                printf("\n");
            }
        }
    }
 return 0;
}


