#include <stdio.h>
//vetores pt 1

// array uni-dimensional
int main(){

	//vetores e strings
	char nome[50];
	printf("Qual o seu nome? ");
	fflush(stdout);
	gets(nome);
	printf("Ola %s\n", nome);

	//vetores e caracteres
	char letras[26]; //0...n-1

	int contador = 0;
	for(int i = 97; i <= 122; i ++){
		letras[contador] = i;
		contador = contador + 1;
	}

	for(int i = 0; i <26; i ++){
		printf("%d == %c\n", letras[i], letras[i]);
	}

	//char l = 'l'
	//char a = '97'
	//um número pode ser caractere

	//vetores e inteiros
	//int numeros[10];


	//vetores e reais
	//float vetores[5];

	return 0;
}
