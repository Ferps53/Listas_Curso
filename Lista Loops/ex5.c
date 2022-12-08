#include <stdio.h>

int main()
{
    int i, soma=0;

    for(i=0; i<=50*2; i+=2)
    {
        soma += i;
    }

    printf("Soma = %d", soma);

    return 0;
}



