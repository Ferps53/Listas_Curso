#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[10];
    int tamanhoArray = 10;
    int soma, qntd = 0;;
    for(int i = 1; i <= tamanhoArray; i++){
        printf("Faltam %d valores\n", tamanhoArray-i+1);
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
        system("cls");
    }

    for(int i = 1; i <= tamanhoArray; i++){
        if(vetor[i]> 0 ? soma += vetor[i] : qntd++ );
    }

    printf("A soma dos valores positivos: %d\n", soma);
    printf(" A quantidade de valores negativos: %d\n", qntd);


return 0;
}

