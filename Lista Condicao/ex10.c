#include <stdio.h>
#include <stdlib.h>

int main(){
    int vUser;

    printf("Informe um valor: ");
    scanf("%d", &vUser);

    system("cls");

    if(vUser %3 == 0 && vUser %5 == 0){
            printf("Valor divisivel por ambos\a \n");

    }else if(vUser %3 == 0 || vUser %5 == 0){
            printf("Valor e divisivel um dos valores\a \n");

    }else{
        printf("Valor divisivel por nenhum dos valores \a");
    }

return 0;
}
