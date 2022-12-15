#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

void preencheVetor(int *vetor, int elemento) {
	int i = 0;

	while(i<SIZE) {
		*vetor = elemento;
		vetor++;
		i++;
		elemento++;
	}
}

void imprimeVetor(int *vetor) {
	int i;

	for (i=0; i<SIZE; i++)
		printf("\n[%d]: %d", (i), *(vetor+i));
}

int main() {
	int vetor[SIZE], elemento = 1;

	preencheVetor(vetor, elemento);
	imprimeVetor(vetor);


	return 0;
}
