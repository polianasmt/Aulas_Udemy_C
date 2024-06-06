//Aula sobre variáveis
#include <stdio.h>

int main(){//a chave delimita um bloco de código(inicio do bloco)

	//Declarando variáveis
	int idade = 0;

	//Função para escrever algo na saída padrão(console)
	printf("Qual e a sua idade? ");//o ponto e vírgula finaliza um comando
	fflush(stdout);
	//receber dados
	scanf("%d", &idade);
	fflush(stdout);

	//saída
	printf("A sua idade e %d", idade);

	return 0;
}//fim do bloco
