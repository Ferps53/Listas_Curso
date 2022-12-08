#include <stdio.h>
#include <stdlib.h>

int exp(int x, int y) {
	if (y == 1) return x;
	else return (x*exp(x, y-1));
}

int main() {
	int x, y = 0;

	printf("\nInforme a base: ");
	scanf("%d", &x);

	printf("Informe a potencia: ");
	scanf("%d", &y);

	printf("\nResultado: %d.\n\n", exp(x, y));

	return 0;
}
