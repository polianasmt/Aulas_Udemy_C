/*
 * Faça um programa que possua um vetor denominado A que armazene 6 números inteiros. O programa
deve executar os seguintes passos:
a) Atribula os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7;
b) Armazene em uma variável inteira simples a soma entre os valores das posições A[0], A[1] e A[5] do vetor
e mostre na tela esta soma;
c) Modifique o vetor na posição 4, atribuindo a esta posição o valor 100;
d) Mostre na tela cada valor do vetor A, um em cada linha.
 */

#include <stdio.h>

int main(){

	//poderia usar {} para incializar um vetor
	int A[6] = {1, 0, 5, -2, -5, 7};
	int soma = 0;

//	A[0] = 1;
//	A[1] = 0;
//	A[2] = 5;
//	A[3] = -2;
//	A[4] = -5;
//	A[5] = 7;

	soma = A[0] + A[1] + A[5];
	printf("%d\n", soma);

	A[4] = 100;

	for(int i = 0; i < 6; i++){
		printf("[%d] = %d\n", i, A[i]);
	}

	return 0;
}
