#include <stdio.h>

int main(){
    int contagem = 0;

    for(contagem = 10; contagem >= 0; contagem--){
        printf("%d\n", contagem);
        if(contagem == 0){
            printf("\nFIM!");
        }
    }


    return 0;
}
