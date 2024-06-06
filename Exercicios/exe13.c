/*
 * Faça um programa que tenha uma função que receba um vetor de inteiros como parâmetro e retorne o
maior valor.
 */
#include <stdio.h>
#include "ajuda.h"

int main(){

	int quant = 10;
	int vetor[quant];

	for(int i = 0; i < quant; i++){
		printf("[%d} - Número: ", i);
		fflush(stdout);
		scanf("%d", &vetor[i]);
	}

	int maior = maior_num(vetor, quant);


	printf("\n");
	printf("O maior número é: %d", maior);
	return 0;
}
