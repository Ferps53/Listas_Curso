#include <stdio.h>

int main(){
    int vUser = 0;
    float media, soma = 0.0;

    printf("Digite 10 numeros: \n");
    for(int count = 1; count <=10; count++){
        scanf("%d", &vUser);
        soma += vUser;
        if(count == 10){
                media = soma/10;
            printf("Media = %f", media);
        }
    }
    return 0;
}

