#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int valorUser, valorCalc, Conta = 0;

    printf("Digite um numero: ");
    scanf("%d", &valorUser);

    for(valorCalc = 0; valorCalc <= valorUser; valorCalc++){
            if(valorCalc % 2 != 0){
                printf("%d, \n", valorCalc);
            }

    }
    printf("O numero digitado foi: %d", valorUser);
    return 0;

}



