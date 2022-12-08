#include <stdio.h>

int main(){

    int num1, num2 = 0;

    printf("Escreva dois numeros inteiros positivos: ");
    scanf("%d", &num1);
    scanf("%d", &num2);

    MaiorQ(&num1, &num2);

    return 0;
}

int MaiorQ(int* a, int* b){
    if(a>b){
        printf("o numero %d eh maior\n", *a);
        return a;
    } else{
        ("o numero %d eh maior\n", *b);
        return b;
    }

}
