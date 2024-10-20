#include <stdio.h>
#include <stdlib.h>

void **aloca(int l, int c, char tipo);

int main()
{
	int **m;
	int l=12, c=12;
	char tipo;

	scanf("%c", &tipo);
	aloca(l, c, tipo);

	return 0;
}


void **aloca(int l, int c, char tipo)
{
	int i, j, aux1=1, aux2=10;
	double **v;
	double soma=0;

	v = malloc(l * sizeof(double*));
		for(i=0; i<c; i++)
			v[i] = malloc(c * sizeof(double));

	for(i=0; i<l; i++)
		for(j=0; j<c; j++)
			scanf("%lf", &v[i][j]);

	for(i=11; i>=7; i--)
	{
		for(j=aux1; j<=aux2; j++)
		{
			soma = soma + v[j][i];
		}
		aux1++;
		aux2--;
	}
	if(tipo == 'M')
	{
		soma = soma / 30.0;
	}
	printf("%.1lf\n", soma);
		
	free(v);
}