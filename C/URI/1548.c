#include <stdio.h>
#include <stdlib.h>
#define MAX 10000

void troca(int *a, int *b)
	{
		int aux;

		aux = *a;
		*a = *b;
		*b = aux;
	}
int separa(int p, int r, int v[MAX])
	{
		int x, i, j;
		x = v[p];
		i = p - 1;
		j = r + 1;
	
		while (1)
		{
			do
			{
				j--;
			} while (v[j] < x);
			do 
			{
				i++;
			} while (v[i] > x);
			if (i < j)
			{
				troca(&v[i], &v[j]);
			}
			else
			{
				return j;
				
			}
		}
	}
void quicksort(int p, int r, int v[MAX])
	{
		int q;
		if (p < r) {
			q = separa(p, r, v);
			quicksort(p, q, v);
			quicksort(q+1, r, v);
		}

	}

int main()
{
	int i, caso, tam, vetor[MAX], aux[MAX], total=0;

	scanf("%d", &caso);

	for(; caso>0; caso--)
	{
		total=0;
		scanf("%d", &tam);

		for(i=0; i<tam; i++)
		{
			scanf("%d", &vetor[i]);
		}
		for(i=0; i<tam; i++)
		{
			aux[i] = vetor[i];
		}
		quicksort(0, tam-1, vetor);
		for(i=0; i<tam; i++)
		{
			if(aux[i] == vetor[i])
				total++;
		}
		printf("%d\n", total);
	}
	return 0;
}