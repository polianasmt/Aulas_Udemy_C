/* Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido proporcionalmente ao
valor que cada um deu para a realização da aposta. Faça um programa que leia quanto cada apostador
apostou, o valor do prêmio e imprima quanto cada um ganharia do prêmio com base no valor investido. */

#include <stdio.h>

int main(){

	float aposta1, aposta2, aposta3, total_aposta = 0;
	float premio = 0;
	float porcentagem1, porcentagem2, porcentagem3, total_porcentagem = 0;
	float premio1, premio2, premio3, total_premio;

	printf("Informe o valor da aposta do apostador 1: ");
	fflush(stdout);
	scanf("%f", &aposta1);
	fflush(stdout);

	printf("Informe o valor da aposta do apostador 2: ");
	fflush(stdout);
	scanf("%f", &aposta2);
	fflush(stdout);

	printf("Informe o valor da aposta do apostador 3: ");
	fflush(stdout);
	scanf("%f", &aposta3);
	fflush(stdout);

	printf("Informe o valor do premio: ");
	fflush(stdout);
	scanf("%f", &premio);
	fflush(stdout);

	total_aposta = (float)(aposta1 + aposta2 + aposta3);

	printf("O total de apostas foi de %.2f\n", total_aposta);

	porcentagem1 = (float)(aposta1 / total_aposta);
	porcentagem2 = (float)(aposta2 / total_aposta);
	porcentagem3 = (float)(aposta3 / total_aposta);

	total_porcentagem = (float)(porcentagem1 + porcentagem2 + porcentagem3);

	printf("O total de porcentagens é %.2f\n", total_porcentagem);

	premio1 = (float)(premio * porcentagem1);
	premio2 = (float)(premio * porcentagem2);
	premio3 = (float)(premio * porcentagem3);
	total_premio = (float)(premio1 + premio2 + premio3);

	printf("O total em premios é %.2f\n", total_premio);

	printf("O apostador 1 apostou %.2f que corresponde a %.2f e devera receber o premio de %.2f\n", aposta1, porcentagem1, premio1);
	printf("O apostador 2 apostou %.2f que corresponde a %.2f e devera receber o premio de %.2f\n", aposta2, porcentagem2, premio2);
	printf("O apostador 3 apostou %.2f que corresponde a %.2f e devera receber o premio de %.2f\n", aposta3, porcentagem3, premio3);


	return 0;
}
