/*
 * Faça um programa que tenha uma função que, dado um caractere qualquer de entrada, retorne o mesmo
caractere sempre em maiúsculo.
 */

//#include <ctype.h>
#include <stdio.h>
#include "ajuda.h"

int main(){

	char cara;

	printf("Entre com um caractere: ");
	fflush(stdout);
	scanf("%c", &cara);

	printf("O caracter %c em maiusculo fica: %c", cara, maiusculo(cara));

	return 0;
}
