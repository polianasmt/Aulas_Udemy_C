//faça um programa que leia tres valores e apresente
//como resultado a soma dos quadrados dos valores lidos

#include <stdio.h>

int main(){

	int num1, num2, num3;
	int soma;

	printf("Insira o primeiro numero: ");
	fflush(stdout);
	scanf("%d", &num1);
	fflush(stdout);

	printf("Insira o segundo numero: ");
	fflush(stdout);
	scanf("%d", &num2);
	fflush(stdout);

	printf("Insira o terceiro numero: ");
	fflush(stdout);
	scanf("%d", &num3);
	fflush(stdout);

	soma = (num1 * num1) + (num2 * num2) + (num3 * num3);

	printf("A soma dos quadrados dos numeros '%d', '%d' e '%d' e: %d", num1, num2, num3, soma);

	return 0;
}
