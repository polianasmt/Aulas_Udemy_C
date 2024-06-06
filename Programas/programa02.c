#include <stdio.h>

int main(){

	int idade;

	//entrada
	printf("Qual a sua idade? ");
	fflush(stdout);
	scanf("%d", &idade);
	fflush(stdout);

	//processamento
	if(idade < 18){
		printf("Voce e menor de idade.");
	}else if(idade >= 18 && idade < 60){
		printf("Voce e adulto.");
	}else{
		printf("Voce e idoso.");
	}

	//saida
	printf("\nSua idade e %d", idade);

	return 0;
}
