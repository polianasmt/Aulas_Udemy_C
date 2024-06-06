#include <stdio.h>

/*
 * Estrutura de repetição
 * do while (façan enquanto)
 *
 * Utilizado quando você precisa de um loop onde não se tenha um
 * numero fixo de elemento mas que tenha um criterio de parada
 * e a condição de parada é checada após a primeira execução.
 *
 */

int main(){

	int numero, soma = 0;

	do{
		//entrada
		printf("Informe um numero: ");
		fflush(stdout);
		scanf("%d", &numero);
		fflush(stdout);

		//processamento
		soma = soma + numero;

	}while(numero != 0);

	printf("A soma é %d", soma);

	return 0;
}
