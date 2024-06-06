//Leia quatro notas, calcule a média aritmética e imprima o resultado.

#include <stdio.h>

int main (){

	int nota1, nota2, nota3, nota4;
	int media;

	printf("Insira a primeira nota: ");
	fflush(stdout);
	scanf("%d", &nota1);
	fflush(stdout);

	printf("Insira a segunda nota: ");
	fflush(stdout);
	scanf("%d", &nota2);
	fflush(stdout);

	printf("Insira a terceira nota: ");
	fflush(stdout);
	scanf("%d", &nota3);
	fflush(stdout);

	printf("Insira a quarta nota: ");
	fflush(stdout);
	scanf("%d", &nota4);
	fflush(stdout);

	media = (nota1 + nota2 + nota3 + nota4) / 4;

	printf("\nA media das notas '%d', '%d', '%d', e '%d', e: %d", nota1, nota2, nota3, nota4, media);

	return 0;
}
