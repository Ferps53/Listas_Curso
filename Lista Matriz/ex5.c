#include <stdio.h>
#include <stdlib.h>

int main(){

    int matriz[4][4];
    int negativos;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("Informe 16 valores: ");
            scanf("%d", &matriz[i][j]);
            }
        }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(matriz[i][j] > 0){
                    negativos++;
            }
        }
    }
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("%d ", matriz[i][j]);
            if(j == 3){
                printf(" \n");
            }
        }
    }

    printf(" A qntd de numeros negativos e: %d", negativos);

return 0;
}

