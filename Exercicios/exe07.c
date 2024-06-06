/*
 *Faça um programa que determine e mostre os cinco primeiros múltiplos de 3,
 *considerando números maiores que 0.
 */

#include <stdio.h>

int main(){

	int num = 3, multiplos = 0;

	printf("[ ");
	for(int i = 1; i <= 5; i++){
		multiplos = num * i;

		printf("%d ", multiplos);
	}

	printf("]");
	return 0;
}
