#include <stdio.h>

int main(){
    int vUser, soma = 0;

    printf("Digite 10 numeros: \n");
    for(int count = 1; count <=10; count++){
        scanf("%d", &vUser);
        soma += vUser;
        if(count == 10){
            printf("Soma = %d", soma);
        }
    }
    return 0;
}
