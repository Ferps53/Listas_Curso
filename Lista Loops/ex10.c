#include <stdio.h>

int main(){
    int vUser = 0;
    float media, soma = 0.0;

    printf("Digite 10 numeros positivos: \n");
    for(int count = 1; count <=10; count++){
        scanf("%d", &vUser);
        if(vUser >= 0){
            soma += vUser;
            if(count == 10){
                media = soma/10;
                printf("Media = %f", media);
            }
        }else{
            count--;
            printf("O numero %d eh invalido, digite novamente\n", vUser);
        }

    }
    return 0;
}

