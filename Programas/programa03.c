#include <stdio.h>
//Estruturas de repetição for, while e do while
/*
 * utilizando for
 *
 * Faça um programa, no qual recebe e soma 5 numeros inteiros
 * e apresente a soma no final
 *
 */

int main(){

	//variaveis

	/*
	 * é importante incializar uma variavel que vai realizar algum tipo
	 * de operação. Nesse caso, se não inicializarmos soma, é capaz de no espaço
	 * de memoria onde a variavel se encontra tenha lixo, ou seja, numeros
	 * estranhos.
	 *
	 */
	int numero, soma = 0;

	//inicialização, criterio de parada, forma de incremento
	for(int i = 0; i < 5; i++){

	//entrada
	printf("%d - Informe um numero: ", i);
	fflush(stdout);
	scanf("%d", &numero);
	fflush(stdout);

	//processamento
	soma = soma + numero;
	}

	//saida
	printf("\nA soma eh %d", soma);

	return 0;
}
