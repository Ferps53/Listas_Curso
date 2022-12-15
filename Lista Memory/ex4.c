
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, i, valor;
	do{
        printf("Informe o tamanho do vetor: ");
        scanf("%d",&n);
    }while(n < 0);

	int *vetor = (int *) malloc(n*sizeof(int));
	if (vetor == NULL) {
		printf("Memoria Indisponivel\n\n");
	}
	for(i=0; i<n; i++) {
		vetor[i] = i;
	}
	printf("Conteudo do vetor:\n");
	for(i=0; i<n; i++) {
		printf("%d  ",vetor[i]);
	}
return 0;
}

