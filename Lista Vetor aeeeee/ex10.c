#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 0, i, j, w, flag;
    int vetor[10], iguais[10];

    for (i = 1; i < 10; i++)
    {
        printf("Faltam %d numeros : ", 10 - i + 1);
        scanf("%d", &vetor[i]);
        system("cls");
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            flag = 0;
            if (vetor[i] == vetor[j] && i != j)
            {
                for (w = 0; w < 10; w++)
                {
                    if (iguais[w] == vetor[j])
                        flag = 1;
                }
                if (flag == 0)
                {
                    iguais[a] = vetor[i];
                    a++;
                }
            }
        }
    }
    printf("Numeros Repetidos ==  ");
    for (i = 0; i < a; i++)
    {
        printf("%d ", iguais[i]);
    }
    return 0;
}
