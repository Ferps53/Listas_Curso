#include <stdio.h>
#include <stdlib.h>

float Conv(float Fahrenheit){
    return ((Fahrenheit -32) /1.8);
}

int main(){
    float Fahrenheit = 0;
    printf("Escreva um valor em Fahrenheit: ");
    scanf("%f", &Fahrenheit);
    printf("O valor correspondente em Celsius eh: %f", Conv(Fahrenheit));

return 0;
}
