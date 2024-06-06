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

	//declaração de uma string em C
	char nome[50]; //49 caracteres + \0 que finaliza a string

	printf("Qual e seu nome? ");
	fflush(stdout);
	gets(nome); //para receber uma string em C utilizamos o Gets inves do scanf

	printf("Seu nome e %s", nome);
}
