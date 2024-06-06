//peça ao usuario para digitar 3 números inteiros e imprima a soma deles

#include <stdio.h>

int main(){

	int num1, num2, num3;

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

	int soma;

	soma = num1 + num2 + num3;

	printf("A soma dos numeros '%d', '%d' e '%d' e: %d", num1, num2, num3, soma);

	return 0;
}
