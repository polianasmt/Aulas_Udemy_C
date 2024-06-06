//Faça um programa que leia 10 números e escreva o maior e o menor valor lido

#include <stdio.h>

int main(){

	int num, maior, menor = 0;

	for(int i = 0; i <= 10; i++){

		printf("Insira um número: ");
		fflush(stdout);
		scanf("%d", &num);

		if(i == 0){
			maior = num;
			menor = num;
		}
		if(num > maior){
			maior = num;
		}

		if(num < menor){
			menor = num;
		}


	}

	printf("O maior numero eh '%d', e o menor '%d'.", maior, menor);

	return 0;
}
