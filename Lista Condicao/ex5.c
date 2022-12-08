#include <stdio.h>
#include <stdlib.h>

int main(){
    float vUser = 0;

    printf("Escreva um numero:\n ");
    scanf("%f", &vUser);

    system("cls");

    if(vUser > 0 ? printf("Quadrado: %.2f   Raiz: %.2f  Numero informado: %.2f ", vUser*vUser, sqrt(vUser), vUser) : printf("Numero menor ou igual a zero"));

    return 0;

}


