#include <stdio.h>
#include <stdlib.h>

int main(){
    float taxa, produto = 0;
    int estado = 0;

    printf("Informe o preco do produto:\n ");
    scanf("%f", &produto);

    printf("0 = MG |");
    printf("1 = SP |");
    printf("2 = RJ |");
    printf("3 = MS \n");
    printf("Informe o estado:\n ");

    scanf("%d", &estado);

    system("cls");

    switch (estado){
    case 0:
        taxa = 0.07;
        printf("O valor do produto com taxa: %.2f    Valor sem taxa: %.2f", produto+(taxa*produto), produto);
    break;
    case 1:
        taxa = .12;
        printf("O valor do produto com taxa: %.2f    Valor sem taxa: %.2f", produto+taxa*produto, produto);
    break;
    case 2:
        taxa = 0.15;
        printf("O valor do produto com taxa: %.2f    Valor sem taxa: %.2f", produto+taxa*produto, produto);
    break;
    case 3:
        taxa = 0.08;
        printf("O valor do produto com taxa: %.2f    Valor sem taxa: %.2f\n", produto+taxa*produto, produto);
    break;

    default:
        printf("Erro 404\n");
        printf("Estado nao existe no banco de dados \a\n");
    }




    return 0;

}



