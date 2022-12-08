#include<stdio.h>
#include <stdlib.h>

int somaArray (int *valor)
{
  int i;
  int soma = 0;

  //fazendo a somatória das notas
  for (i = 0; i <= 9; i++)
    soma = soma + valor[i];

  //dividindo pela quantidade de elementos n

  //retornando a média
  return soma;
}


int main(){

    int vUser[10];
    int soma;
    for(int i = 0; i <= 9; i++){
        printf("faltam %d valores \n", 10 - i);
        printf("Informe uma quantia: ");

        scanf("%d", &vUser[i]);
        system("cls");
    }

    soma = somaArray(vUser);

     printf("A soma de todos os valores do Array eh: %d", soma);

    //printf("\n O valor alterado eh: %d ", vUser);

    return 0;
}
