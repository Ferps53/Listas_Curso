 #include<stdio.h>
int main()
{
    int num,i,c=0;
    printf("Escreva um numero inteiro e positivo: ");
    scanf("%d", &num);
    for(i=1;i<=num;i++){
        if(num%i==0){
        printf("Divisor: %d \n", i);
        }
    }
    printf("Numero de divisores e %d",c);
}
