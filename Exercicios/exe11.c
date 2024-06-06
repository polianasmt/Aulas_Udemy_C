// Faça um programa que leia um vetor de 10 posições. Conte e mostre quantos valores pares ele possui.

#include <stdio.h>

int main(){

	int par[10];
	int num_par = 0;

	for(int i = 0; i < 10; i++){
		printf("\nInsira um número: ");
		fflush(stdout);
		scanf("%d", &par[i]);
	}

	printf("\n");
	printf("Números pares: ");
	for(int i = 0; i < 10; i++){
		if(par[i] % 2 == 0){
		printf("\nO número %d é par.", par[i]);
		num_par = num_par + 1;
		}
	}

	printf("\nTotal de números pares: %d", num_par);

	return 0;
}
