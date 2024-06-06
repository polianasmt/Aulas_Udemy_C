#include <stdio.h>
//matrizes pt 2

/* array uni-dimensional (vetores) int numeros[5]
[0][1][2][3][4]

array multi-dimensional (matrizes) int numeros[5][5]

[00][01][02][03][04]
[10][11][12][13][14]
[20][21][22][23][24]
[30][31][32][33][34]
[40][41][42][43][44]

*/
int main(){

	//vetores de inteiros
//	int numeros[2][2];
//	numeros[0][0] = 1;
//	numeros[0][1] = 2;
//	numeros[1][0] = 3;
//	numeros[1][1] = 4;
//
//	for(int i = 0; i < 2; i++){
//		for(int j = 0; j < 2; j++){
//			printf("numeros[%d][%d] = vale %d\n", i, j, numeros[i][j]);
//		}
//	}

	//vetores e reais
	float valores[2][2];
	int i, j;

	for (i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			printf("Insira um número: ");
			fflush(stdout);
			scanf("%f", &valores[i][j]);

		}

	}
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
		printf("[%d][%d] = %.2f\n", i, j, valores[i][j]);
		}
	}

	return 0;
}
