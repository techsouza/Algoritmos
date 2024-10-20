#include <stdio.h>
 
int main() {
	int m, n;
	int M = 9;
	int i, j, k, l;
	int soma;
	int matriz[M][M];
	int sudoku = 1;
	
	
	scanf("%d", &n);
	
	for (m = 1; m <= n; m++)
	{
		sudoku = 1;
		
		for(i = 0; i < M; i++)
			for(j = 0; j < M; j++)
				scanf("%d", &matriz[i][j]);
		
		for(k = 0; k < M && sudoku == 1; k++)
			for(i = 0; i < M - 1 && sudoku == 1; i++)
				for(j = i + 1; j < M && sudoku == 1; j++)
					if(matriz[k][i] == matriz[k][j])
						sudoku = 0;
		
		for(k = 0; k < M && sudoku == 1; k++)
			for(i = 0; i < M - 1 && sudoku == 1; i++)
				for(j = i + 1; j < M && sudoku == 1; j++)
					if(matriz[i][k] == matriz[j][k])
						sudoku = 0;
		
		
		
		for (k = 0; k < M && sudoku == 1; k += 3)
			for (l = 0; l < M && sudoku == 1; l += 3)
			{
				soma = 0;
				for (i = k; i < k + 3; i++)
					for (j = l; j < l + 3; j++)
						soma += matriz[i][j];
				
				if (soma != 45)
					sudoku = 0;
			}
			
		
		printf("Instancia %d\n", m);
		if (sudoku == 1)
			printf("SIM\n");
		else
			printf("NAO\n");
		
		printf("\n");
	}
	
	
	
    return 0;
} 