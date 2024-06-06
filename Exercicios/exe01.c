//faça um programa que leia um número inteiro e imprima

#include <stdio.h>

int main(){

	int num;

	printf("Insira um numero: ");
	fflush(stdout);
	scanf("%d", &num);
	fflush(stdout);

	printf("O numero e: %d", num);

	return 0;
}
