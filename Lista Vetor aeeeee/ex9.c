#include <stdio.h>
#include <stdlib.h>

int main(){


    int vetor[100];
    int valor=0;
    int tamanhoArray = 100;

    for(int i = 1; i <= tamanhoArray; i++){
        valor++;
        if(valor %7 !=0){
            vetor[i] = valor;
        }
    }
    for(int i = 1; i <= tamanhoArray; i++){
        printf("%d, ", vetor[i]);
    }

}
