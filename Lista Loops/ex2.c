#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int valorUser, valorCalc = 0;

    scanf("%d", &valorUser);

    for(valorCalc = valorUser; valorCalc >= 0; valorCalc--){
        printf("%d ", valorCalc);
    }
    return 0;

}



