#include <stdio.h>
#include <stdlib.h>
//Ponteiros
//Hardware/lógico/memória
int main(){

	int n;//variavel que guarda seu valor na memória

	//declaração
	int* p;//ponteiro é um valor que aponta para um endereço de memória

	printf("Informe um número: ");
	fflush(stdout);
	scanf("%d", &n);

	//inicializando o ponteiro
	p = &n;

	printf("O número informado foi: %d\n", n);

	printf("Endereço de memória: %d\n", &n);

	printf("Endereço do ponteiro: %p", p);

	return 0;
}
