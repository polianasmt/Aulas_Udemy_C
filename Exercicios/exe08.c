/*Escreva um programa que declare um inteiro, inicialize-o com 0, incremente-o de 100 em 100, imprimindo
seu valor na tela, até que seu valor seja 100000 (cem mil).
*/

#include <stdio.h>

int main(){

	int num = 0;

	do{
		num = num + 100;
		printf("\n %d", num);

	}while(num != 100000);


	return 0;
}
