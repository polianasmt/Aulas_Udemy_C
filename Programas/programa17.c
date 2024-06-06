#include <stdio.h>
//Ponteiros

//endereço de memória como parametro de entrada
void incrementa(int* valor){

	printf("\nAntes de incrementar.\n");
	printf("\nO contador vale: %d\n", (*valor));
	printf("O endereço vale: %d\n", valor);

	printf("\nDepois de incrementar.\n");
/*
 * Só é incrementado após
 * valor++
 * valor--
 *
 * É incrementado antes
 * ++valor
 * --valor
 */

	printf("\nO contador vale: %d\n", ++(*valor));
	printf("O endereço vale: %d\n", valor);
}

int main(){

	/*
	 * quando declaramos uma variável, a linguagem C aloca
	 * um espaço em memória para colocar este valor
	 */

	int contador = 10;

	printf("\nAntes de incrementar.\n");
	printf("\nO contador vale: %d\n", contador);
	printf("O endereço vale: %d\n", &contador);

	//cópia por valor
	incrementa(&contador);

	printf("\nDepois de incrementar.\n");
	printf("\nO contador vale: %d\n", contador);
	printf("O endereço vale: %d\n", &contador);


	return 0;
}
