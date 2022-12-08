#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int salario, emp= 0;

    printf("Escreva o salario:\n ");
    scanf("%d", &salario);

     printf("Escreva o valor de uma prestacao:\n ");
    scanf("%d", &emp);

    system("cls");

    if(emp < salario*0.2 ? printf("Emprestimo Concedido") : printf("Emprestimo NAO Concedido"));

    return 0;

}

