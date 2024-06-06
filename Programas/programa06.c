#include <stdio.h>

/*
 * Tipos de dados alfanumericos:
 * 	caracteres
 * 	strings
 *
 * Na linguagem C, não existe o tipo de dado String
 *
 * ex: String
 * "jsigjtiosejtoijgsoirjt"
 *
 * ex: Caractere
 * 's'
 *
 */

int main(){


	//gerar um alfabeto com um loop (usando a tabela ASCII)
	for(int i = 97; i <= 122; i++){
		printf("%c\n", i);
	}
}
