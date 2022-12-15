#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, i, valor;
	printf("Informe o tamanho do vetor: ");
	scanf("%d",&n);
	int *vetor = (int *) malloc(n*sizeof(int));
	if (vetor == NULL) {
		printf("Memoria Indisponivel\n\n");
		exit(0);
	}
	printf("Informe os valores do vetor\n");
	for(i=0; i<n; i++) {
		printf("Posicao do vetor[%d]: ",i);
		scanf("%d",&vetor[i]);
	}
	printf("Conteudo do vetor:\n");
	for(i=0; i<n; i++) {
		printf("%d  ",vetor[i]);
	}
return 0;
}
