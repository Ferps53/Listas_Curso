#include <stdio.h>

int main(){
    int max, qNum = 0;
    printf("Digite a quantidade de numeros a inserir: ");
    scanf("%d", &qNum);
    printf("Digite %d numeros: \n", qNum);
    for(int count = 1; count <= qNum; count++){
        int vUser;
        scanf("%d", &vUser);
        if(vUser > max){
            max = vUser;
        }
    }
    printf("O max eh %d", max);
    return 0;
}





