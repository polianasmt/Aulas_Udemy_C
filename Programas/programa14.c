#include <stdio.h>

//escrevendo funções

// Estrutura das funções
/*
 * - tipo de retorno
 * - nome
 * - parametros de entrada(opcional)
 * - implementação
 * - retorno (opcional)
 */

void mensagem(){
	printf("Bem-vindo!");
}

int soma(int num1, int num2){
	int res = num1 + num2;
	return res;
}

void proximo_char(char caractere){
	printf("%c", caractere+1);
}

int main(){

	mensagem();
	printf("\n%d\n", soma(2, 2));

	char cara = 97;
	proximo_char(cara);

	return 0;
}
