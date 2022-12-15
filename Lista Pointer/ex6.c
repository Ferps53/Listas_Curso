#include <stdio.h>
#include <stdlib.h>

int main(){


    int a; // Pq tem que ter uma declaração para cada um deles???  Ponteiros são muito confusos!!!
    int *b = &a;
    int **c = &b;
    int ***d = &c;

    printf("Digite um numero inteiro: ");

    scanf("%d", &a);

    printf("\t%d\n", a);
    printf("\t%d\n", (*b*2));
    printf("\t%d\n", (**c*3));
    printf("\t%d\n", (***d*4));


return 0;
}

