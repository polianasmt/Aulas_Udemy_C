#include <stdio.h>

//operações com binários

int main(){

	int valor = 2;
	printf("Valor: %d\n", valor);

	valor = valor << 2;
	printf("Valor deslocado para esquerda: %d\n", valor);

	valor = 2;
	valor = valor >> 1;
	printf("Valor deslocado para direita: %d\n", valor);

	valor = 2;
	valor = ~valor;
	printf("Valor com valores trocados: %d\n", valor);


	return 0;
}
