#include <Stdio.h>
#include <stdlib.h>

int main(){

    int soma = 0;
    int matriz[10][10];

         for(int i = 0;i < 10;i++){
            for(int j = 0;j < 10;j++){

                scanf("%d ",&matriz[i][j]);

               }
               printf("\n");
            }

             for(int i = 0;i < 10;i++){
                for(int j = 0;j < 10;j++){

                    if(i < j){
                        matriz[i][j] =  2*i + 7*j – 2;

                    }else if(j < i){

                         matriz[i][j] =   4*i *3 + 5* j* 2 + 1;
                    }else{

                        matriz[i][j] =  3*i * 2 – 1;

                    }
               }
            }

                      for(int i = 0;i < 10;i++){
                for(int j = 0;j < 10;j++){

                            printf("%i",matriz[i][j]);
                        }
                        printf("\n");
                    }

    return 0;
}
