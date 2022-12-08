#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int v1, v2 = 0;

    printf("Escreva dois valores ");
    scanf("%d %d", &v1,&v2);

    if(v1>v2){
        printf("O valor 1 eh maior%d ", v1);
    } else{
        printf("O valor 2 eh maior %d ", v2);
    }
    return 0;

}

