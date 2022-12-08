#include <stdio.h>
#include <stdlib.h>

int main(){
    int op;
    float vUser1, vUser2, res;
    printf("0 = + |");
    printf("1 = - |");
    printf("2 = * |");
    printf("3 = / \n");

    printf("Informe a operacao: ");
    scanf("%d", &op);

    printf("Informe o primeiro numero: ");
    scanf("%f", &vUser1);

    printf("Informe o segundo numero: ");
    scanf("%f", &vUser2);

    system("cls");

    switch (op){
    case 0:
        res = vUser1 + vUser2;
        printf("O Resultado e: %.2f", res);
    break;
    case 1:
        res = vUser1 - vUser2;
        printf("O Resultado e: %.2f", res);
    break;
    case 2:
        res = vUser1 * vUser2;
        printf("O Resultado e: %.2f", res);
    break;
    case 3:
        res = vUser1 / vUser2;
        printf("O Resultado e: %.2f", res);
    break;

    default:
        printf("Erro 404\a\n");
    }

    return 0;

}





