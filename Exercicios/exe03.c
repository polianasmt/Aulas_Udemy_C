//leia um número e imprima o resultado do quadrado desse numero

#include <stdio.h>

int main(){

	int num, quad;

	printf("Insira um numero: ");
	fflush(stdout);
	scanf("%d", &num);
	fflush(stdout);

	quad = num * num;

	printf("O quadrado do numero e: %d", quad);


	return 0;
}
