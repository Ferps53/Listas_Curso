#include <stdio.h>
#include <stdlib.h>

int main(){

    int matriz[3][3];
    int soma, count = 0;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){

            printf("Informe %d valores: ", 9 - count);
            scanf("%d", &matriz[i][j]);
            system("cls");
            count++;
            }
        }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", matriz[i][j]);
            if(i == j){
                soma += matriz[i][j];
            }if(j == 2){
                printf("\n");
            }
        }
    }

    printf("\n\n A soma eh: %d", soma);


return 0;
}


