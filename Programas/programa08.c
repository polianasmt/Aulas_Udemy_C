#include <stdio.h>
/*
 * Tipos de dados
 *
 * Booleanos(Verdadeiro/Falso) true/false
 *
 * Na linguagem C não existe um tipo de dado boolean, mas
 * a linguagem reconhece o valor 0 como falso(false) e qualquer
 * valor diferente de 0 como verdadeiro(true)
 *
 */

int main(){
	int booleano = 2;

	if (booleano){
		printf("verdadeiro");
	}else{
		printf("falso");
	}
}
