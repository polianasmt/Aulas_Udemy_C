/* Faça um programa que leia um vetor de 10 posições e atribua valor 0 para todos os elementos que
possuírem valores negativos.
*/

#include <stdio.h>

int main(){

	int vet[10];

	for(int i = 0; i < 10; i++){
		printf("[%d] - Número: ", i);
		fflush(stdout);
		scanf("%d", &vet[i]);
		if(vet[i] < 0){
			//printf(", %d = ", vet[i]);
			vet[i] = 0;
			//printf("%d", vet[i]);
		}
	}

	for(int i = 0; i < 10; i++){
		printf("\n[%d] = %d", i, vet[i]);

	}


	return 0;
}
