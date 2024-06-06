#include <stdio.h>

/*
 * Estrutura de repetição
 * while (enquanto)
 *
 * Utilizado quando você precisa de um loop onde não se tenha um
 * numero fixo de elemento mas que tenha um criterio de parada
 * e antes de iniciar o loop a condição é checada.
 *
 */

int main(){

	int numero, soma = 0;

	//entrada
	printf("Informe um numero: ");
	fflush(stdout);
	scanf("%d", &numero);
	fflush(stdout);

	while(numero != 0){

		soma = soma + numero;

		//entrada
		printf("Informe um numero: ");
		fflush(stdout);
		scanf("%d", &numero);
		fflush(stdout);
	}

	printf("A soma é %d", soma);

	return 0;
}
