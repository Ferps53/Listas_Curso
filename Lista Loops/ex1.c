#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int valorUser, valorCalc = 0;

    printf("Escreva um numero inteiro positivo: ");
    scanf("%d", &valorUser);

    for(valorCalc = 0; valorCalc <= valorUser; ++valorCalc){
        printf("%d ", valorCalc);
    }
    return 0;

}



