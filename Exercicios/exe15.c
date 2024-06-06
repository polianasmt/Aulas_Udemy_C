/*
 * 3. Faça um programa que tenha uma função que dado um valor numérico de entrada, gere e imprima como
saída o número de linhas com pontos de exclamação, conforme exemplo abaixo (para n = 5):
!
!!
!!!
!!!!
!!!!!
 */

#include <stdio.h>
#include "ajuda.h"

int main(){

	int num;
	printf("Insira um número: ");
	fflush(stdout);
	scanf("%d", &num);

	exclama(num);

	return 0;
}
