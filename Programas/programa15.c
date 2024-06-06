#include <stdio.h>

//Protótipo de função
/*
 * Assinatura das funções
 *
 * - tipo de retorno
 * - nome
 * - parametros de entrada(opcional)
 */

int soma(int num1, int num2);

int main(){

	int n1, n2, ret;

	printf("Informe o primeiro número: ");
	fflush(stdout);
	scanf("%d", &n1);

	printf("Informe o segundo número: ");
	fflush(stdout);
	scanf("%d", &n2);

	ret = soma(n1, n2);

	printf("A soma de %d e %d é: %d", n1, n2, ret);

	return 0;
}

int soma(int num1, int num2){
	return num1 + num2;
}
