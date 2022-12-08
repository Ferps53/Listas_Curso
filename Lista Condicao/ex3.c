#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int v1= 0;

    printf("Escreva um valor ");
    scanf("%d", &v1);

    if(v1%2==0){
        printf("O valor eh par %d ", v1);
    }
     else{
        printf("O valor eh impar %d ", v1);
    }
    return 0;

}

