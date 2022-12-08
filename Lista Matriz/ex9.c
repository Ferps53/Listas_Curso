#include <stdio.h>
#include <stdlib.h>

int main(){

    int soma = 0;
    int matriz[3][3];

         for(int i = 0;i < 3;i++){

            printf("coloque a linha %d : ",i);
            for(int j = 0;j < 3;j++){

                scanf("%d",&matriz[i][j]);

                if(i+1 == j){

                    soma += matriz[i][j];
                }
                                    }
         }

         printf("soma da diagonal principal : %i",soma);

    return 0;
}
