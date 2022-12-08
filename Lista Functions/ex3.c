#include <stdio.h>
#include <stdlib.h>

int Conv(int h, int min, int s){
    return (((h * 3600)+ min * 60) + s);
}

void main(){
    int hora, minuto, segundo = 0;
    printf("Escreva um valor em horas: ");
    scanf("%d", &hora);
    printf("Escreva um valor em minutos: ");
    scanf("%d", &minuto);
    printf("Escreva um valor em segundos: ");
    scanf("%d", &segundo);
    printf("O valor correspondente em Segundos eh: %d", Conv(hora, minuto, segundo));
}

