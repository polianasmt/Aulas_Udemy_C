#include <stdio.h>
#include <ctype.h>

void mensagem(){
	printf("bem-vindo!");
}

int soma(int num1, int num2){
	return num1 + num2;
}

int multiplicacao(int num1, int num2){
	return num1 * num2;
}


int maior_num(int vet[], int qtd){
	int maior = 0;

	for(int i = 0; i < qtd; i++){
		if (i == 0){
			maior = vet[i];
		}

		if(vet[i] > maior){
			maior = vet[i];
		}
	}

	return maior;
}

char maiusculo(char caracter){

	caracter = toupper(caracter);

	return caracter;
}

char exclama(char n){

	for(int i = 1; i <= n; i++){
		printf("\n");
		for(int j = 0; j < i; j++){
			printf("!");
		}
	}
	return n;
}
