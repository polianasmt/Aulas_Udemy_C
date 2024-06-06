#include <stdio.h>
/*
 * switch
 * - Usamos o switch em casos onde tenhamos uma estrutura grande
 * ou confusa de if/else/if else
 *
 * pseudocodigo
 *
 * escola(variavel)
 * inicio
 *
 * 	caso valor1:
 * 		instrucoes
 * 	caso valor2:
 * 		instrucoes
 *
 * fim
 *
 * na linguagem c
 *
 * switch(varivael){
 * 		case valor1:
 * 			instrucoes;
 * 			break;
 *
 * 		case valor2:
 * 			instrucoes;
 * 			break;
 *
 * 		default: //caso não cair em nenhum caso, ele vai direto para default
 * 			instrucoes;
 */

int main(){

	int valor;

	printf("Digite um valor de 1 a 7: ");
	fflush(stdout);
	scanf("%d", &valor);
	fflush(stdout);

	switch(valor){

	case 1:
		printf("Domingo\n");
		break;
	case 2:
		printf("Segunda\n");
		break;
	case 3:
		printf("Terça\n");
		break;
	case 4:
		printf("Quarta\n");
		break;
	case 5:
		printf("Quinta\n");
		break;
	case 6:
		printf("Sexta\n");
		break;
	case 7:
		printf("Sabado\n");
		break;
	default:
		printf("Valor invalido");

	}
}

