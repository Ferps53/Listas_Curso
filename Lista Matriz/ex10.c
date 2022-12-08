#include <Stdio.h>
#include <stdlib.h>

int main(){

    int soma = 0;
    int matriz[5][5];
    int matriz2[5][5];

         for(int i = 0;i < 5;i++){

            printf("coloque a linha %i : ",i);
            for(int j = 0;j < 5;j++){

                scanf("%i",&matriz[i][j]);
                                                    }
         }

            printf("\n");

          for(int i = 0;i < 5;i++){
            for(int j = 0;j < 5;j++){

                matriz2[i][j] = 2 * matriz[i][j];
                printf("%i ",matriz2[i][j]);
            }
                printf("\n");
         }



    return 0;
}
