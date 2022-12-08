#include <stdio.h>
#include <stdlib.h>

int main(){
    int dia = 0;

    printf("Informe o numero do dia:\n ");
    scanf("%d", &dia);

       system("cls");

    switch (dia){
    case 1:
        printf("Domingo");
    break;
    case 2:
        printf("Segunda-feira");
    break;
    case 3:
        printf("Terca-feira");
    break;
    case 4:
        printf("Quarta-feira");
    break;
    case 5:
        printf("Quinta-feira");
    break;
    case 6:
        printf("Sexta-feira");
    break;
    case 7:
        printf("Sadabo ");
    break;

    default:
        printf("Erro 404\a\n");
    }




    return 0;

}





